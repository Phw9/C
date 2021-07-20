#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
	//OperatorOne.c

	/*int num1 = 9, num2 = 2;
	printf("%d＋%d = %d\n", num1, num2, num1 + num2);
	printf("%d－%d = %d\n", num1, num2, num1 - num2);
	printf("%d×%d = %d\n", num1, num2, num1 * num2);
	printf("%d÷%d의 몫= %d\n", num1, num2, num1 / num2);
	printf("%d÷%d의 나머지= %d\n", num1, num2, num1 % num2);*/

	
	//모두 거짓이여도 거짓

	/*int num1 = 2, num2 = 4, num3 = 6;

	printf("return: %d\n", num1 > 1 && num2 > 2);
	printf("return: %d\n", num1 < 1 && num2 < 2); */

	//3-1-1

	/*int num1, num2;
	printf("두 수 입력: ");
	scanf("%d %d", &num1, &num2);
	printf("%d-%d=%d\n", num1, num2, num1 - num2);
	printf("%dx%d=%d\n", num1, num2, num1 * num2);*/

	//3-1-2

	/*int num1, num2, num3;
	printf("세 개의 정수 입력 : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%dx%d+%d=%d\n", num1, num2, num3, (num1 * num2) + num3);*/

	//3-1-3

	/*int num1;
	printf("제곱할 수 입력: ");
	scanf("%d", &num1);
	printf("제곱수 : %d\n", num1 * num1);*/

	//3-1-4

	/*int num1, num2;
	printf("두 정수 입력: ");
	scanf("%d %d", &num1, &num2);
	printf("몫=%d, 나머지=%d\n", num1/num2, num1%num2);*/
	
	//3-1-5

	/*int num1, num2, num3;
	printf("세 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("(%d-%d)x(%d+%d)x(%d를%d로 나눈 나머지)=%d\n", num1, num2, num2, num3, num3, num1, (num1 - num2) * (num2 + num3) * (num3 % num1));*/
	
	//floaterror.c

	/*int i;
	float num = 0.0;

	for (i = 0; i < 100; i++)
		num += 0.1;
	
	printf("%f\n", num);*/

	//4-4-1

	/*int n1;

	printf("정수 입력: ");
	scanf("%d", &n1);

	printf("%d의 부호를 바꾸면 %d이다.\n", n1, ~n1 + 1);*/

	//4-4-2

	/*int result = 3;

	result = result << 3;
	result = result >> 2;

	printf("3x8/4=%d\n", result);*/

	//HowChar.c

	/*char ch1 = 'A', ch2 = 65;
	char ch3 = 'Z', ch4 = 90;

	printf("%d %c\n", ch1, ch1);
	printf("%d %c\n", ch2, ch2);
	printf("%d %c\n", ch3, ch3);
	printf("%d %c\n", ch4, ch4);*/

	//5-1-1

	/*int LU_x, LU_y, RD_x, RD_y, area;

	printf("좌상단 x, y 좌표: ");
	scanf("%d %d", &LU_x, &LU_y);
	printf("우하단 x, y 좌표: ");
	scanf("%d %d", &RD_x, &RD_y);

	area = (RD_x - LU_x) * (LU_y - RD_y);
	printf("두 점이 이루는 직사각형의 넓이는 %d 입니다.\n", area);*/

	//5-1-2

	/*double n1, n2;
	scanf("%lf %lf", &n1, &n2);
	printf("%f+%f=%f\n", n1, n2, n1 + n2);
	printf("%f-%f=%f\n", n1, n2, n1 - n2);
	printf("%fx%f=%f\n", n1, n2, n1 * n2);
	printf("%f÷%f=%f\n", n1, n2, n1 / n2);*/
	
	//5-1-4

	/*int n1;

	scanf("%d", &n1);
	printf("%c\n", n1);*/

	//5-1-5
	/*char n1;

	scanf("%c", &n1);
	printf("%d\n", n1);
	printf("%c\n", n1);*/

	/* 
		Literal 상수 = 변수와 달리 할당된 메모리 공간에 이름이 없는 것
		Const 상수 = literal과 달리 이름이 있는 symolic 상수
		const 자료형 이름 으로 선언(상수여서 한 번 선언하면 변경x)
	*/
	return 0;

}