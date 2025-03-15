#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
c언어 총정리
#define _CRT_SECURE_NO_WARNINGS 항상 맨 위에, 입력이나 파일 사용시
#include <stdio.h> c언어 작업할 경우 반드시 넣어야 함
#include <string.h> 문자열 작업시 넣어야 함
#include <windows.h> system 기능 사용하는 경우

==변수 만들기==
1.선언	:변수를 프로그램에 정의합니다. 정의한 값은 프로그램에 저장되며 저장된 위치에 따라 명령이 다릅니다.
	자료형 변수명;

	지역변수(local veriable) : 함수 내부에서 만들어지는 변수
				   함수가 종료되면 이 변수는 프로그램에서 제거됩니다.

	전역변수(global) : c언어 코드 파일에 만들어지는 변수를 의미합니다.
				  프로그램이 종료될 때 이 변수는 제거됩니다.

	매개변수(parameter) : 함수의 도입부 함수의 () 부분에 만들어지는 변수입니다.
			   함수가 종료될 때 이 변수는 제거됩니다.

	정적변수(static) : static 키워드가 붙은 변수입니다.
				 프로그램이 종료될 때 이 변수는 제거됩니다.
				 매개변수로는 사용 불가
			ex) funtion(static int a) {} (불가능)


2.초기화 : 값을 초기화하지 않으면, 프로그램에서 그 값을 사용하는 경우에 오류 발생할 수 있음.
	변수명 = 값;으로 초기화 진행
	또는 scanf와 같은 입력 기능을 통해 값을 초기화하는 것도 가능
3.선언 및 초기화
	자료형 변수명 = 값;


주의 : 한 번 '선언'한 변수에는 다시 자료형을 쓰지 않습니다.
ex) int a;
	a = 5; (o)
	int a = 5; (x)

int a;
float f;
char c;
char s[10];


printf("작성할 문장");
printf("%d %f %c %s", a, f, c, s);

scanf("%d %f %c %s", &a, &f, &c, s);
*/