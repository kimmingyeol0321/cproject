#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�迭
//���� ������ �����͸� ������� �����ϴ� ������
//�ڷ��� �迭��[�迭�� ����];
//�ڷ��� �迭��[] = {��1, ��2 .........};

//�ε���(index)
//�迭�� ����Ǿ��ִ� �������� ��ġ�� ǥ���ϴ� ������ ������
//�ε����� ���� ���� 0
//�ε����� ������ ���� ������� �迭�� ��ü ������ ����(����) -1���� �����˴ϴ�

//���(element)
//�迭 �ȿ� �ִ� �� �� ��ü�� �ǹ��ϴ� ��

//�ݺ��� for��
//for(�ʱ��;���ǽ�;������)
//{
//  ������ �����ϴ� ���� ���� ��ų ��ɹ�;
//}


int main()
{
	int scores[] = { 90, 100, 85 };
	printf("�������� = %d �������� = %d �������� = %d\n", scores[0], scores[1], scores[2]);

	
	int total = 0;
	total = scores[0] + scores[1] + scores[2];
	printf("���� = %d\n", total);
	total = 0;

	for (int i = 0; i < 3; i++)
	{
		total += scores[i];
	}
	printf("���� = %d\n", total);
	//�ݺ��� ���� ����
	//int i = 0; ����
	//���� Ȯ��(i < 3)
	//������ ������ ��� total += scores[i]; ����
	//i++ ����
	//������ ���� ���Ҷ����� �ݺ�
	
	
	//1. �迭�� �ִ� ���� ���������� ����ϼ���
	int numbers[] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", numbers[i]);
	}


	int number[] = { 1,2,3,4,5,6,7,8,9,10 };

	//for (int i = 9; i >= 0; i--)
	//{
	//	printf("%d ", numbers[i]);
	//}

	int datas[10];
	//10���� ������ �����͸� ������ �� �ִ� �迭 dates�� �غ�Ǿ��ֽ��ϴ�. 
	// �Է¹��� �̿��ؼ� �迭�� �����͸� ������� �߰��ϴ� �۾��� �����մϴ�

	//for (int i = 0; i < 9; i++)
	//{
	//	printf("�Է��� ���� �ۼ����ּ��� >>");
	//	scanf("%d", &datas[i]);
	//}

	printf("���\n");

	//for (int i = 0; i < 9; i++)
	//{
	//	printf("%d ", datas[i]);
	//}

	int iArray[5];

	for (int i = 0; i < 5; i++)
	{
		printf("�Է��� ���� �ۼ����ּ���. >>");
		scanf("%d", &iArray[i]);
	
	}
	int search_number;
	int count = 0;
	printf("���ڸ� �ϳ� �Է����ּ���. >>");
	scanf("%d", &search_number);
	
	for (int i = 0; i < 5; i++)
	{
		if (search_number == iArray[i])
		{
			count++;
		}
	}
	printf("������ ���� ������ %d�� �Դϴ�.\n", count);
	
	
	
	
	
	
	
	
	return 0;
}