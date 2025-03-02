#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//문항에 대한 저장(배열)
	//자료형 배열명[] = {값1, 값2, 값3 ......}
	

	//배열의 값 하나는 배열명[]
	int selected[] = { 0,0,0,0,0,0,0,0,0,0,0,0 };
	
	
	
	system("title 숲속의 동물 테스트");
	printf("어느날 잠에서 깬 당신은\n내몸이 인간의 몸이 아님을 느낍니다.\n숲속의 동물이 된 나는 무엇을 하고 있을까요?\n");
	int select;
	printf("1. 숲속으로 떠나기");
	scanf("$d", &select);
	system("cls"); // 콘솔 화면 지우기
	
	printf("\t일어나보니 오랜만에\n\t깨끗한 화면이 보인다면\n");
	printf("\t1.\"화창한데 오늘 뭐하지?\"\n\t뭐할지 고민한다.\n");
	printf("\t2.\"기분 좋은 일들이 생길 것 같은 날이야!\"\n\t일단 기분이 좋다.");
	scanf("$d", &select);
	if (select == 1)
	{
		selected[0] == 1;
	}
	else if (select == 2)
	{
		selected[0] == 2;
	}
	system("cls");


	printf("\t숲속으로 외출하기 전,\n");
	printf("\t1.\"생각나는 대로 챙겨 나간다.\"\n");
	printf("\t2.\"미리 준비해준 옷과 가방을 챙겨 나간다.\"\n");
	scanf("$d", &select);
	if (select == 1)
	{
		selected[1] == 1;
	}
	else if (select == 2)
	{
		selected[1] == 2;
	}
	system("cls");

	printf("\t처음 숲속을 산책할 때\n");
	printf("\t1.\"입구에 있는 지도를 보고\n어디 갈 지 무엇을 볼 지 정한다.\"\n");
	printf("\t2.\"지도를 한번 슥 보고 발길 닿는 대로 간다.\"\n");
	scanf("$d", &select);
	if (select == 1)
	{
		selected[2] == 1;
	}
	else if (select == 2)
	{
		selected[2] == 2;
	}
	system("cls");

	printf("\t귀여운 다람쥐들을 만난다면,\n");
	printf("\t1.\"처음 보는 동물들도 모두 친구친구!\n먼저 가서 반갑게 말건다.\"\n");
	printf("\t2.\"귀여워서 심멎이지만\n 멀리서 지켜본다.\"\n");
	scanf("$d", &select);
	if (select == 1)
	{
		selected[3] == 1;
	}
	else if (select == 2)
	{
		selected[3] == 2;
	}
	system("cls");

	printf("\t귀여운 다람쥐 친구가 피부병이 났다고 하소연을 했다.\n");
	printf("\t1.\"피부에 좋은 친환경 제품을 써보는 건 어때?\n\"해결방안을 제시한다.\n");
	printf("\t2.\"아프겠다...어떡해ㅠㅠㅠ\"같이 아픔에 공감해준다.\n");
	scanf("$d", &select);
	if (select == 1)
	{
		selected[4] == 1;
	}
	else if (select == 2)
	{
		selected[4] == 2;
	}
	system("cls");

	printf("\t사람들이 나무를 베어가 소중한 숲속이 황량해진것을 본다면\n");
	printf("\t1.\"피부에 좋은 친환경 제품을 써보는 건 어때?\n\"해결방안을 제시한다.\n");
	printf("\t2.\"아프겠다...어떡해ㅠㅠㅠ\"같이 아픔에 공감해준다.\n");
	scanf("$d", &select);
	if (select == 1)
	{
		selected[5] == 1;
	}
	else if (select == 2)
	{
		selected[5] == 2;
	}
	system("cls");
	

	
	
	int total = 0;
	for (int i = 0; i < 12; i++)
	{
		total += selected[1];
	}
	
	//12 ~ 13점
	if (total >= 12 && total <= 13)
	{
		printf("새롭고 짜릿한게 좋은 꾸러기 호랑이\n");
	}
	else if (total == 24)
	{
		printf("한껏 센치한 멜랑꼴리 늑대\n");
	}

	return 0;
}