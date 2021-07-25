#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int main(void)
{
	//13-3 TwoStringType.c

	//char str1[] = "My String";
	//char* str2 = "Your String";
	//printf("%d %d\n", sizeof(str1), sizeof(str2));
	//printf("%s %s \n", str1, str2);
	//printf("%d %d\n", &str1[0], &str1[1]);

	//str2 = "Our String";
	//printf("%s %s \n", str1, str2);

	//str1[0] = 'X';
	///*str2[0] = 'X';*/

	//printf("%s %s \n", str1, str2);



	//11-2-1

	/*char arr1[100];
	int i = 0;
	printf("영단어 입력: ");
	scanf("%s", arr1);

	while (arr1[i] != '\0')
	{
		printf("%c", arr1[i]);
		i++;
	}
	printf("길이는 : %d", i);*/

	//11-2-2(1) 널 문자 전까지 배열을 거꾸로 저장해서 대입

	/*char arr2[100];
	int i = 0, j;
	char temp[100];
	printf("영단어 입력: ");
	scanf("%s", arr2);


	while (arr2[i] != '\0')
	{
		printf("%c", arr2[i]);
		i++;
	}
	printf("len = %d", i);
	printf("\n\n");

	for (j = 0; j < i; j++)
	{
		temp[j] = arr2[i - j - 1];
		printf("%c", temp[j]);
	}
	printf("\n\n");

	for (j = 0; j < i; j++)
	{
		arr2[j] = temp[j];
		printf("%c", arr2[j]);
	}
	printf("\n\n");
	printf("%c가 arr2[0]\n", arr2[0]);

	for (j = 0; arr2[j] != '\0'; j++)
	{
		printf("%c", arr2[j]);
	}*/

	//11-2-2(2) len의 1/2시행으로 구하기

	/*char arr1[100];
	char temp[100];
	int len = 0, i;

	printf("영단어 입력: ");
	scanf("%s", arr1);

	for (len = 0; arr1[len] != '\0'; len++)
	{
		printf("%c", arr1[len]);
	}
	printf("\n\n");
	for (i = 0; i < len / 2; i++)
	{
		temp[i] = arr1[i];
		arr1[i] = arr1[len - 1 - i];
		arr1[len - 1 - i] = temp[i];
	}
	for (i = 0; arr1[i] != '\0'; i++)
	{
		printf("%c", arr1[i]);
	}*/


	//ArrayNamePointerOperation.c

	/*int arr1[3] = { 1,2,3 };
	double arr2[3] = { 1.1,2.2,3.3 };

	printf("%d %g \n", *arr1, *arr2);
	*arr1 += 100;
	*arr2 += 120.5;
	printf("%d %g\n", arr1[0], arr2[0]);*/

	//ArrayNameIsPointer.c

	//int arr[3] = { 1,2,3 };
	//int* ptr = &arr[0]; // int* ptr = &arr; 과 같은 문장임

	//printf("%d %d \n", ptr[0], arr[0]);
	//printf("%d %d \n", ptr[1], arr[1]);
	//printf("%d %d \n", ptr[2], arr[2]);
	//printf("%d %d \n \n", *ptr, *arr);

	//*ptr += 100;
	//printf("%d %d \n", ptr[1], arr[1]);
	//printf("%d %d \n \n", *ptr, *arr);

	// 13-1-1

	//int arr[5] = { 1,2,3,4,5 };
	//int* ptr = arr;
	//int i;
	//for (i = 0; i < 5; i++)
	//{
	//	ptr[i] += 2; // *ptr += 2; ptr++;
	//				//37line을 (*ptr)++ += 2; 로 쓸 수 있음.
	//}
	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	// 13-1-2

	//int arr[5] = { 1,2,3,4,5 };
	//int* ptr = &arr;
	//for (int i = 0; i < 5; i++)
	//{
	//	*(ptr)++ += 2; //  *(ptr+i) += 2; 로 쓸 수 있음.

	//}
	//for (int j = 0; j < 5; j++)
	//{
	//	printf("%d ", arr[j]);
	//}

	//13-1-3

	/*int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[4];
	int sum = 0;
	printf("%d\n", *ptr);

	for (int i = 0; i <4; i++)
	{
		sum += *ptr;
		ptr--;
	}
	printf("SUM = %d\n", sum);*/

	//13-1-4

	//int arr[6] = { 1,2,3,4,5,6 };
	//int* ptr1 = &arr;
	//int* ptr2 = &arr[5];
	//int i, temp;
	//for (i = 0; i < 3; i++)
	//{
	//	temp = *ptr1;		//temp = *ptr2;
	//	*ptr1 = *ptr2;		//*ptr2 = *ptr1;
	//	*ptr2 = temp;		//*ptr1 = temp;
	//	ptr1++;
	//	ptr2--;
	//}
	//for (i = 0; i < 6; i++ )
	//{
	//	printf("%d ", arr[i]);
	//}

	return 0;
}