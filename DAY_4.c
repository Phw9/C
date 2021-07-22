#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	//Condition Operator.c
	/*int num, abs;
	printf("정수 입력: ");
	scanf("%d",&num);
	abs = (num > 0) ? num : num * (-1);

	printf("정수 %d의 절대값은 %d\n", num, abs);*/

	// 8-1-1 while

	/*int i = 1;

	while (i < 100)
	{
		if (i % 7 == 0 || i % 9 == 0)
		{
			printf("%d ", i);
		}
		i++;
	}*/
	
	// 8-1-1 for

	/*int i;
	for (i = 1; i < 100; i++)
		if (i % 7 == 0 || i % 9 == 0)
			printf("%d ", i);*/

	// 8-1-2,4

	/*int n1, n2, diff;
	printf("두 수 입력: ");
	scanf("%d %d", &n1, &n2);

	diff = n1 - n2;
	printf("차이는 : %d\n", (diff > 0) ? diff : diff * (-1));*/

	// 8-1-3

	/*int kor, eng, math;
	double avg;
	printf("국어점수 : ");
	scanf("%d",&kor);
	printf("영어점수 : ");
	scanf("%d", &eng);
	printf("수학점수 : ");
	scanf("%d", &math);
	avg = (double)(kor + eng + math) / 3;
	if (avg >= 90)
	{
		printf("A 입니다.\n");
	}
	else if (avg >= 80)
	{
		printf("B 입니다.\n");
	}
	else if (avg >= 70)
	{
		printf("C 입니다.\n");
	}
	else if (avg >= 50)
	{
		printf("D 입니다.\n");
	}
	else
	{
		printf("F 입니다.\n");
	}*/


	
	return 0;

}