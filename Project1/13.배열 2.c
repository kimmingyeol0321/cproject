#include <stdio.h>

//2���� �迭 : �迭�� ��Ұ� �迭�� ���¸� �ǹ��մϴ�.
//ex) int iarray[] = {1,2,3,4,5};   1���� �迭
//ex) int iarray2[][] = { {1,2,3}, {4,5,6}, {7,8,9}}; 2���� �迭

//�ַ� for���� �̿��ؼ� �迭�� ����� �ϰ� �Ǵµ� �� �������� �迭 ����� ���
//�ڷ��� �迭��[���ο�][���ο�];

int main()
{
	int iArray2[3][4] =
	{
		{1,2,3,4}
		,
		{5,6,7,8}
		,
		{9,10,11,12}
	};

	for (int i = 0; i < 3; i++) //���ο� �κп� ���� �ݺ�
	{
		//���ο� �۾��� �����ϴ� ���� �ݺ���ų ���ο��� ���� �ݺ�
		for (int j = 0; j < 4; j++)
		{
			printf("%2d ", iArray2[i][j]);
		}
		printf("\n"); //���� ����(�� ����)
	}
	//i�� 0�� ��, j�� 0���� 3���� �ݺ�
	//i�� 1�� ��, j�� 0���� 3���� �ݺ�
	//i�� 2�� ��, j�� 0���� 3���� �ݺ�
	//�۾� ����


	int value2[3][3]; //3 x 3 �� ������ 2���� �迭 ����
	int value = 1;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			value2[i][j] = value++;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", value2[i][j]);
		}
		printf("\n");
	}


	//���� ����
	//��� ���ø� �����Ͽ�, ������ �迭 value3�� ���弼��.
	//��, �迭 ������ �ʱ�ȭ�� ���ÿ� �������� �ʽ��ϴ�.
	// 
	//  ��       �ε���
	//1 6 7    00 01 02
	//2 5 8    10 11 12
	//3 4 9    20 21 22

	int value3[3][3];
	value = 1;

	//�۾�
	for (int i = 0; i < 3; i++)
	{
		//i�� ¦���� ��쿡�� ������� ���� ����
		if (i % 2 == 0)
		{
			for (int j = 0; j < 3; j++)
			{
				//1. ���� ���� ������ �Ʒ��� ����ǰ� ����. ���� i�� j�� ���� ������ ����
				value3[j][i] = value++;
			}
		}
		else//i�� Ȧ���� ����� �ݴ�� ���� �����ϵ��� ����
		{
			for (int j = 2; j >= 0; j--)
			{
				
				value3[j][i] = value++;
			}
		}
	}

	//���
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", value3[i][j]);
		}
		printf("\n");
	}

	//���� ���� 1 ���̵� ��

	// 1 2 3     00 01 02
	// 6 5 4     10 11 12
	// 7 8 9     20 21 22

	int value4[3][3];
	value = 1;

	printf("\n���� 1\n");
	//���� ����
	//value4[i][j]��� �� ��, i�� ¦���� ���� j�� ���������� ������ ��, ���� �߰��մϴ�.
	//                       i�� Ȧ���� ��쿡�� j�� ������ ��ġ���� ù��° ��ġ���� ���� �������� �����մϴ�.
	for (int i = 0; i < 3; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < 3; j++)
			{
				value4[i][j] = value++;
			}
		}
		else
		{
			for (int j = 2; j >= 0; j--)
			{
				value4[i][j] = value++;
			}
		}
	}
	//���
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", value4[i][j]);
		}
		printf("\n");
	}


	// 1 2 3
	// 6 5 4
	// 7 8 9


	//���� ���� 3 ���̵� ��
	// 1 2 3
	// 8 9 4
	// 7 6 5

	int value5[3][3];
	value = 1;

	int top = 0;
	int bottom = 2;
	int left = 0;
	int right = 2;

	//�迭�� ���̸�ŭ �ݺ� �۾�
	for (int arrays = 0; arrays < (sizeof(value5) / sizeof(int)) - 1; arrays++)
	{
		// -> ���� ����
		for (int i = left; i <= right; i++)
		{
			value5[top][i] = value++;
		}
		top++;
		// ������ ���� ����
		for (int i = top; i <= bottom; i++)
		{
			value5[i][right] = value++;
		}
		right--;
		//�Ʒ� ����
		for (int i = right; i >= left; i--)
		{
			value5[bottom][i] = value++;
		}
		bottom--;
		//<- ���� ����
		for (int i = bottom; i >= top; i--)
		{
			value5[i][left] = value++;
		}
		left++;
	}

	printf("\n���� 2\n");
	//���
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", value5[i][j]);
		}
		printf("\n");
	}







	return 0;
}