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
	puts("�� �Բ� �θ���~!");
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