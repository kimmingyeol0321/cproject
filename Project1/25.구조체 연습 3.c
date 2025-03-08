#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

struct student
{
	int id;
	char name[20];
};


void compare(struct student a, struct student b)
{
	if (a.id == b.id && strcmp(a.name, b.name) == 0)//문자비교 strcmp
	{
		printf("같은값입니다.\n");
	}
	else
	{
		printf("다른값입니다.\n");
	}
}

int main()
{
	struct student s1 = { 1, "Kane" };
	struct student s2 = { 1, "Kane" };

	compare(s1, s2);

	return 0;
}