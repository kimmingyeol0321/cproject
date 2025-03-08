#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//구조체(srtuct)
//여러 자료형을 묶어서 새로운 자료형을 만드는 것을 의미함(복합 자료형)
//사용자의 편의대로 묶어서 하나의 형태로 표현하는 방식이기에 사용자 정의 타입이라고도 부름
//데이터의 구조화 작업을 실행할 때 사용하는 데이터임

//구조화: 연결되어 하나의 덩어리로 처리하는 방식, 비슷한 개념으로는 record(c#), object(java, c++)

/*
struct 구조체명
{
	//구조체가 가지고 있을 데이터
	int value;
	float f;
	char c;
}
*/

//구조체 선언
struct student
{
	int number;	    // 학생 번호
	char name[10];  // 이름 한글 기준 10글자까지
	char group;     //A, B, C, D, E
};
//구조체 선언은 변수 선언은 아니기 때문에, 사용하기 위해서 따로 변수 선언과 초기화를 진행해야 합니다.


int main()
{
	//struct 구조체명 변수명 = {구조체에 정의된 변수 순서대로 값 작성}
	struct student s1 = { 1, "Keite", 'A' };

	struct student s2;//구조체 변수 선언

	s2.number = 2;
	strcpy(s2.name, "Nero");
	s2.group = 'B';
	
	struct student s3;

	printf("학번을 입력합니다. : ");
	scanf("%d", &s3.number);
	printf("\n");
	printf("이름 : ");
	scanf("%s", s3.name);
	printf("\n");
	getchar();
	printf("그룹 : ");
	scanf("%c", &s3.group);
	printf("\n");

	printf("학번: %d  이름: %s  그룹: %c\n", s1.number, s1.name, s1.group);
	printf("학번: %d  이름: %s  그룹: %c\n", s2.number, s2.name, s2.group);
	printf("학번: %d  이름: %s  그룹: %c\n", s3.number, s3.name, s3.group);

	
	


	return 0;
}