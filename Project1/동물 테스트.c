#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//���׿� ���� ����(�迭)
	//�ڷ��� �迭��[] = {��1, ��2, ��3 ......}
	

	//�迭�� �� �ϳ��� �迭��[]
	int selected[] = { 0,0,0,0,0,0,0,0,0,0,0,0 };
	
	
	
	system("title ������ ���� �׽�Ʈ");
	printf("����� �ῡ�� �� �����\n������ �ΰ��� ���� �ƴ��� �����ϴ�.\n������ ������ �� ���� ������ �ϰ� �������?\n");
	int select;
	printf("1. �������� ������");
	scanf("$d", &select);
	system("cls"); // �ܼ� ȭ�� �����
	
	printf("\t�Ͼ���� ��������\n\t������ ȭ���� ���δٸ�\n");
	printf("\t1.\"ȭâ�ѵ� ���� ������?\"\n\t������ ����Ѵ�.\n");
	printf("\t2.\"��� ���� �ϵ��� ���� �� ���� ���̾�!\"\n\t�ϴ� ����� ����.");
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


	printf("\t�������� �����ϱ� ��,\n");
	printf("\t1.\"�������� ��� ì�� ������.\"\n");
	printf("\t2.\"�̸� �غ����� �ʰ� ������ ì�� ������.\"\n");
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

	printf("\tó�� ������ ��å�� ��\n");
	printf("\t1.\"�Ա��� �ִ� ������ ����\n��� �� �� ������ �� �� ���Ѵ�.\"\n");
	printf("\t2.\"������ �ѹ� �� ���� �߱� ��� ��� ����.\"\n");
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

	printf("\t�Ϳ��� �ٶ������ �����ٸ�,\n");
	printf("\t1.\"ó�� ���� �����鵵 ��� ģ��ģ��!\n���� ���� �ݰ��� ���Ǵ�.\"\n");
	printf("\t2.\"�Ϳ����� �ɸ�������\n �ָ��� ���Ѻ���.\"\n");
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

	printf("\t�Ϳ��� �ٶ��� ģ���� �Ǻκ��� ���ٰ� �ϼҿ��� �ߴ�.\n");
	printf("\t1.\"�Ǻο� ���� ģȯ�� ��ǰ�� �Ẹ�� �� �?\n\"�ذ����� �����Ѵ�.\n");
	printf("\t2.\"�����ڴ�...��ؤФФ�\"���� ���Ŀ� �������ش�.\n");
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

	printf("\t������� ������ ��� ������ ������ Ȳ���������� ���ٸ�\n");
	printf("\t1.\"�Ǻο� ���� ģȯ�� ��ǰ�� �Ẹ�� �� �?\n\"�ذ����� �����Ѵ�.\n");
	printf("\t2.\"�����ڴ�...��ؤФФ�\"���� ���Ŀ� �������ش�.\n");
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
	
	//12 ~ 13��
	if (total >= 12 && total <= 13)
	{
		printf("���Ӱ� ¥���Ѱ� ���� �ٷ��� ȣ����\n");
	}
	else if (total == 24)
	{
		printf("�Ѳ� ��ġ�� ����ø� ����\n");
	}

	return 0;
}