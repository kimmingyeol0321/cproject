#define _CRT_SECURE_WARNINGS
#include <stdio.h>

#pragma region if문 사용 방법
//if문 사용 방법
//if(조건식)
//{
// 조건식이 만족할 때 실행할 명령문;
//}

//if - else 문
//if(조건식)
//{
// 조건식이 만족할 떄 실행할 명령문;
// }
//else
//{
// 조건식이 만족하지 않았을 떄 실행할 명령문;
// }

//if - else if 문
//if(조건식)
//{
// 조건식이 만족할 때 실행할 명령문;
// }
//else if(조건식2)
//{
// 위에 조건식이 만족하지 않고, 조건식2를 만족하고있을 때 실행할 명령문;
// }
#pragma endregion

int main()
{
	int number1, number2;

	printf("두개의 정수를 입력해주세요.(단, 큰 수를 먼저 입력합니다.) >> ");
	scanf_s("%d %d", &number1, &number2);

	if (number1 > number2)
	{
		printf("두 수의 곱은 %d입니다.\n", number1 * number2);
	}
	else
	{
		printf("number1이 number2보다 더 큰 값이어야 합니다.\n");
	}


	// 일반적인 풀이
	int score;
	printf("0점부터 100점 사이에 점수를 입력해주세요. >> ");
	scanf_s("%d", &score);
	//if (score < 0)
	//{
	//	printf("잘못된 입력입니다\n");
	//}
	//else if (score > 100)
	//{
	//	printf("잘못된 입력입니다.\n");
	//}
	

	//조건식을 2개 이상 사용하는 방법 
	// A AND B 비트연산 기호 &를 2번 작성 
	// ex) score >= 0 %% score <= 100 
	// 점수는 0 이상 100 이하인 조건
	
	//A OR B 비트연산 기호 |를 2번 작성
	//ex) score < 0 || score > 100
	// 점수는 0 미만 혹은 100 초과인 조건
	
	if (score < 0 || score > 100)  //A OR B 조건 A 또는 B가 만족할 경우 실행
	{
		printf("잘못된 입력입니다.\n");
	}
	else if (score >= 60)
	{
		printf("합격\n");
	}
	else if (score < 60)
	{
		printf("불합격");
	}
	
	



	
	return 0;
}