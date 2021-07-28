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

	//ch1 = getchar();	//문자 입력
	//ch2 = fgetc(stdin);	//엔터키 입력

	//putchar(ch1);		//문자 출력
	//fputc(ch2, stdout);	//엔터키 출력
	
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

	//fputs("주민번호 앞 6자리 입력: ", stdout);
	//fgets(perID, sizeof(perID), stdin);
	//ClearLineFromReadBuffer();		//입력버퍼 비우기 fflush(stdin); 대신 이걸 이용해야한다.

	//fputs("이름 입력: ", stdout);
	//fgets(name, sizeof(name), stdin);

	//printf("주민번호: %s\n", perID);
	//printf("이름: %s\n", name);

	//RemoveBSN.c

	/*char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s\n", strlen(str), str);

	RemoveBSN(str);
	printf("길이: %d, 내용: %s\n", strlen(str), str);*/

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
	//printf("문자열 입력1: ");
	//scanf("%s", str1);
	//printf("문자열 입력2: ");
	//scanf("%s", str2);

	//if (!strcmp(str1, str2))	//!strcmp(str1,str2)는 strcmp(str1,str2)==0 대신 많이 표현되는식 True를 False로 False를 True로
	//{
	//	puts("두 문자열은 완벽히 동일합니다.");
	//}
	//else
	//{
	//	puts("두 문자열은 동일하지 않습니다.");

	//	if (!strncmp(str1, str2, 3))
	//		puts("그러나 앞 세글자는 동일합니다.");
	//}

	//ConvStringToPrimitive.c

	/*char str[20];
	printf("정수 입력: ");
	scanf("%s", str);
	printf("%d \n", atoi(str));

	printf("실수 입력: ");
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
	fputs("두 점의 거리는 : ", stdout);
	printf("%g\n", distance);*/

	return 0;
	
	


}