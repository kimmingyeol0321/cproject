#include <stdio.h>
//자연수 N과 M이 주어졌을 때, 1부터 N까지의 자연수 중에서 중복없이 M개를 고른 수열

//1 <= M < N <= 8 범위에 해당하는 값만 입력으로 넣습니다.

//N과 M에 대한 입력을 순서대로 진행합니다.
//예시)							출력결과
//3 1								1
//									2
//									3
//예시2)							출력결과
// 4 2							  1 2
//								  1 3
//								  1 4  
//								  2 1 
//								  2 3 
//								  2 4 
//								  3 1 
//								  3 2 
//								  3 4 
//								  4 1 
//								  4 2 
//								  4 3

int fun(int N, int M)
{
	int num[8];
	for (int i = 1; i <= N; i++)
	{
		num[i] = i;
	}
	
	int a = 0;

	for (int j = 1; j <= M; j++)
	{

		num[j] = a;

		printf("%d", a);
	}

	printf("\n");


}



int main()
{
	fun(3, 1);

	return 0;
}