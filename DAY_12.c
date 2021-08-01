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
		puts("��������"); return;
	case Re:
		puts("��������"); return;
	case Mi:
		puts("�̹̹̹�"); return;
	case Fa:
		puts("��������"); return;
	case So:
		puts("�ּּּ�"); return;
	case La:
		puts("�����"); return;
	case Ti:
		puts("�ýýý�"); return;
	}
	puts("�� �Բ�");
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
	printf("���� �Է�: ");
	scanf("%d", &(buf.iBuf));
	printf("���� 2����Ʈ: %u\n", buf.sBuf.upper);
	printf("���� 2����Ʈ: %u\n", buf.sBuf.lower);
	printf("���� 1����Ʈ �ƽ�Ű�ڵ�: %c\n", buf.bBuf[0]);
	printf("���� 1����Ʈ �ƽ�Ű�ڵ�: %c\n", buf.bBuf[3]);*/

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
		puts("���� ���� ����");
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
		puts("����");
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
		puts("���� ���� ����");
		return -1;
	}

	while ((ch = fgetc(src)) != EOF)
		fputc(ch, des);

	if (feopf(src) != 0)
		puts("���� ���� �Ϸ�");
	else
		puts("���Ϻ���x");

	fclose(src);
	fclose(des);*/

	//TextStringFilecopy.c

	/*FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("des.txt", "wt");
	char str[20];

	if (src == NULL || des == NULL)
	{
		puts("���Ͽ���x");
		return -1;
	}

	while (fgets(str, sizeof(str), src) != NULL)
		fputs(str, des);

	if (feof(src) != 0)
		puts("���Ϻ��� �Ϸ�");
	else
		puts("���Ϻ��� ����");

	fclose(src);
	fclose(des);*/
	

	//BinaryFilecopy.c

	/*FILE* src = fopen("src.bin", "rb");
	FILE* des = fopen("dst.bin", "wb");
	char buf[20];
	int readCnt;

	if (src == NULL || des == NULL)
	{
		puts("���Ͽ���x");
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
				puts("���Ϻ���Ϸ�");
				break;
			}
			else
				puts("���Ϻ������");

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
		printf("�̸� ���� ���� �� �Է�: ");
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
	printf("�̸�, ����, ���� �� �Է�: ");
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