#include <stdio.h>

struct item
{
	int code;//������ �ڵ�
	char name[30];//������ �̸�
	char description[50];//������ ����
};


int main()
{

	//����ü ������ ���� 
	//struct ����ü�� *������
	struct item* item01;

	struct item item02 = { 2, "FBK", "KON-KON" };

	item01 = &item02;


	//�����ͷ� ����Ų ���� ������ ����ü��.�������� �ƴ� ����ü�� ->���������� �ٲ�� �˴ϴ�.
	//���������� ����Ű�� �ִ� ���� ->�� ����ϰ� �־ �����ϱ� �����ϴ�.
	printf("�ڵ� : %d  �̸� : %s  ���� : %s", item01->code, item01->name, item01->description);


	return 0;
}