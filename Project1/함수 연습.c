#define _CRT_NO_SECURE_WARANINGS
#include <stdio.h>


float avg(int sum, int count)
{
	return sum / count;
	//float�� �����༭ �Ҽ��� �ڸ� Ȯ��
}


int sum(int numbers[], int size)
{
	int result = 0;
	for (int i = 0; i < size; i++)
	{
		result += numbers[i];
	}
	return result;
}
int center(int* numbers, int size)
{
	int result = 0;
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < (size - 1) - i; j++)
		{
			if (numbers[j] > numbers[j + 1])
			{
				temp = numbers[j];//���� �� ����
				numbers[j] = numbers[j + 1];//���� �� ����
				numbers[j + 1] = temp;//���� �� �Ѱ���
			}
		}

	}
	//�߾Ӱ� = �迭�� ���� /2 ��ġ�� �ش��ϴ� ��
	return result = numbers[(int)(size / 2)];
}




int main()
{
	int numbers[5];

	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &numbers[i]);
	}
	int sum_value = sum(numbers, 5);
	int avg_value = avg(sum_value, 5);
	int center_value = center(numbers, 5);
	
	printf("%d\n", avg_value);
	printf("%d\n", center_value);


	return 0;
}