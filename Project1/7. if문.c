#define _CRT_SECURE_WARNINGS
#include <stdio.h>

#pragma region if�� ��� ���
//if�� ��� ���
//if(���ǽ�)
//{
// ���ǽ��� ������ �� ������ ��ɹ�;
//}

//if - else ��
//if(���ǽ�)
//{
// ���ǽ��� ������ �� ������ ��ɹ�;
// }
//else
//{
// ���ǽ��� �������� �ʾ��� �� ������ ��ɹ�;
// }

//if - else if ��
//if(���ǽ�)
//{
// ���ǽ��� ������ �� ������ ��ɹ�;
// }
//else if(���ǽ�2)
//{
// ���� ���ǽ��� �������� �ʰ�, ���ǽ�2�� �����ϰ����� �� ������ ��ɹ�;
// }
#pragma endregion

int main()
{
	int number1, number2;

	printf("�ΰ��� ������ �Է����ּ���.(��, ū ���� ���� �Է��մϴ�.) >> ");
	scanf_s("%d %d", &number1, &number2);

	if (number1 > number2)
	{
		printf("�� ���� ���� %d�Դϴ�.\n", number1 * number2);
	}
	else
	{
		printf("number1�� number2���� �� ū ���̾�� �մϴ�.\n");
	}


	// �Ϲ����� Ǯ��
	int score;
	printf("0������ 100�� ���̿� ������ �Է����ּ���. >> ");
	scanf_s("%d", &score);
	//if (score < 0)
	//{
	//	printf("�߸��� �Է��Դϴ�\n");
	//}
	//else if (score > 100)
	//{
	//	printf("�߸��� �Է��Դϴ�.\n");
	//}
	

	//���ǽ��� 2�� �̻� ����ϴ� ��� 
	// A AND B ��Ʈ���� ��ȣ &�� 2�� �ۼ� 
	// ex) score >= 0 %% score <= 100 
	// ������ 0 �̻� 100 ������ ����
	
	//A OR B ��Ʈ���� ��ȣ |�� 2�� �ۼ�
	//ex) score < 0 || score > 100
	// ������ 0 �̸� Ȥ�� 100 �ʰ��� ����
	
	if (score < 0 || score > 100)  //A OR B ���� A �Ǵ� B�� ������ ��� ����
	{
		printf("�߸��� �Է��Դϴ�.\n");
	}
	else if (score >= 60)
	{
		printf("�հ�\n");
	}
	else if (score < 60)
	{
		printf("���հ�");
	}
	
	



	
	return 0;
}