#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


typedef struct dbshort
{
	unsigned short upper;
	unsigned short lower;
}DBShort;

typedef union rdbuf
{
	int iBuf;
	char bBuf[4];
	DBShort sBuf;
}RDBuf;

typedef struct sbox
{
	int mem1;
	int mem2;
	double mem3;
}SBox;

typedef union ubox
{
	int mem1;
	int mem2;
	double mem3;
}UBox;

typedef enum syllable
{
	Do = 1, Re, Mi, Fa, So, La, Ti
}Syllable;

void Sound(Syllable sy)
{
	switch (sy)
	{
	case Do:
		puts("도도도도"); return;
	case Re:
		puts("레레레레"); return;
	case Mi:
		puts("미미미미"); return;
	case Fa:
		puts("파파파파"); return;
	case So:
		puts("솔솔솔솔"); return;
	case La:
		puts("라라라라"); return;
	case Ti:
		puts("시시시시"); return;
	}
	puts("다 함께");
}
typedef struct fren
{
	char name[10];
	char sex;
	int age;
} Friend;


int main(void)
{
	//UnionAcces.c

	/*UBox ubx;
	ubx.mem1 = 20;
	printf("%d\n", ubx.mem2);

	ubx.mem3 = 7.15;
	printf("%d\n", ubx.mem1);
	printf("%d\n", ubx.mem2);
	printf("%g\n", ubx.mem3);*/

	//UsefulUnionAccess.c



	/*RDBuf buf;
	printf("정수 입력: ");
	scanf("%d", &(buf.iBuf));
	printf("상위 2바이트: %u\n", buf.sBuf.upper);
	printf("상위 2바이트: %u\n", buf.sBuf.lower);
	printf("상위 1바이트 아스키코드: %c\n", buf.bBuf[0]);
	printf("하위 1바이트 아스키코드: %c\n", buf.bBuf[3]);*/

	//EnumTypeTone.c

	/*Syllable tone;
	for (tone = Do; tone <= Ti; tone += 1)
		Sound(tone);*/

		//FirstFileWrite.c

		/*FILE* fp = fopen("data.txt", "wt");
		if (fp == NULL)
		{
			puts("fail");
			return -1;
		}

		fputc('A', fp);
		fputc('B', fp);
		fputc('C', fp);
		fputc('D', fp);
		fclose(fp);*/

		//FirstFileRead.c

	/*int ch, i;
	FILE* fp = fopen("data.txt", "rt");
	if (fp = NULL)
	{
		puts("fail");
		return -1;
	}

	for (i = 0; i < 4; i++)
	{
		ch = fgetc(fp);
		printf("%c \n", ch);
	}
	fclose(fp);*/

	//TextDataFileWrite.c

	/*FILE* fp = fopen("simple.txt", "wt");
	if (fp = NULL)
	{
		puts("파일 오픈 실패");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc("My name is Park\n", fp);
	fputc("Your name is A\n", fp);
	fclose(fp);*/

	//TextDataFileRead.c

	/*char str[30];
	int ch;
	FILE* fp = fopen("simple.txt", "rt");
	if (fp = NULL)
	{
		puts("실패");
		return -1;
	}

	ch = fgetc(fp);
	printf("%c\n", ch);
	ch = fgetc(fp);
	printf("%c\n", ch);

	fgets(str, sizeof(str), fp);*/

	//TextCharFileCopy.c

	/*FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("dst.txt", "wt");
	int ch;

	if (src == NULL || des = NULL)
	{
		puts("파일 오픈 실패");
		return -1;
	}

	while ((ch = fgetc(src)) != EOF)
		fputc(ch, des);

	if (feopf(src) != 0)
		puts("파일 복사 완료");
	else
		puts("파일복사x");

	fclose(src);
	fclose(des);*/

	//TextStringFilecopy.c

	/*FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("des.txt", "wt");
	char str[20];

	if (src == NULL || des == NULL)
	{
		puts("파일오픈x");
		return -1;
	}

	while (fgets(str, sizeof(str), src) != NULL)
		fputs(str, des);

	if (feof(src) != 0)
		puts("파일복사 완료");
	else
		puts("파일복사 실패");

	fclose(src);
	fclose(des);*/
	

	//BinaryFilecopy.c

	/*FILE* src = fopen("src.bin", "rb");
	FILE* des = fopen("dst.bin", "wb");
	char buf[20];
	int readCnt;

	if (src == NULL || des == NULL)
	{
		puts("파일오픈x");
		return -1;
	}

	while (1)
	{
		readCnt = fread((void*)buf, 1, sizeof(buf), src);

		if (readCnt < sizeof(buf))
		{
			if (feof(src) != 0)
			{
				fwrite((void*)buf, 1, sizeof(buf), src);
				puts("파일복사완료");
				break;
			}
			else
				puts("파일복사실패");

			break;
		}
		
		fwrite((void*)buf, 1, sizeof(buf), des);

	}

	fclose(src);
	fclose(des);*/

	//ComplexFileWrite.c

	/*char name[10];
	char sex;
	int age;

	FILE* fp = fopen("friend.txt", "wt");
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("이름 성별 나이 순 입력: ");
		scanf("%s %c %d", name, &sex, &age);
		getchar();
		fprintf(fp, "%s %c %d", name, sex, age);
	}
	fclose(fp);*/

	//ComplexFileRead.c

	/*char name[10];
	char sex;
	int age;

	FILE* fp = fopen("friend.txt", "rt");
	int ret;

	while (1)
	{
		ret = fscanf(fp, "%s %c %d", name, &sex, &age);
		if (ret == EOF)
			break;
		printf("%s %c %d \n", name, sex, age);
	}
	fclose(fp);*/

	//StructFileWriteRead.c

	/*FILE* fp;
	Friend myfren1;
	Friend myfren2;

	fp = fopen("friend.bin", "wb");
	printf("이름, 성별, 나이 순 입력: ");
	scanf("%s %c %d", myfren1.name, &(myfren1.sex), &(myfren1.age));
	fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);
	fclose(fp);

	fp = fopen("friend.bin", "rb");
	fread((void*)&myfren2, sizeof(myfren2), 1, fp);
	printf("%s %c %d\n", myfren2.name, myfren2.sex, myfren2.age);
	fclose(fp);*/
	
	//MoveFileREWrPos.c

	/*FILE* fp = fopen("text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);

	fp = fopen("text.txt", "rt");
	
	fseek(fp, -2, SEEK_END);
	putchar(fgetc(fp));

	fseek(fp, 2, SEEK_SET);
	putchar(fgetc(fp));

	fseek(fp, 2, SEEK_CUR);
	putchar(fgetc(fp));

	fclose(fp);*/

	//TellFileReWrPos.c

	/*long fpos;
	int i;

	FILE* fp = fopen("text.txt", "wt");
	fputs("1234-", fp);
	fclose(fp);

	fp = fopen("text.txt", "rt");

	for (i = 0; i < 4; i++)
	{
		putchar(fgetc(fp));
		fpos = ftell(fp);
		fseek(fp, -1, SEEK_END);
		putchar(fgetc(fp));
		fseek(fp, fpos, SEEK_SET);
	}
	close(fp);*/

	return 0;

}