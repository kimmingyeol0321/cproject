#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//����ü(srtuct)
//���� �ڷ����� ��� ���ο� �ڷ����� ����� ���� �ǹ���(���� �ڷ���)
//������� ���Ǵ�� ��� �ϳ��� ���·� ǥ���ϴ� ����̱⿡ ����� ���� Ÿ���̶�� �θ�
//�������� ����ȭ �۾��� ������ �� ����ϴ� ��������

//����ȭ: ����Ǿ� �ϳ��� ����� ó���ϴ� ���, ����� �������δ� record(c#), object(java, c++)

/*
struct ����ü��
{
	//����ü�� ������ ���� ������
	int value;
	float f;
	char c;
}
*/

//����ü ����
struct student
{
	int number;	    // �л� ��ȣ
	char name[10];  // �̸� �ѱ� ���� 10���ڱ���
	char group;     //A, B, C, D, E
};
//����ü ������ ���� ������ �ƴϱ� ������, ����ϱ� ���ؼ� ���� ���� ����� �ʱ�ȭ�� �����ؾ� �մϴ�.


int main()
{
	//struct ����ü�� ������ = {����ü�� ���ǵ� ���� ������� �� �ۼ�}
	struct student s1 = { 1, "Keite", 'A' };

	struct student s2;//����ü ���� ����

	s2.number = 2;
	strcpy(s2.name, "Nero");
	s2.group = 'B';
	
	struct student s3;

	printf("�й��� �Է��մϴ�. : ");
	scanf("%d", &s3.number);
	printf("\n");
	printf("�̸� : ");
	scanf("%s", s3.name);
	printf("\n");
	getchar();
	printf("�׷� : ");
	scanf("%c", &s3.group);
	printf("\n");

	printf("�й�: %d  �̸�: %s  �׷�: %c\n", s1.number, s1.name, s1.group);
	printf("�й�: %d  �̸�: %s  �׷�: %c\n", s2.number, s2.name, s2.group);
	printf("�й�: %d  �̸�: %s  �׷�: %c\n", s3.number, s3.name, s3.group);

	
	


	return 0;
}