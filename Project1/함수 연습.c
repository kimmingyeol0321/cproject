#define _CRT_NO_SECURE_WARANINGS
#include <stdio.h>


float avg(int sum, int count)
{
	return sum / count;
	//float를 열어줘서 소수점 자리 확보
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
				temp = numbers[j];//기존 값 저장
				numbers[j] = numbers[j + 1];//다음 값 저장
				numbers[j + 1] = temp;//기존 값 넘겨줌
			}
		}

	}
	//중앙값 = 배열의 개수 /2 위치에 해당하는 값
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