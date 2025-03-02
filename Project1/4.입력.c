#define _CRT_SECURE_NO_WARNINGS
//프로그램에서의 안전검사를 하지 않도록 설정하는 코드
//이 코드를 추가할 경우 visual studio 내에서 scanf를 사용할 수 있습니다.

#include <stdio.h>
//입력(input)
//사용자가 직접 값을 입력하고 그 값을 특정 위치에 전달합니다.
//일반적으로는 변수를 만들고, 그 변수에 입력한 값을 적용하는 방식으로 사용합니다.

int main()
{
	int number;
	printf("input the number : ");
	scanf_s("%d", &number); 
	//visual studio에서 사용하는 경우라면 scanf_s로 입력하여 오류를 막아야함
	printf("number : %d\n", number);

	//getchar()
	//키보드로부터 하나의 문자를 읽어내는 함수
	//이 기능은 버퍼를 비우는 용도로도 사용됩니다.
	//버퍼(buffer) : c언어에서 입력을 진행할 경우 바로 값을 넘기는게 아니라 임시로 데이터를 저장하는 별도의 공간에 값을 넣고 전달하는 방식
	//문자를 다 받기 때문에 enter같은 기능도 값으로 남게 됩니다.


	//putchar(문자형 데이터)
	//전달받은 문자 하나를 화면에 출력하는 기능

	getchar(); // 키를 하나 받겠습니다. (이걸로 남아있는 enter를 처리합니다.)
	
	char key;
	printf("키를 하나 입력해주세요");
	key = getchar();
	putchar(key);

	//보통은 이렇게 안쓰는걸 권장함
	//숫자 다음에 '문자 하나'를 입력해야 하는 상황처럼 이전에 남아있는 값을 처리하고 다음 작업을 진행하는 경우 이런 식으로 쓴다
	
	getchar(); // 위에서 입력한 key 다음 동작인 enter키에 대한 값을 받아줍니다.

	//gets(), puts()
	//주로 문자열에 대한 입출력을 진행할 때 편하게 사용가능
	//문자열(문장, 단어 등)이랑 char 형태의 데이터를 묶음으로 표현한 것을 의미합니다.

	//문자열 만드는 방법
	//char 변수명[문자의 개수];

	char word[10];
	printf("단어를 입력해 주세요 >> ");
	gets(word); //문자열 입력 gets는 c언어에서만 사용 가능
	puts(word); //전달한 문자열 출력
	
#pragma region 주의사항
	//주의사항 : c언어에서 한글을 입력하는 경우 한글 하나당 2칸을 소모함
	//			현재 word는 10개의 단어를 사용가능하고 한글은 5개의 단어까지 입력 가능합니다.
	//			단, 입력을 진행할 경우 문자의 개수보다 1개정도 적게 작성합니다. ex) 10칸 사용할 경우 한글은 1칸 빼고 2로 나눠서 4칸밖에 사용못함
	//			따라서 영단어는 9글자까지, 한글은 4글자까지 가능
#pragma endregion

	//getchar();

	char item[10];
	printf("아이템의 이름을 입력해주세요 >> ");
	scanf("%s", item);
	//문자열을 받을 경우에는 item 앞에 &를 붙이지 않아도 됩니다.
	//%s는 문자열을 받는 지정자 입니다.
	printf("아이템의 이름 : %s\n", item);


	return 0;
}