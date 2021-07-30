#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

struct point
{
	int xpos;
	int ypos;
	//struct point* ptr;
};

typedef struct point Point;

void OrgSymTrans(Point* ptr)
{
	ptr->xpos = (ptr->xpos) * (-1);
	ptr->ypos = (ptr->ypos) * (-1);
}

void ShowPosition(Point pos)
{
	printf("[%d, %d]\n", pos.xpos, pos.ypos);
}

typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
}Person;

void ShowPersonInfo(Person man)
{
	printf("name: %s\n", man.name);
	printf("phone: %s\n", man.phoneNum);
	printf("age: %d\n", man.age);
}

Person ReadPersonInfo(void)
{
	Person man;
	printf("name? "); scanf("%s", man.name);
	printf("phone? "); scanf("%s", man.phoneNum);
	printf("age? "); scanf("%d", &man.age);
	return man;
}

//typedef struct circle
//{
//	double radius;
//	struct point* center;
//}Circle;

typedef struct circle
{
	Point center;
	double rad;
}Circle;

void ShowCircleInfo(Circle* ptr)
{
	printf("[%d, %d]\n", (ptr->center).xpos, (ptr->center).ypos);
	printf("radius: %g \n\n", ptr->rad);
}
typedef int INT;
typedef int* PTR_INT;

typedef unsigned int UINT;
typedef unsigned int* PTR_UINT;

typedef unsigned char UCHAR;
typedef unsigned char* PTR_UCHAR;

Point Addpoint(Point pos1, Point pos2)
{
	Point pos = { pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos };
	return pos;
}
Point Minpoint(Point pos1, Point pos2)
{
	Point pos = { pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos };
	return pos;
}

typedef struct student
{
	char name[20];
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
}Student;

void ShowStudentInfo(Student* sptr)
{
	printf("학생이름: %s\n", sptr->name);
	printf("학생 고유번호: %s\n", sptr->stdnum);
	printf("학교이름: %s\n", sptr->school);
	printf("선택전공: %s\n", sptr->major);
	printf("학년: %d\n", sptr->year);
}


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

	printf("두 점의 거리는 %g 입니다.\n", distance);*/


	//TelephoneInfo.c

	/*struct person man1, man2;
	strcpy(man1.name, "박현우");
	strcpy(man1.phoneNum, "010-1515-1515");
	man1.age = 23;

	printf("이름 입력: "); scanf("%s", man2.name);
	printf("번호 입력: "); scanf("%s", man2.phoneNum);
	printf("나이 입력: "); scanf("%d", &(man2.age));

	printf("\n\n");

	printf("이름: %s\n", man1.name);
	printf("번호: %s\n", man1.phoneNum);
	printf("나이: %d\n", man1.age);

	printf("\n\n");

	printf("이름: %s\n", man2.name);
	printf("번호: %s\n", man2.phoneNum);
	printf("나이: %d\n", man2.age);*/

	//InitStructVal.c

	/*struct point pos = { 10,20 };
	struct person man = { "박현우","010-4949",11 };
	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%s %s %d\n", man.name, man.phoneNum, man.age);*/

	//StructArray.c

	/*struct point arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("점의 좌표 입력: ");
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
	}

	for (i = 0; i < 3; i++)
	{
		printf("(x,y) = (%d,%d)", arr[i].xpos, arr[i].ypos);
		printf("\n");
	}*/

	//InitStructArray.c

	/*struct person arr[3] = {
		{"ann", "010-1212-1111", 21},
		{"John","010-4845-1513",19},
		{"Jin","010-2102-1020",23}
	};

	int i;

	for (i = 0; i < 3; i++)
		printf("%s, %s, %d\n", arr[i].name, arr[i].phoneNum, arr[i].age);*/
	

	//StructPointer.c

	/*struct point pos1 = { 1,2 };
	struct point pos2 = { 100,200 };
	struct point* pptr = &pos1;

	(*pptr).xpos += 4;
	(*pptr).ypos += 2;
	printf("[%d, %d]\n", (*pptr).xpos, (*pptr).ypos);

	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;
	printf("[%d, %d]\n", pptr->xpos, pptr->ypos);*/

	//StructPointerMem.c

	/*struct point cen = { 2,7 };
	double rad = 5.5;

	struct circle ring = { rad, &cen };
	printf("원의 반지름: %g\n", ring.radius);
	printf("원의 중심:[%d, %d]\n", ring.center->xpos, ring.center->ypos);*/

	//PointRelation.c

	/*struct point pos1 = { 1,1 };
	struct point pos2 = { 2,2 };
	struct point pos3 = { 3,3 };

	pos1.ptr = &pos2;
	pos2.ptr = &pos3;
	pos3.ptr = &pos1;

	printf("점의 연결관계\n");
	printf("[%d, %d]와 [%d, %d] 연결\n",
		pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
	printf("[%d, %d]와 [%d, %d] 연결\n",
		pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
	printf("[%d, %d]와 [%d, %d] 연결\n",
		pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);*/

	//StructAddress.c

	/*struct point pos = { 10,20 };
	struct person man = { "박현우","010-4949-4949",29 };

	printf("%p %p\n", &pos, &pos.xpos);
	printf("%p %p\n", &man, man.name);*/
	

	//TypeNameTypedef.c

	/*INT num1 = 120;
	PTR_INT pnum1 = &num1;
	
	UINT num2 = 190;
	PTR_UINT pnum2 = &num2;

	UCHAR ch = 'Z';
	PTR_UCHAR pch = &ch;

	printf("%d, %u, %c\n", *pnum1, *pnum2, *pch);*/
	

	//StructTypedef.c

	/*Point pos = { 10,20 };
	Person man = { "박현우","010-115-1515",29 };
	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%s %s %d\n", man.name, man.phoneNum, man.age);*/
	
	//StructMemArrCopy.c

	/*Person man = ReadPersonInfo();
	ShowPersonInfo(man);*/


	//StructFunctionCallByRef.c

	/*Point pos = { 7,-5 };
	OrgSymTrans(&pos);
	ShowPosition(pos);
	OrgSymTrans(&pos);
	ShowPosition(pos);*/

	//StructOperation.c

	/*Point pos1 = { 1,2 };
	Point pos2;
	pos2 = pos1;

	printf("크기: %d\n", sizeof(pos1));
	printf("[%d, %d]\n", pos1.xpos, pos1.ypos);
	printf("크기: %d\n", sizeof(pos2));
	printf("[%d, %d]\n", pos2.xpos, pos2.ypos);*/

	//StructAddMin.c

	/*Point pos1 = { 5,6 };
	Point pos2 = { 2,8 };
	Point result;

	result = Addpoint(pos1, pos2);
	printf("[%d, %d]\n", result.xpos, result.ypos);
	result = Minpoint(pos1, pos2);
	printf("[%d, %d]\n", result.xpos, result.ypos);*/
	
	//StuctImportant.c
	
	/*Student arr[2];
	int i;

	for (i = 0; i < 2; i++)
	{
		printf("이름: "); scanf("%s", arr[i].name);
		printf("번호: "); scanf("%s", arr[i].stdnum);
		printf("학교: "); scanf("%s", arr[i].school);
		printf("전공: "); scanf("%s", arr[i].major);
		printf("학년: "); scanf("%d", &arr[i].year);
	}
	
	for (i = 0; i < 2; i++)
	{
		ShowStudentInfo(&arr[i]);
	}*/

	//CircleincludePoint.c

	/*Circle c1 = { {1,2}, 3.5 };
	Circle c2 = { 2,4, 3.5 };
	ShowCircleInfo(&c1);
	ShowCircleInfo(&c2);*/

	


	return 0;

}