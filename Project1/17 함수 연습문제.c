#include <stdio.h>//����� ����
#include <stdarg.h>//���� ���� ����
#include <math.h> //���� ��� ����

//1�� ����
void Quadformula(double a, double b, double c)
{
	double d = b * b - 4 * a * c;
	double result = -1 * b / 2 / a + sqrt(d) / 2 * a;
	double result2 = -1 * b / 2 / a - sqrt(d) / 2 * a;

	printf("x��- 2x = 2 �� ���� x = %f  ", result);
	printf("�Ǵ� x = %f\n", result2);


}

//2�� ����
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

//3�� ����
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

	printf("��հ��� %.2f\n", y);

	return y;

}

//4�� ����
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



//5�� ����
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
	//1. x�� - 2x = 2�� Ǯ���Ͻÿ�.
	double a = 1;
	double b = -2;
	double c = -2;
	Quadformula(a, b, c);
	//��Ʈ : 2�� �������� Ǯ�� ���ؼ� ���� ������ �̿��غ��ϴ�.

	
	
	
	
	
	
	
	//2. ���� ������ �����ϴ� printRank�� �����ϼ���.
	int rank = 1;
	printRank(rank); //1st
	rank = 2;
	printRank(rank); //2nd
	rank = 3;
	printRank(rank); //3rd	
	//1st, 2nd, 3rd, 4th ,... 21st

	//3. ���� ������ �����ϴ� average�� �����ϼ���.
	float result1 = average(3, 100, 95, 90);   //95.00
	float result2 = average(4, 100, 95, 90, 80); //91.25
	//��Ʈ) printf("%.2f, value);�� Ȱ���ϸ� �Ҽ��� 2�ڸ����� ��� ����


	//4.���� ������ �����ϴ� isOdd�� �����ϼ���.
	isOdd(3); //"YES"
	isOdd(4); //"NO"
	isOdd(5); //"YES"

	//5.���� ������ �����ϴ� getPrime�� �����ϼ���.
	
	for (int i = 1; i <= 10; i++)
	{
		if (getPrime(i) == 1)
		{
			printf("�� ���� �Ҽ��Դϴ�.\n");
		}
		else
		{
			printf("�� ���� �Ҽ��� �ƴմϴ�/\n");
		}
	}
	return 0;
}