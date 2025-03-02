#include <stdio.h>


//call - back 함수는 다른 코드의 인수로 넘겨주는 실행 가능한 코드를 의미함
//콜백으로 넘겨받은 코드는 설계에 따라 즉시, 혹은 나중에 실행 가능
//특정 이벤트 발생 시, 사용자가 원하는 기능을 수행하기위한 용도

//콜백 함수 만드는법
//1. 정의
//typedef는 자료형 대신 지어준 이름으로 대신 표현할 수 있게 함

typedef void (*callback)(void);

//2. 설정을 진행할 함수 정의
void setcallback(callback);



//3.사용을 진행할 함수 정의
void usecallback(void);

//4. 사용자가 쓸 함수에 대한 정의
void usefuntion(void);

//5. 콜백에 대한 전역 변수 선언
callback user_callback = NULL;






int main()
{
	printf("콜백함수 설정 전 호출 실행\n");
	usecallback();


	setcallback(usefuntion);

	printf("콜백함수 설정 후 호출 실행\n");
	usecallback();



	return 0;
}


//6. 아래에 함수 구현
void setcallback(callback fp)
{
	user_callback = fp;
}

void usecallback(void)
{
	//user_callback의 값이 설정되어있다면 콜백함수 실행
	if (user_callback)
	{
		user_callback();
	}
	else
	{
		printf("none callback\n");
	}
}

void usefuntion(void)
{
	printf("callback funtion completed\n");
}
