#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//배열
//같은 형태의 데이터를 순서대로 저장하는 데이터
//자료형 배열명[배열의 길이];
//자료형 배열명[] = {값1, 값2 .........};

//인덱스(index)
//배열에 저장되어있는 데이터의 위치를 표현하는 정수형 데이터
//인덱스의 시작 값은 0
//인덱스의 마지막 값은 만들어진 배열의 전체 데이터 개수(길이) -1까지 제공됩니다

//요소(element)
//배열 안에 있는 값 그 자체를 의미하는 말

//반복문 for문
//for(초기식;조건식;증강식)
//{
//  조건이 만족하는 동안 실행 시킬 명령문;
//}


int main()
{
	int scores[] = { 90, 100, 85 };
	printf("국어점수 = %d 영어점수 = %d 수학점수 = %d\n", scores[0], scores[1], scores[2]);

	
	int total = 0;
	total = scores[0] + scores[1] + scores[2];
	printf("총점 = %d\n", total);
	total = 0;

	for (int i = 0; i < 3; i++)
	{
		total += scores[i];
	}
	printf("총점 = %d\n", total);
	//반복문 실행 순서
	//int i = 0; 실행
	//조건 확인(i < 3)
	//조건을 만족할 경우 total += scores[i]; 실행
	//i++ 실행
	//조건을 만족 못할때까지 반복
	
	
	//1. 배열에 있는 값을 순차적으로 출력하세요
	int numbers[] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", numbers[i]);
	}


	int number[] = { 1,2,3,4,5,6,7,8,9,10 };

	//for (int i = 9; i >= 0; i--)
	//{
	//	printf("%d ", numbers[i]);
	//}

	int datas[10];
	//10개의 정수의 데이터를 저장할 수 있는 배열 dates가 준비되어있습니다. 
	// 입력문을 이용해서 배열에 데이터를 순서대로 추가하는 작업을 진행합니다

	//for (int i = 0; i < 9; i++)
	//{
	//	printf("입력할 값을 작성해주세요 >>");
	//	scanf("%d", &datas[i]);
	//}

	printf("결과\n");

	//for (int i = 0; i < 9; i++)
	//{
	//	printf("%d ", datas[i]);
	//}

	int iArray[5];

	for (int i = 0; i < 5; i++)
	{
		printf("입력할 값을 작성해주세요. >>");
		scanf("%d", &iArray[i]);
	
	}
	int search_number;
	int count = 0;
	printf("숫자를 하나 입력해주세요. >>");
	scanf("%d", &search_number);
	
	for (int i = 0; i < 5; i++)
	{
		if (search_number == iArray[i])
		{
			count++;
		}
	}
	printf("조사한 값의 개수는 %d개 입니다.\n", count);
	
	
	
	
	
	
	
	
	return 0;
}