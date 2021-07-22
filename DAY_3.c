#include<stdio.h>

int main(void)
{
	// 7-1
	/*int dan, num = 1;
	printf("몇 단? ");
	scanf("%d", &dan);

	while(num<10)
	{
		printf("%dx%d=%d\n", dan, num, dan * num);
		num++;

	}
	num = 1;*/

	// 7-1-1
	/*int n1, i = 0;
	printf("몇 회 실행? ");
	scanf("%d", &n1);

	while (i < n1)
	{
		printf("Hello world! %d\n", i + 1);
		i++;
	}*/

	// 7-1-2

	/*int n1, i = 0;
	scanf("%d", &n1);

	while (i < n1)
	{
		printf("3x%d=%d\n", i + 1, 3 * (i + 1));
		i++;
	}*/

	// 7-1-3

	/*int i=1, sum = 0;

	while (i != 0)
	{
		printf("더할 값(0이면 out): ");
		scanf("%d", &i);
		sum += i;
	}

	printf("sum=%d\n", sum);
	*/

	// 7-1-4

	/*int i = 9, dan;

	scanf("%d", &dan);

	while (i > 0)
	{
		printf("%dx%d=%d\n", dan, i, dan * i);
		i--;
	}*/
	
	// 7-1-5

	/*int i = 0, n1, n2;
	int sum = 0;
	printf("몇개의 정수 입력? ");
	scanf("%d", &n1);
	while (i < n1)
	{
		printf("정수 입력: ");
		scanf("%d", &n2);
		sum += n2;
		i++;
	}

	printf("%d, %d, %d\n", sum, n1, n2);
	printf("평균 = %f\n", (double)sum /n1);*/

	//Twotonine.c

	/*int cur = 2, i=1;
	while (cur < 10)
	{
		while (i < 10)
		{
			printf("%dx%d=%d ",cur, i, cur * i);
			i++;
		}
		printf("\n\n");
		i = 1;
		cur++;
	}*/
	
	//7-2-1

	/*int i=0, n1=0, sum = 0;
	while (i < 5)
	{
		while (n1 < 1)
		{
			printf("1이상 정수 입력: ");
			scanf("%d", &n1);
		}
		sum += n1;
		n1 = 0;
		i++;
	}
	printf("SUM : %d\n", sum);*/

	//7-2-2

	/*int i = 0, cir = 0;
	while (i < 5)
	{
		while (cir < i)
		{
			printf("o ");
			cir++;
		}
		cir = 0;
		printf("*\n");
		i++;
	}*/
	
	//7-3-1(1)
	/*int total = 0, n1 = 1;
	while (n1 != 0)
	{
		printf("정수 입력(0 to quit): ");
		scanf("%d", &n1);
		total += n1;
	}
	printf("total=%d\n", total);*/

	//7-3-1(2)
	/*int total = 0, n1;
	printf("정수 입력(0 to quit): ");
	scanf("%d", &n1);
	total += n1;
	while (n1 != 0)
	{
		printf("정수 입력(0 to quit): ");
		scanf("%d", &n1);
		total += n1;
	}
	printf("total=%d\n", total);*/
	
	//7-3-2

	/*int sum = 0, i = 0;

	do
	{
		while (i % 2 == 0)
		{
			sum += i;
			i++;
		}
		i++;
	} while (i < 101);

	printf("sum = %d\n", sum);*/

	//7-3-3

	/*int cur = 2;
	int is = 1;

	do
	{
		
		while (is < 10)
		{
			printf("%dx%d=%d\n", cur, is, cur * is);
			is++;
		}
		is = 1;
		cur++;
	} while (cur < 10);*/

	//Twotonine.c
	/*int cur, is;

	for (cur = 2; cur < 10; cur++)
	{
		for (is = 1; is < 10; is++)
		{
			printf("%dx%d=%d ", cur, is, cur * is);
		}
		printf("\n\n");
	}*/
	
	//7-4-1 for
	/*int n1, n2, sum = 0;

	printf("두 수 입력: ");
	scanf("%d %d", &n1, &n2);
	
	for (; n1 <= n2; n1++)
	{
		sum += n1;
		printf("%d\n", sum);
	}*/
	
	//7-4-1 while
	/*int n1, n2, sum = 0;

	printf("두 수 입력: ");
	scanf("%d %d", &n1, &n2);
	while (n1 <= n2)
	{
		sum += n1;
		n1++;
	}
	printf("SUM=%d\n", sum);*/
	
	//7-4-2 for
	/*int n, i, fac = 1;
	printf("정수 입력 : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		fac *= i;
	}
	printf("n! = %d\n", fac);*/
	
	//7-4-2 while

	/*int fac = 1, i = 1, n;
	printf("정수 입력 : ");
	scanf("%d", &n);

	while (i <= n)
	{
		fac *= i;
		i++;
	}
	printf("n! = %d\n", fac);*/

	return 0;
}