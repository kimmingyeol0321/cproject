#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//1.���� ������ �ۼ�
	FILE* fp = NULL;

	//2. ���Ϸ� �Է��� �����Ϳ� ���� ����
	char name[20];
	int age;
	double height;
	/*fp = fopen("user_info.txt", "w");*/

	////3.���� ���� ���� üũ
	//if (fp == NULL)
	//{
	//	printf("failed file open....\n");
	//}
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("%d��° ������ ������ �Է����ּ���(����, �̸�, Ű)\n", i + 1);
	//	scanf("%d %s %lf", &age, name, &height);
	//
	//	//���Ͽ� ����� �����ϴ� ����(fprintf)
	//	fprintf(fp, "%d %s %lf\n", age, name, height);
	//}
	////4.�۾� ����
	//fclose(fp);

	fp = fopen("user_info.txt", "r");

	if (fp == NULL)
	{
		printf("���� �б� ����\n");
	}
	
	printf("��ȣ\t����\t�̸�\tŰ\n");
	printf("==========================================\n");
	for (int i = 0; i < 5; i++)
	{
		fscanf(fp, "%d %s %lf", &age, name, &height);
		printf("%d\t%2d\t%4s\t%3.2lf\n", i + 1, age, name, height);
	}
	printf("==========================================\n");
	//%2d : ���� 2ĭ, %4s : ���� 4ĭ %3.2lf : ���� 3ĭ , �Ҽ��� 2�ڸ�
	// \t : �� ���

	
	//fprintf�� ���Ͽ� �Է��� ������ ������ִ� ����Դϴ�.(���Ϸ� ������ �Է�)
	//fscanf�� ���Ͽ� �ִ� ������ �Է����ִ� ����Դϴ�.(���Ϸ� ������ �Է�


	return 0;
}