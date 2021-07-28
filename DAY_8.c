#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void SwapIntPtr(int* p1, int* p2)
{
	int* temp = p1;
	p1 = p2;
	p2 = temp;
}
void ShowArr2DStyle(int(*arr)[4], int row)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
}

int Sum2DArr(int(*arr)[4], int row)
{
	int i, j, sum = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < 4; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

void SimpleAdder(int n1, int n2)
{
	printf("%d + %d = %d\n", n1, n2, n1 + n2);
}

void ShowString(char* str)
{
	printf("%s\n", str);
}

int WhoIsFirst(int age1, int age2, int(*cmp)(int n1, int n2))
{
	return cmp(age1, age2);
}

int OlderFirst(int age1, int age2)
{
	if (age1 > age2)
		return age1;
	else if (age1 < age2)
		return age2;
	else
		return 0;
}

int YoungerFirst(int age1, int age2)
{
	if (age1 < age2)
		return age1;
	else if (age1 > age2)
		return age2;
	else
		return 0;
}

void SoSimpleFunc(void)
{
	printf("I'm so simple");
}


int main(void)
{

	//DoublePointer Access.c

	/*double num = 3.14;
	double* ptr = &num;
	double** dptr = &ptr;
	double* ptr2;

	printf("%9p %9p \n", ptr, *dptr);
	printf("%9g %9g \n", num, **dptr);
	ptr2 = *dptr;
	*ptr2 = 10.99;
	printf("%9g %9g \n", num, **dptr);*/

	//PointerArrayType.c

	/*int num1 = 10, num2 = 20, num3 = 30;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	int* ptrArr[] = { ptr1,ptr2,ptr3 };
	int** dptr = ptrArr;

	printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
	printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));*/

	//TriplePointer.c

	/*int num = 100;
	int* ptr = &num;
	int** dptr = &ptr;
	int*** tptr = &dptr;

	printf("%d %d %d\n", ***tptr, **dptr, *ptr);*/

	//2DArrayAddress.c

	/*int arr2d[3][3];
	printf("%d\n", arr2d);
	printf("%d\n", arr2d[0]);
	printf("%d\n\n", &arr2d[0][0]);

	printf("%d\n", arr2d[1]);
	printf("%d\n\n", &arr2d[1][0]);

	printf("%d\n", arr2d[2]);
	printf("%d\n\n", &arr2d[2][0]);

	printf("sizeof(arr2d): %d\n", sizeof(arr2d));
	printf("sizeof(arr2d[0]): %d\n", sizeof(arr2d[0]));
	printf("sizeof(arr2d[1]): %d\n", sizeof(arr2d[1]));
	printf("sizeof(arr2d[2]): %d\n", sizeof(arr2d[2]));*/

	//2DArrPointerOp.c

	/*int arr1[3][2];
	int arr2[2][3];

	printf("arr1: %p\n", arr1);
	printf("arr1+1: %p\n", arr1 + 1);
	printf("arr1+2: %p\n\n", arr1 + 2);

	printf("arr2: %p\n", arr2);
	printf("arr2+1: %p\n", arr2+1);*/

	//2DArrNameAndArrPtr.c

	/*int arr1[2][2] = {
		{1,2}, {3,4}
	};
	int arr2[3][2] = {
		{1,2}, {3,4}, {5,6}
	};
	int arr3[4][2] = {
		{1,2},{3,4},{5,6},{7,8}
	};

	int(*ptr)[2];
	int i;

	ptr = arr1;
	printf("** Show 2,2 arr1 **\n");
	for (i = 0; i < 2; i++)
		printf("%d %d \n", ptr[i][0], ptr[i][1]);

	ptr = arr2;
	printf("** Show 3,2 arr2 **\n");
	for (i = 0; i < 3; i++)
		printf("%d %d \n", ptr[i][0], ptr[i][1]);

	ptr = arr3;
	printf("** Show 4,2 arr1 **\n");
	for (i = 0; i < 4; i++)
		printf("%d %d \n", ptr[i][0], ptr[i][1]);*/

	//ArrPtrAndPtrArr.c

	/*int num1 = 10, num2 = 20, num3 = 30, num4 = 40;
	int arr2d[2][4] = { 1,2,3,4,5,6,7,8 };
	int i, j;

	int* whoA[4] = { &num1, &num2, &num3, &num4 };
	int(*whoB)[4] = arr2d;

	printf("%d %d %d %d \n", *whoA[0], *whoA[1], *whoA[2], *whoA[3]);
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", whoB[i][j]);
		}
		printf("\n");
	}*/

	//2DArrParam.c

	/*int arr1[2][4] = { 1,2,3,4,5,6,7,8 };
	int arr2[3][4] = { 1,1,1,1,3,3,3,3,5,5,5,5 };

	ShowArr2DStyle(arr1, sizeof(arr1) / sizeof(arr1[0]));
	ShowArr2DStyle(arr2, sizeof(arr2) / sizeof(arr2[0]));
	printf("arr1의 합 : %d\n", Sum2DArr(arr1, sizeof(arr1) / sizeof(arr1[0])));
	printf("arr2의 합 : %d\n", Sum2DArr(arr2, sizeof(arr2) / sizeof(arr2[0])));*/


	//2DArrAccessType.c
	/*int a[3][2] = {
		{1,2},{3,4},{5,6}
	};

	printf("a[0]: %p\n", a[0]);
	printf("*(a+0): %p\n", *(a + 0));

	printf("a[1]: %p\n", a[1]);
	printf("*(a+1): %p\n", *(a + 1));

	printf("a[2]: %p\n", a[2]);
	printf("*(a+2): %p\n", *(a + 2));

	printf("%d, %d\n", a[2][1], (*(a + 2))[1]);
	printf("%d, %d\n", a[2][1], *(a[2]+1));
	printf("%d, %d\n", a[2][1], *(*(a+2)+1));*/

	//FunctionPointer.c

	//char* str = "Function Pointer";
	//int num1 = 10, num2 = 20;

	//void (*fptr1)(int, int) = SimpleAdder;
	//void (*fptr2)(char*) = ShowString;

	////함수 포인터 변수에 의한 호출

	//fptr1(num1, num2);
	//fptr2(str);

	//Useful FunctionPointer.c

	/*int age1 = 20;
	int age2 = 30;
	int first;

	printf("입장순서 1 \n");
	first = WhoIsFirst(age1, age2, OlderFirst);
	printf("%d세와 %d세 중 %d세가 먼저 입장!\n\n", age1, age2, first);

	printf("입장순서 2 \n");
	first = WhoIsFirst(age1, age2, YoungerFirst);
	printf("%d세와 %d세 중 %d세가 먼저 입장!\n\n", age1, age2, first);*/


	//VoidTypePointer.c 동적메모리 할당할때 사용

	/*int num = 20;
	void* ptr;

	ptr = &num;
	printf("%p\n", ptr);

	ptr = SoSimpleFunc;
	printf("%p\n", ptr);*/

	//ArgcArgv.c
	
	
	


	return 0;
}