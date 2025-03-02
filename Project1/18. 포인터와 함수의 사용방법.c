#include <stdio.h>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//�迭 ������
//�����ʹ� �ּ��̱⿡ �迭�� ���� ���� ó���� �� �ֽ��ϴ�.
void printarry(int* p, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
}

//(*������ ������)[���ο��� ����] 
void print2array(int(*p)[3], int size1, int size2)
{
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


//�Լ� ������ (�Լ��� �̸��� �����ؼ�, �� ����� ���°��� ����)
//�ϳ��� �̸����� �Լ��� �������� ���� ����
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}



int main()
{
	int a = 10;
	int b = 7;
	swap(&a, &b);
	printf("a = %d b = %d\n", a, b);

	
	int iarray[] = { 1 , 2, 3, 4, 5 };
	printarry(iarray, 5);

	int iarray2[2][3] = { {1,2,3} , {4,5,6} };

	print2array(iarray2, 2, 3);

	//NULL ���� ���� ����Ű�� ���� ���� ��� ���ִ� ��
	//�����ʹ� ���� ������ �����ϰ� �� ��ġ�� ����Ű�� ������, ������ �������



	int (*ptr)(int, int) = NULL;

	ptr = add;
	printf("%d + %d = %d\n", a, b, ptr(a, b));


	ptr = sub;
	printf("%d - %d = %d\n", a, b, ptr(a, b));







	return 0;

}