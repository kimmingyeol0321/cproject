#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


struct user
{
	char id[40];
	char pw[50];
	char gender;// 'M', 'F'
};

//���� ����ü�� ������ ����ϼ���
//���̵� �Է����ּ��� :
//��й�ȣ�� �Է����ּ��� :
//���̵� �Է����ּ��� :
//��й�ȣ�� �Է����ּ��� :
//���̵� �Է����ּ��� :
//��й�ȣ�� �Է����ּ��� :

//= ���� ���̺� =
// ============================================
//1. sample12@naver.com koreandu1384!@
//2. sample13@naver.com koreandu1384!@
//3. sample14@naver.com koreandu1384!@
// ============================================


int main()
{
	struct user p1[3];

	for (int i = 0; i < 3; i++)
	{
		    printf("���̵� �Է����ּ���\n");
			scanf("%s", p1[i].id);
			getchar();
			
			printf("��й�ȣ�� �Է����ּ���\n");
			scanf("%s", p1[i].pw);
			getchar();
			
			printf("������ �Է����ּ���(M �Ǵ� F)\n");
			scanf("%c", &p1[i].gender);
			getchar();
			printf("\n");
	}

	printf("= ���� ���̺� =\n");
	printf("=======================================================\n");

	for (int i = 0; i < 3; i++)
	{
		printf("%d. id: %s | pw: %s | gender: %c\n", i + 1, p1[i].id, p1[i].pw, p1[i].gender);
	}
	
	printf("=======================================================\n");

	return 0;
}





//int main()
//{
//
//
//	struct user p1 = { "sample12@naver.com" , "koreandu1384!@", 'M'};
//	struct user p2 = { "sample13@naver.com" , "koreandu1384!@", 'M'};
//	struct user p3 = { "sample14@naver.com" , "koreandu1384!@", 'M'};
//
//	printf("���̵� �Է����ּ���\n");
//	scanf("%s", &p1.id);
//	getchar();
//	printf("��й�ȣ�� �Է����ּ���\n");
//	scanf("%s", &p1.pw);
//	getchar();
//	printf("������ �Է����ּ���(M �Ǵ� F)\n");
//	scanf("%c", &p1.gender);
//	getchar();
//	printf("\n");
//
//	printf("���̵� �Է����ּ���\n");
//	scanf("%s", &p2.id);
//	getchar();
//	printf("��й�ȣ�� �Է����ּ���\n");
//	scanf("%s", &p2.pw);
//	getchar();
//	printf("������ �Է����ּ���(M �Ǵ� F)\n");
//	scanf("%c", &p2.gender);
//	getchar();
//	printf("\n");
//
//	printf("���̵� �Է����ּ���\n");
//	scanf("%s", &p3.id);
//	getchar();
//	printf("��й�ȣ�� �Է����ּ���\n");
//	scanf("%s", &p3.pw);
//	getchar();
//	printf("������ �Է����ּ���(M �Ǵ� F)\n");
//	scanf("%c", &p3.gender);
//	getchar();
//	printf("\n");
//
//	
//
//	printf("= ���� ���̺� =\n");
//	
//	printf("=======================================================\n");
//	
//	printf("1. id: %s | pw: %s | gender: %c\n", p1.id, p1.pw, p1.gender);
//	printf("2. id: %s | pw: %s | gender: %c\n", p2.id, p2.pw, p2.gender);
//	printf("3. id: %s | pw: %s | gender: %c\n", p3.id, p3.pw, p3.gender);
//	
//	printf("=======================================================\n");
//
//
//
//	return 0;
//}