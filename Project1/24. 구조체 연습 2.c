#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


struct user
{
	char id[40];
	char pw[50];
	char gender;// 'M', 'F'
};

//위의 구조체로 다음을 출력하세요
//아이디를 입력해주세요 :
//비밀번호를 입력해주세요 :
//아이디를 입력해주세요 :
//비밀번호를 입력해주세요 :
//아이디를 입력해주세요 :
//비밀번호를 입력해주세요 :

//= 유저 테이블 =
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
		    printf("아이디를 입력해주세요\n");
			scanf("%s", p1[i].id);
			getchar();
			
			printf("비밀번호를 입력해주세요\n");
			scanf("%s", p1[i].pw);
			getchar();
			
			printf("성별을 입력해주세요(M 또는 F)\n");
			scanf("%c", &p1[i].gender);
			getchar();
			printf("\n");
	}

	printf("= 유저 테이블 =\n");
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
//	printf("아이디를 입력해주세요\n");
//	scanf("%s", &p1.id);
//	getchar();
//	printf("비밀번호를 입력해주세요\n");
//	scanf("%s", &p1.pw);
//	getchar();
//	printf("성별을 입력해주세요(M 또는 F)\n");
//	scanf("%c", &p1.gender);
//	getchar();
//	printf("\n");
//
//	printf("아이디를 입력해주세요\n");
//	scanf("%s", &p2.id);
//	getchar();
//	printf("비밀번호를 입력해주세요\n");
//	scanf("%s", &p2.pw);
//	getchar();
//	printf("성별을 입력해주세요(M 또는 F)\n");
//	scanf("%c", &p2.gender);
//	getchar();
//	printf("\n");
//
//	printf("아이디를 입력해주세요\n");
//	scanf("%s", &p3.id);
//	getchar();
//	printf("비밀번호를 입력해주세요\n");
//	scanf("%s", &p3.pw);
//	getchar();
//	printf("성별을 입력해주세요(M 또는 F)\n");
//	scanf("%c", &p3.gender);
//	getchar();
//	printf("\n");
//
//	
//
//	printf("= 유저 테이블 =\n");
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