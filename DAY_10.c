#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

struct point
{
	int xpos;
	int ypos;
};
struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	//TwoPointDistance

	/*struct point pos1, pos2;
	double distance;

	fputs("point1 pos: ", stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos);

	fputs("point2 pos: ", stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);

	distance = sqrt((double)(pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos));

	printf("�� ���� �Ÿ��� %g �Դϴ�.\n", distance);*/


	//TelephoneInfo.c

	/*struct person man1, man2;
	strcpy(man1.name, "������");
	strcpy(man1.phoneNum, "010-1515-1515");
	man1.age = 23;

	printf("�̸� �Է�: "); scanf("%s", man2.name);
	printf("��ȣ �Է�: "); scanf("%s", man2.phoneNum);
	printf("���� �Է�: "); scanf("%d", &(man2.age));

	printf("\n\n");

	printf("�̸�: %s\n", man1.name);
	printf("��ȣ: %s\n", man1.phoneNum);
	printf("����: %d\n", man1.age);

	printf("\n\n");

	printf("�̸�: %s\n", man2.name);
	printf("��ȣ: %s\n", man2.phoneNum);
	printf("����: %d\n", man2.age);*/

	//InitStructVal.c

	/*struct point pos = { 10,20 };
	struct person man = { "������","010-4949",11 };
	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%s %s %d\n", man.name, man.phoneNum, man.age);*/

	//StructArray.c

	/*struct point arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("���� ��ǥ �Է�: ");
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
	}

	for (i = 0; i < 3; i++)
	{
		printf("(x,y) = (%d,%d)", arr[i].xpos, arr[i].ypos);
		printf("\n");
	}*/

	//InitStructArray.c

	struct person arr[3] = {
		{"ann", "010-1212-1111", 21},
		{"John","010-4845-1513",19},
		{"Jin","010-2102-1020",23}
	};

	int i;

	for (i = 0; i < 3; i++)
	{
		printf("%s, %s, %d\n", arr[i].name, arr[i].phoneNum, arr[i].age);
	}

	return 0;

}