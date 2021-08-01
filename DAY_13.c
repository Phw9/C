#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define NAME	"phw"
#define AGE		24
#define PRINT_ADDR	puts("주소: 서울시 중랑구\n");
#define SQUARE(X) X*X
#define ADD	1
#define MIN	0
#define HIT_NUM	4




char* ReadUserName(void)
{
	char* name = (char*)malloc(sizeof(char) * 30);
	printf("What's your name? ");
	gets(name);
	return name;
}

int main(void)
{

	//DynamicMemoryAllocation.c

	/*int* ptr1 = (int*)malloc(sizeof(int));
	int* ptr2 = (int*)malloc(sizeof(int) * 7);
	int i;

	*ptr1 = 20;
	for (i = 0; i < 7; i++)
		ptr2[i] = i + 1;

	printf("%d\n", *ptr1);
	for (i = 0; i < 7; i++)
		printf("%d ", ptr2[i]);

	free(ptr1);
	free(ptr2);*/

	//ReadStringRight.c

	/*char* name1;
	char* name2;
	name1 = ReadUserName();

	printf("name1: %s\n", name1);
	name2 = ReadUserName();
	printf("name2: %s\n", name2);

	printf("again name1: %s\n", name1);
	printf("again name2: %s\n", name2);
	free(name1);
	free(name2);*/

	/*printf("이름: %s\n", NAME);
	printf("나이: %d\n", AGE);
	PRINT_ADDR;*/

	//MacroFunction.c

	/*int num = 20;

	printf("Square of num: %d\n", SQUARE(num));
	printf("Square of -5: %d\n", SQUARE(-5));
	printf("Square of 2.5: %g\n", SQUARE(2.5));

	printf("Square of 3+2: %d\n", SQUARE(3 + 2));*/

	//if_endif.c

	/*int num1, num2;
	printf("두개 정수 입력: ");
	scanf("%d %d", &num1, &num2);

#if ADD
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
#endif

#if MIN
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
#endif*/

	//else_endif.c

//#if HIT_NUM==5
//	puts("매크로 상수 HIT_NUM = 5");
//#else
//	puts("매크로 상수 HIT_NUM != 5");
//#endif

	//




	return 0;
}