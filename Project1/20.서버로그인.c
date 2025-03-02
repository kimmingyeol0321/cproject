#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

typedef void (*server_connection)(char* id, int pw);

void connect_server(server_connection callback);
void on_server_connected();
void login();
void on_server_disconnected();
void setting(server_connection fp);
void onlogin(char* id, int pw);

	char id[20];
	int  pw;

	char name[]= "asdf1234";
	int  pass = 12341234;



int main()
{
	login();
	connect_server();

	
	


	


	return 0;
}

void connect_server(server_connection callback)
{
	if (callback)
	{
		on_server_connected();
	}
	else
	{
		on_server_disconnected();
	}
}

void on_server_connected()
{
	printf("서버에 연결을 성공했습니다.");
}

void login()
{
	printf("아이디를 입력하세요");
	scanf_s("%s", id);
	printf("비밀번호를 입력하세요");
	scanf_s("%d", &pw);

	setting(onlogin);
	
		


}

void on_server_disconnected()
{
	printf("아이디 또는 비밀번호가 잘못되었습니다.");
}

void setting(server_connection fp)
{
	sc = fp;
}

void onlogin(char* id, int pw)
{
	if (strcmp(name, id) == 0 && pw == pass)
	{
		printf("success\n");
	}
	else
	{
		sc = NULL;
		printf("fail\n");
	}

}
