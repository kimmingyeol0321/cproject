#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>





int main()
{
	char name[] = "�ڹ�";

	char* job = "application developer";
	job = "programmer";
	printf("%s %s\n", name, job);

	char inventory[][20] = { "�ٳ���", "����", "���", "����" };

	char* shop[] = { "����ٳ���", "������" };

	//strlen()
	char array1[] = "c programming";
	char array2[] = "�����α׷���";

	printf("array1�� ���ڿ��� ���� = %lu\n", strlen(array1));
	printf("array1�� ���ڿ��� ũ�� = %lu\n", sizeof(array1));
	printf("array2�� ���ڿ��� ���� = %lu\n", strlen(array2));
	printf("array2�� ���ڿ��� ũ�� = %lu\n", sizeof(array2));
	//%:����������
	//l:long
	//u:��ȣ�� ���� ������ ǥ��

	//sizeof���� �� ��Ȯ�ϰ� ��밡���� ���̸� �� �� ����

	//strcpy()
	//strcpy(�ٲ� ����, �ٲٷ��� ����)�� ����, ���ڿ��� ���� �����ϰų�, �����ϴµ� ����մϴ�.

	char sample1[] = "apple";
	char sample2[20];

	strcpy(sample2, sample1);

	printf("sample2 = %s\n", sample2);

	//strncpy()
	//strncpy(�ٲܹ���, �ٲٷ��� ����, ����); �� ���� �Ϻθ� ���氡��
	char sam[] = "hello everyone";
	char sam2[20];
	strncpy(sam2, sam, 5);
	sam2[5] = '\0';//������ �κ��� \0���� ó��
	printf("%s\n", sam2);
	
	
	//strcat(���ڿ�1, ���ڿ�2) ���ڿ� ���ϱ�
	char sam3[20] = "c��� ";
	char sam4[] = "���α׷���";
	strcat(sam3, sam4);
	printf("%s\n", sam3);


	//strcmp(���ڿ�1, ���ڿ�2) �� ���ڿ��� ���ϰ� �Ϲ����� ��� �񱳰���� ���� 0(����), -1(�ٸ�)�� ��ȯ�մϴ�.
	//���ڿ�1 < ���ڿ�2 �� ��� ����
	//���ڿ�1 = ���ڿ�2 �� ��� 0
	//���ڿ�1 > ���ڿ�2 �� ��� ���
	//ũ���� �Ǵܱ����� �ƽ�Ű �ڵ� ���� �Դϴ�.

	//strcmp �񱳰������ 0�̸� ���ٴ� ���� �̿��Ͽ� ���ڿ��� ���� Ȯ�� �뵵�� ����

	printf("%d\n", strcmp("apple", "applf"));
	printf("%d\n", strcmp("applf", "apple"));





	return 0;
}

