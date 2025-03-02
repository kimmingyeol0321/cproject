#include <stdio.h>


//call - back �Լ��� �ٸ� �ڵ��� �μ��� �Ѱ��ִ� ���� ������ �ڵ带 �ǹ���
//�ݹ����� �Ѱܹ��� �ڵ�� ���迡 ���� ���, Ȥ�� ���߿� ���� ����
//Ư�� �̺�Ʈ �߻� ��, ����ڰ� ���ϴ� ����� �����ϱ����� �뵵

//�ݹ� �Լ� ����¹�
//1. ����
//typedef�� �ڷ��� ��� ������ �̸����� ��� ǥ���� �� �ְ� ��

typedef void (*callback)(void);

//2. ������ ������ �Լ� ����
void setcallback(callback);



//3.����� ������ �Լ� ����
void usecallback(void);

//4. ����ڰ� �� �Լ��� ���� ����
void usefuntion(void);

//5. �ݹ鿡 ���� ���� ���� ����
callback user_callback = NULL;






int main()
{
	printf("�ݹ��Լ� ���� �� ȣ�� ����\n");
	usecallback();


	setcallback(usefuntion);

	printf("�ݹ��Լ� ���� �� ȣ�� ����\n");
	usecallback();



	return 0;
}


//6. �Ʒ��� �Լ� ����
void setcallback(callback fp)
{
	user_callback = fp;
}

void usecallback(void)
{
	//user_callback�� ���� �����Ǿ��ִٸ� �ݹ��Լ� ����
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
