#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>





int main()
{
	char name[] = "자바";

	char* job = "application developer";
	job = "programmer";
	printf("%s %s\n", name, job);

	char inventory[][20] = { "바나나", "딸기", "사과", "포도" };

	char* shop[] = { "딸기바나나", "딸기사과" };

	//strlen()
	char array1[] = "c programming";
	char array2[] = "씨프로그래밍";

	printf("array1의 문자열의 길이 = %lu\n", strlen(array1));
	printf("array1의 문자열의 크기 = %lu\n", sizeof(array1));
	printf("array2의 문자열의 길이 = %lu\n", strlen(array2));
	printf("array2의 문자열의 크기 = %lu\n", sizeof(array2));
	//%:서식지정자
	//l:long
	//u:부호가 따로 없음을 표현

	//sizeof보다 더 정확하게 사용가능한 길이를 알 수 있음

	//strcpy()
	//strcpy(바꿀 문장, 바꾸려는 문장)을 통해, 문자열의 값을 변경하거나, 복사하는데 사용합니다.

	char sample1[] = "apple";
	char sample2[20];

	strcpy(sample2, sample1);

	printf("sample2 = %s\n", sample2);

	//strncpy()
	//strncpy(바꿀문장, 바꾸려는 문장, 개수); 를 통해 일부만 변경가능
	char sam[] = "hello everyone";
	char sam2[20];
	strncpy(sam2, sam, 5);
	sam2[5] = '\0';//마지막 부분을 \0으로 처리
	printf("%s\n", sam2);
	
	
	//strcat(문자열1, 문자열2) 문자열 합하기
	char sam3[20] = "c언어 ";
	char sam4[] = "프로그래밍";
	strcat(sam3, sam4);
	printf("%s\n", sam3);


	//strcmp(문자열1, 문자열2) 두 문자열을 비교하고 일반적인 경우 비교결과에 따라 0(같음), -1(다름)을 반환합니다.
	//문자열1 < 문자열2 인 경우 음수
	//문자열1 = 문자열2 인 경우 0
	//문자열1 > 문자열2 인 경우 양수
	//크기의 판단기준은 아스키 코드 기준 입니다.

	//strcmp 비교결과값이 0이면 같다는 것을 이용하여 문자열에 대한 확인 용도로 쓰임

	printf("%d\n", strcmp("apple", "applf"));
	printf("%d\n", strcmp("applf", "apple"));





	return 0;
}

