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
		printf("1�̻��� ���ڸ� �Է��Ͻÿ�\n");
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

	printf("A+Z=9�̿��� �ϹǷ� A��Z�� ������ ����.\n");

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

	printf("score �Է��Ͻÿ� : ");
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
		printf("0�̻� 10�̸� �Դϴ�.\n");
		break;
	case 2:
		printf("10�̻� 20�̸� �Դϴ�.\n");
		break;
	case 3:
		printf("20�̻� 30�̸� �Դϴ�.\n");
		break;
	case 4:
		printf("30�̻� 40�̸� �Դϴ�.\n");
		break;
	default:
		printf("40�̻� �Դϴ�.\n");
	}*/
	
	//Call Add, Mul func
	
	/*printf("%d\n", Add(4, 5));
	printf("%d\n", mul(4, 5));*/

	//9-1-1

	/*printf("ū �� : %d\n", MaxNum(5, 4, 3));
	printf("���� ��: %d\n", MinNum(5, 4, 3));*/

	//9-1-2
	// C2371 identifier: ������, �⺻������ �ٸ��ϴ�. ����
	// Sol) �Լ������� ȣ�� �ڿ� �ϸ� ȣ��Ǵ� �Լ��� ��ȯ���� int������ �����ϰ� �����ϸ��� �����Ѵ�.
	// �׷��� int���� �ٸ� �ڷ������� ȣ�� �ڿ��� �����ϸ� ������ ������ �߻�.
	// int������ ��ȯ�ϴ���, double������ ��ȯ�ϴ� �Լ��� �Լ�ȣ�⺸�� �տ��� �����ؾ���.


	/*printf("������ 32���� ȭ���� %f\n", CelToFah(42));
	printf("ȭ���� 32���� ȭ���� %f\n", FahToCel(42));*/

	//9-1-3
	//��ȯ�� �������� ����Լ��� ��� ������� �����غ���

	/*int n;
	
	printf("�Ǻ���ġ ������ ���° ���ڱ��� ���ðڽ��ϱ�? ");
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
	printf("�� �� �Է�: ");
	scanf("%d %d", &n1, &n2);

	return n1 + n2;
}
int mul(n1, n2)
{
	printf("�� �� �Է�: ");
	scanf("%d %d", &n1, &n2);

	return n1 * n2;
}
