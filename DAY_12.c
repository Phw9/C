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
	puts("다 함께 부르세~!");
}

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

	int ch, i;
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
	fclose(fp);

	return 0;

}