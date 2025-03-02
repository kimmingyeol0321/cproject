#include <stdio.h>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//배열 포인터
//포인터는 주소이기에 배열에 대한 값을 처리할 수 있습니다.
void printarry(int* p, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
}

//(*포인터 변수명)[가로열의 길이] 
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


//함수 포인터 (함수의 이름을 전달해서, 그 기능을 쓰는것이 가능)
//하나의 이름으로 함수를 돌려쓰는 것이 가능
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

	//NULL 현재 따로 가리키는 값이 없는 경우 써주는 값
	//포인터는 값의 유무에 무관하게 그 위치를 가리키기 때문에, 지정을 해줘야함



	int (*ptr)(int, int) = NULL;

	ptr = add;
	printf("%d + %d = %d\n", a, b, ptr(a, b));


	ptr = sub;
	printf("%d - %d = %d\n", a, b, ptr(a, b));







	return 0;

}