// 1_1_06_PrintBlankSeparate.cpp: 定义控制台应用程序的入口点。
//


#include "stdlib.h"
#include "stdio.h"

int main()
{
	char c;
	int i;
	float f;
	double lf;
	scanf("%c\n%i\n%f\n%lf", &c, &i, &f, &lf);
	printf("%c %i %0.6f %0.6lf", c, i, f, lf);

	system("pause");
	return 0;
}