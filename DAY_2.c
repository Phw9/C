#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
	//OperatorOne.c

	/*int num1 = 9, num2 = 2;
	printf("%d��%d = %d\n", num1, num2, num1 + num2);
	printf("%d��%d = %d\n", num1, num2, num1 - num2);
	printf("%d��%d = %d\n", num1, num2, num1 * num2);
	printf("%d��%d�� ��= %d\n", num1, num2, num1 / num2);
	printf("%d��%d�� ������= %d\n", num1, num2, num1 % num2);*/

	
	//��� �����̿��� ����

	/*int num1 = 2, num2 = 4, num3 = 6;

	printf("return: %d\n", num1 > 1 && num2 > 2);
	printf("return: %d\n", num1 < 1 && num2 < 2); */

	//3-1-1

	/*int num1, num2;
	printf("�� �� �Է�: ");
	scanf("%d %d", &num1, &num2);
	printf("%d-%d=%d\n", num1, num2, num1 - num2);
	printf("%dx%d=%d\n", num1, num2, num1 * num2);*/

	//3-1-2

	/*int num1, num2, num3;
	printf("�� ���� ���� �Է� : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%dx%d+%d=%d\n", num1, num2, num3, (num1 * num2) + num3);*/

	//3-1-3

	/*int num1;
	printf("������ �� �Է�: ");
	scanf("%d", &num1);
	printf("������ : %d\n", num1 * num1);*/

	//3-1-4

	/*int num1, num2;
	printf("�� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);
	printf("��=%d, ������=%d\n", num1/num2, num1%num2);*/
	
	//3-1-5

	/*int num1, num2, num3;
	printf("�� ���� �Է�: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("(%d-%d)x(%d+%d)x(%d��%d�� ���� ������)=%d\n", num1, num2, num2, num3, num3, num1, (num1 - num2) * (num2 + num3) * (num3 % num1));*/
	
	//floaterror.c

	/*int i;
	float num = 0.0;

	for (i = 0; i < 100; i++)
		num += 0.1;
	
	printf("%f\n", num);*/

	//4-4-1

	/*int n1;

	printf("���� �Է�: ");
	scanf("%d", &n1);

	printf("%d�� ��ȣ�� �ٲٸ� %d�̴�.\n", n1, ~n1 + 1);*/

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

	printf("�»�� x, y ��ǥ: ");
	scanf("%d %d", &LU_x, &LU_y);
	printf("���ϴ� x, y ��ǥ: ");
	scanf("%d %d", &RD_x, &RD_y);

	area = (RD_x - LU_x) * (LU_y - RD_y);
	printf("�� ���� �̷�� ���簢���� ���̴� %d �Դϴ�.\n", area);*/

	//5-1-2

	/*double n1, n2;
	scanf("%lf %lf", &n1, &n2);
	printf("%f+%f=%f\n", n1, n2, n1 + n2);
	printf("%f-%f=%f\n", n1, n2, n1 - n2);
	printf("%fx%f=%f\n", n1, n2, n1 * n2);
	printf("%f��%f=%f\n", n1, n2, n1 / n2);*/
	
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
		Literal ��� = ������ �޸� �Ҵ�� �޸� ������ �̸��� ���� ��
		Const ��� = literal�� �޸� �̸��� �ִ� symolic ���
		const �ڷ��� �̸� ���� ����(������� �� �� �����ϸ� ����x)
	*/
	return 0;

}