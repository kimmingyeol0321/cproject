#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1. 파일을 이용해 세이브 / 로드 기능을 보일 수 있는 프로그램을 구현하세요


int main()
{
	FILE* fp = NULL;
	
	fp = fopen("program_data.txt", "w");

	int level;
	int atc;
	int def;

	printf("stat");
	scanf("%d %d %d", &level, &atc, &def);
	fprintf(fp, "%d %d %d", level, atc, def);

	fclose(fp);

	FILE* dp = NULL;

	dp = fopen("progrem_data.txt", "r");

	printf("lv\t atc\t des\n");
	fscanf(dp, "%d %d %d", &level, &atc, &def);
	fprintf(dp, "%d %d %d", level, atc, def);
	
	fclose(dp);

	return 0;
}