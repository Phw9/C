#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	//Condition Operator.c
	/*int num, abs;
	printf("���� �Է�: ");
	scanf("%d",&num);
	abs = (num > 0) ? num : num * (-1);

	printf("���� %d�� ���밪�� %d\n", num, abs);*/

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
	printf("�� �� �Է�: ");
	scanf("%d %d", &n1, &n2);

	diff = n1 - n2;
	printf("���̴� : %d\n", (diff > 0) ? diff : diff * (-1));*/

	// 8-1-3

	/*int kor, eng, math;
	double avg;
	printf("�������� : ");
	scanf("%d",&kor);
	printf("�������� : ");
	scanf("%d", &eng);
	printf("�������� : ");
	scanf("%d", &math);
	avg = (double)(kor + eng + math) / 3;
	if (avg >= 90)
	{
		printf("A �Դϴ�.\n");
	}
	else if (avg >= 80)
	{
		printf("B �Դϴ�.\n");
	}
	else if (avg >= 70)
	{
		printf("C �Դϴ�.\n");
	}
	else if (avg >= 50)
	{
		printf("D �Դϴ�.\n");
	}
	else
	{
		printf("F �Դϴ�.\n");
	}*/


	
	return 0;

}