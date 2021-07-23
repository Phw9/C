#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double CelToFah(double Cel)
{
	/*double Fah;
	Fah = 1.8 * (double)Cel + 32;
	return Fah;*/
	return 1.8 * Cel + 32;
}
double FahToCel(double Fah)
{
	/*double Cel;
	Cel = (double)(Fah - 32) / 1.8;
	return Cel;*/
	return (Fah - 32) / 1.8;
}
void Fibo(int n)
{
	int num1, num2, num3;
	num1 = 0;
	num2 = 1;

	switch(n)
	{
	case 0:
		printf("1이상의 숫자를 입력하시오\n");
		break;
	case 1:
		printf("0\n");
		break;
	case 2:
		printf("0 1\n");
		break;
	default:
		printf("0 1 ");
		for (int i = 0; i < n - 2; i++)
		{
			num3 = num1 + num2;
			printf("%d ", num3);
			num1 = num2;
			num2 = num3;
		}
	}
}

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
	//8-2-1

	/*int dan, is;

	for (dan = 2; dan < 10; dan++)
	{
		if (dan % 2 != 0)
			continue;
		for (is = 1; is <= dan; is++)
		{
			printf("%dx%d=%d ", dan, is, dan * is);
		}
		printf("\n\n");
	}*/

	//8-2-2

	/*int A, Z;

	printf("A+Z=9이여야 하므로 A와Z는 다음과 같다.\n");

	for (A = 0; A < 10; A++)
	{
		for (Z = 0; Z < 10; Z++)
		{
			if ((10*A+Z)+(10*Z+A) == 99)
			{
				printf("%d%d + %d%d = 99\n",A,Z,Z,A);
			}
		}
	}*/
	
	//8-3

	/*int n, score;

	printf("score 입력하시오 : ");
	scanf("%d", &score);


	if (0 <= score && score < 10)
	{
		n = 1;
	}else if(10 <= score && score < 20)
	{
		n = 2;
	}else if (20 <= score && score < 30)
	{
		n = 3;
	}else if (30 <= score && score < 40)
	{
		n = 4;
	}
	else
	{
		n = 5;
	}

	switch (n)
	{
	case 1:
		printf("0이상 10미만 입니다.\n");
		break;
	case 2:
		printf("10이상 20미만 입니다.\n");
		break;
	case 3:
		printf("20이상 30미만 입니다.\n");
		break;
	case 4:
		printf("30이상 40미만 입니다.\n");
		break;
	default:
		printf("40이상 입니다.\n");
	}*/
	
	//Call Add, Mul func
	
	/*printf("%d\n", Add(4, 5));
	printf("%d\n", mul(4, 5));*/

	//9-1-1

	/*printf("큰 수 : %d\n", MaxNum(5, 4, 3));
	printf("작은 수: %d\n", MinNum(5, 4, 3));*/

	//9-1-2
	// C2371 identifier: 재정의, 기본형식이 다릅니다. 오류
	// Sol) 함수선언을 호출 뒤에 하면 호출되는 함수의 반환형을 int형으로 간주하고 컴파일링을 진행한다.
	// 그래서 int형과 다른 자료형으로 호출 뒤에서 선언하면 재정의 오류가 발생.
	// int형으로 반환하던지, double형으로 반환하는 함수는 함수호출보다 앞에서 선언해야함.


	/*printf("섭씨가 32도면 화씨는 %f\n", CelToFah(42));
	printf("화씨가 32도면 화씨는 %f\n", FahToCel(42));*/

	//9-1-3
	//반환형 따져보고 출력함수를 어떻게 사용할지 생각해보기

	/*int n;
	
	printf("피보나치 수열을 몇번째 숫자까지 보시겠습니까? ");
	scanf("%d", &n);
	Fibo(n);

	return 0;*/

}

int MaxNum(int n1, int n2, int n3)
{
	int result1, result2, num;

	result1 = (n1 > n2) ? n1 : n2;
	result2 = (n2 > n3) ? n2 : n3;
	num = (result1 > result2) ? result1 : result2;

	return num;
}
int MinNum(int n1, int n2, int n3)
{
	int result1, result2, num;

	result1 = (n1 < n2) ? n1 : n2;
	result2 = (n2 < n3) ? n2 : n3;
	num = (result1 < result2) ? result1 : result2;

	return num;
}

int Add(n1, n2)
{
	printf("두 수 입력: ");
	scanf("%d %d", &n1, &n2);

	return n1 + n2;
}
int mul(n1, n2)
{
	printf("두 수 입력: ");
	scanf("%d %d", &n1, &n2);

	return n1 * n2;
}
