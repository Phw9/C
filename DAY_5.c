#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	// 11-1-1

	/*int idx = 0;
	int max, min, sum = 0;
	int arr1[5];
	for (idx = 0; idx < 5; idx++)
	{
		printf("%d��° �迭 ���� �Է�: ", idx);
		scanf("%d", &arr1[idx]);
	}
	max = arr1[0];
	min = arr1[0];
	idx = 0;
	do
	{

		if (arr1[idx] < arr1[idx + 1])
		{
			max = arr1[idx + 1];
		}
		else
		{
			min = arr1[idx];
		}
		idx++;
		sum += arr1[idx];
	} while (idx < 4);

	printf("Min : %d\n", min);
	printf("Max : %d\n", max);
	printf("Sum : %d\n", sum);*/

	// 11-1-2

	/*char arr1[] = "Good time";
	int arr1Len = sizeof(arr1) / sizeof(char);

	for (int idx = 0; idx < arr1Len; idx++)
	{
		printf("%c", arr1[idx]);
	}
	printf("\n\n");*/

	// 11-2-1

	/*char arr1[50];
	int idx = 0;
	printf("���ڿ� �Է�: ");
	scanf("%s", &arr1);
	for (idx = 0; arr1[idx] != '\0'; idx++);
	printf("���ڿ��� ���̴� : %d\n", idx);*/

	// 11-2-2  ����

	/*char arr1[50];
	int idx = 0, arr1Len;
	printf("���ڿ� �Է�: ");
	scanf("%s", &arr1);
	for (idx = 0; arr1[idx] != '\0'; idx++)
	{
		printf("%s", arr1[idx]);
	}
	printf("\n\n");

	for (; idx < 0; idx--)
	{
		printf("%s", arr1[arr1Len - 1]);
	}*/

	// 11-2-3

	/*char arr1[50];
	int len = 0, idx;
	char max = 0;

	printf("���ܾ� �Է� : ");
	scanf("%s", arr1);

	for (len = 0; arr1[len] != '\0'; len++);

	for (idx = 0; idx < len; idx++)
	{
		if (max < arr1[idx])
		{
			max = arr1[idx];
		}
	}
	printf("���� ū �� : %c\n", max);*/

	//12-1-1 ��� �����ϱ�


		//int num = 10;	// int�� num 10���� ����, �ʱ�ȭ
		//int* ptr1 = &num;	// ptr1 int�� �������� ������ num�ּ� �� ����
		//int* ptr2 = ptr1;	// ptr2 int�� �������� ������ ptr1 �ּҰ� ����

		//(*ptr1)++;	//	num�� ��������
		//(*ptr2)++;	//	num�� �ѹ� �� ����

		//printf("%d \n", num);

		
	//12-1-2
	
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;

	(*ptr1) += 10;
	(*ptr2) -= 10;

	/*ptr1 = &num2;
	ptr2 = &num1;*/       // ���� ����
	
	/*int* temp;
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;*/


	printf("%d %d\n", *ptr1, *ptr2);

	


	return 0;
}