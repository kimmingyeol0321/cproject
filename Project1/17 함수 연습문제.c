#include <stdio.h>//입출력 제공
#include <stdarg.h>//가변 인자 제공
#include <math.h> //수학 기능 제공

//1번 문제
void Quadformula(double a, double b, double c)
{
	double d = b * b - 4 * a * c;
	double result = -1 * b / 2 / a + sqrt(d) / 2 * a;
	double result2 = -1 * b / 2 / a - sqrt(d) / 2 * a;

	printf("x²- 2x = 2 의 근은 x = %f  ", result);
	printf("또는 x = %f\n", result2);


}

//2번 문제
void printrank(int a)
{
	if (a = 1)
	{
		printf("1st");
	}
	else if (a = 2)
	{
		printf("2nd");
	}
	else if (a = 3)
	{
		printf("3rd");
	}
	else (3 < a || a < 22);
	{
		printf("%dth", a);
	}

}

//3번 문제
float average(int count, ...)
{
	va_list args;
	va_start(args, count);

	float result = 0;

	for (int i = 0; i < count; i++)
	{
		result += va_arg(args, int);
	}

	float y = result / count;

	printf("\n");
	va_end(args);

	printf("평균값은 %.2f\n", y);

	return y;

}

//4번 문제
void isodd(int a)
{
	if (a % 2 == 0)
	{
		printf("NO\n");
	}
	else if (a % 2 != 0)
	{
		printf("YES\n");
	}
}



//5번 문제
int getPrime(int a)
{
	int ALL = 0;

	for (double i = 1; i <= a; i++)
	{
		double d = a / i;

		for (int j = 0; j <= a; j++)
		{
			if (j < d && d < j + 1)
			{
				d = 0;
			}
		}
		ALL += d;
	}

	if (ALL == a + 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}


int main()
{
	printf("root 4 = %.2f\n", sqrt(4));
	//1. x² - 2x = 2를 풀이하시오.
	double a = 1;
	double b = -2;
	double c = -2;
	Quadformula(a, b, c);
	//힌트 : 2차 방정식을 풀기 위해선 근의 공식을 이용해봅니다.

	
	
	
	
	
	
	
	//2. 다음 조건을 만족하는 printRank를 구현하세요.
	int rank = 1;
	printRank(rank); //1st
	rank = 2;
	printRank(rank); //2nd
	rank = 3;
	printRank(rank); //3rd	
	//1st, 2nd, 3rd, 4th ,... 21st

	//3. 다음 조건을 만족하는 average를 구현하세요.
	float result1 = average(3, 100, 95, 90);   //95.00
	float result2 = average(4, 100, 95, 90, 80); //91.25
	//힌트) printf("%.2f, value);를 활용하면 소수점 2자리까지 출력 가능


	//4.다음 조건을 만족하는 isOdd를 구현하세요.
	isOdd(3); //"YES"
	isOdd(4); //"NO"
	isOdd(5); //"YES"

	//5.다음 조건을 만족하는 getPrime을 구현하세요.
	
	for (int i = 1; i <= 10; i++)
	{
		if (getPrime(i) == 1)
		{
			printf("이 값은 소수입니다.\n");
		}
		else
		{
			printf("이 값은 소수가 아닙니다/\n");
		}
	}
	return 0;
}