#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

struct point
{
	int xpos;
	int ypos;
};

void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0; // 0 = '\0'
}

void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');
}

int main(void)
{
	//ReadWriteChar.c

	//int ch1, ch2;

	//ch1 = getchar();	//���� �Է�
	//ch2 = fgetc(stdin);	//����Ű �Է�

	//putchar(ch1);		//���� ���
	//fputc(ch2, stdout);	//����Ű ���
	
	//ConsoleEOF.c

	/*int ch;

	while (1)
	{
		ch = getchar();
		if (ch == EOF)
			break;
		putchar(ch);
	}*/

	//21-1-1

	/*int ch;
	

	ch = fgetc(stdin);
	if (ch >= 'A' && ch <= 'Z') 
	{
		ch += 32;
	}
	else if (ch >= 'a' && ch <= 'z') 
	{
		ch -= 32;
	}
	else {
		printf("%c is not alphabet.\n",ch);
	}
	fputc(ch, stdout);*/

	//WriteString.c

	/*char* str = "Simple String";

	printf("1. puts test -----\n");
	puts(str);
	puts("So Simple");

	printf("2. fputs test -----\n");
	fputs(str, stdout); printf("\n");
	fputs("So Simple fputs", stdout); printf("\n");

	printf("3. end of main -----");*/

	//ReadString.c

	/*char str[7];
	int i;

	for (i = 0; i < 3; i++)
	{
		fgets(str, sizeof(str), stdin);
		printf("Read %d: %s\n", i + 1, str);
	}*/

	//char perID[7];
	//char name[10];

	//fputs("�ֹι�ȣ �� 6�ڸ� �Է�: ", stdout);
	//fgets(perID, sizeof(perID), stdin);
	//ClearLineFromReadBuffer();		//�Է¹��� ���� fflush(stdin); ��� �̰� �̿��ؾ��Ѵ�.

	//fputs("�̸� �Է�: ", stdout);
	//fgets(name, sizeof(name), stdin);

	//printf("�ֹι�ȣ: %s\n", perID);
	//printf("�̸�: %s\n", name);

	//RemoveBSN.c

	/*char str[100];
	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);
	printf("����: %d, ����: %s\n", strlen(str), str);

	RemoveBSN(str);
	printf("����: %d, ����: %s\n", strlen(str), str);*/

	//StringCopyCase.c

	//char str1[20] = "1234567890";
	//char str2[20];
	//char str3[5];

	///* *** case 1 *** */
	//strcpy(str2, str1);
	//puts(str2);

	///* *** case 2 *** */
	//strncpy(str3, str1, sizeof(str3));
	//puts(str3);

	///* *** case 3 *** */
	//strncpy(str3, str1, sizeof(str3) - 1);
	//str3[sizeof(str3) - 1] = '\0';
	//puts(str3);

	//StringConcatCase.c

	//char str1[20] = "First~";
	//char str2[20] = "Second";

	//char str3[20] = "Simple num: ";
	//char str4[20] = "1234567890";

	///* *** case 1 *** */
	//strcat(str1, str2);
	//puts(str1);

	///* *** case 2 *** */
	//strncat(str3, str4, 7);
	//puts(str3);

	//StringCompCase.c

	//char str1[20];
	//char str2[20];
	//printf("���ڿ� �Է�1: ");
	//scanf("%s", str1);
	//printf("���ڿ� �Է�2: ");
	//scanf("%s", str2);

	//if (!strcmp(str1, str2))	//!strcmp(str1,str2)�� strcmp(str1,str2)==0 ��� ���� ǥ���Ǵ½� True�� False�� False�� True��
	//{
	//	puts("�� ���ڿ��� �Ϻ��� �����մϴ�.");
	//}
	//else
	//{
	//	puts("�� ���ڿ��� �������� �ʽ��ϴ�.");

	//	if (!strncmp(str1, str2, 3))
	//		puts("�׷��� �� �����ڴ� �����մϴ�.");
	//}

	//ConvStringToPrimitive.c

	/*char str[20];
	printf("���� �Է�: ");
	scanf("%s", str);
	printf("%d \n", atoi(str));

	printf("�Ǽ� �Է�: ");
	scanf("%s", str);
	printf("%g \n", atof(str));*/


	//TwoPointDistance.c

	/*struct point pos1, pos2;
	double distance;

	fputs("point1 pos: ", stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos);

	fputs("point2 pos: ", stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);

	distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));
	fputs("�� ���� �Ÿ��� : ", stdout);
	printf("%g\n", distance);*/

	return 0;
	
	


}