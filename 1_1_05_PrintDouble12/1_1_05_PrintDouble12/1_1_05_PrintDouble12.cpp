// 1_1_05_PrintDouble12.cpp: 定义控制台应用程序的入口点。
//

#include "stdlib.h"
#include "stdio.h"

int main()
{
	double dd;
	scanf("%lf", &dd);
	printf("%0.12lf", dd);

	system("pause");
	return 0;
}

