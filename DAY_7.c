#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void ShowArayElem(int* param, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d ", param[i]);
	}
	printf("\n\n");
}
void AddArayElem(int* param, int len, int Add)
{
	int i;
	for (i = 0; i < len; i++)
	{
		param[i] += Add;
		printf("%d ", param[i]);
	}
}
void SquareByValue(int n1)
{
	int n2 = n1;
	n1 *= n1;
	printf("%d�� ������ %d�̴�.\n", n2, n1);

}
void SquareByReference(int* ptr1)
{
	int n1 = *ptr1;
	*ptr1 *= *ptr1;
	printf("%d�� ������ %d�̴�.\n", n1, *ptr1);
}
void Swap3(int* ptr1, int* ptr2, int* ptr3)
{
	int temp = *ptr1;
	*ptr1 = *ptr3;
	*ptr3 = *ptr2;
	*ptr2 = temp;
}
void SwapIntPtr(int* p1, int* p2)
{
	int* temp = p1;
	p1 = p2;
	p2 = temp;
}
void SwapIntDptr(int** p1, int** p2)
{
	int* temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main(void)
{
	//ArrayParam.c

	/*int arr1[5] = { 1,2,3,4,5 };

	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
	AddArayElem(arr1, sizeof(arr1) / sizeof(int), 3);*/

	//14-1-1

	/*SquareByValue(4);
	int num = 4;
	SquareByReference(&num);*/

	//14-1-2

	/*int n1 = 1, n2 = 2, n3 = 3;

	Swap3(&n1, &n2, &n3);
	printf("%d %d %d\n", n1, n2, n3);
	Swap3(&n1, &n2, &n3);
	printf("%d %d %d\n", n1, n2, n3);
	Swap3(&n1, &n2, &n3);
	printf("%d %d %d\n", n1, n2, n3);*/


	//14-2-2 �������� �����ʹ� const�� ������ �� ����.

	/*int num = 10;
	const int* ptr = &num;
	int* rptr = ptr;
	printf("%d\n", *ptr);
	*rptr = 20;
	printf("%d\n", *ptr);*/

	//2Dim_PopuResearch.c

	//int villa[3][2];		//3���̰� ������ 2ȣ�� �ִ� ����
	//int popu, i, j;

	////������ �����ο� �Է¹ޱ�
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 2; j++)
	//	{
	//		printf("%d�� %dȣ �α��� : ", i+1, j+1);
	//		scanf("%d", &villa[i][j]);
	//	}
	//}
	////���� ���� �α��� ����ϱ�

	//for (i = 0; i < 3; i++)
	//{
	//	popu = 0;
	//	for (j = 0; j < 2; j++)
	//	{
	//		popu += villa[i][j];
	//	}
	//	printf("%d���� �α��� : %d\n", i+1, popu);

	//}

	//1Dim_PopuResearcch.c

	//������ �����ο� �Է¹ޱ�
	//int villa[6];		//3���̰� ������ 2ȣ�� �ִ� ����
	//int popu = 0, i, j;
	//for (i = 0; i < 6; i++)
	//{
	//	printf("%d�� %dȣ �α��� : ", (i / 2) + 1, (i % 2) + 1);
	//	scanf("%d", &villa[i]);
	//}

	////���� ���� �α��� ����ϱ�

	//for (i = 0; i < 6; i++)
	//{
	//	popu += villa[i];
	//	if (i % 2 == 1)
	//	{
	//		printf("%d���� �α��� : %d\n", (i / 2) + 1, popu);
	//		popu = 0;
	//	}

	//}

	//16-1-1

	/*int arr1[3][9];
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
		{
			arr1[i][j] = (i + 2) * (j + 1);
			printf("%d ", arr1[i][j]);
		}
		printf("\n\n");
	}*/


	//16-1-2

	/*int arr1[2][4] = {
		{1,2,3,4},
		{5,6,7,8}
	};
	int arr2[4][2];
	int i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			arr2[i][j] = arr1[j][i];
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}*/
	
	//16-1-3

	//PointerSwapFail.c
	
	
	/*int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2 : %d %d\n", *ptr1, *ptr2);
	
	SwapIntPtr(ptr1, ptr2);
	printf("*ptr1, *ptr2 : %d %d\n", *ptr1, *ptr2);*/

	//PointerSwapSuccess.c

	/*int num1 = 10, num2 = 20;
	int* ptr1, *ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2 : %d %d\n", *ptr1, *ptr2);

	SwapIntDptr(&ptr1, &ptr2);
	printf("*ptr1, *ptr2 : %d %d\n", *ptr1, *ptr2);*/

	
	return 0;
}