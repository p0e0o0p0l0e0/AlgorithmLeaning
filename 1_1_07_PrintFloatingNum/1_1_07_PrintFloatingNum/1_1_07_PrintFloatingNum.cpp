// 1_1_07_PrintFloatingNum.cpp: 定义控制台应用程序的入口点。
//

#include "stdlib.h"
#include "stdio.h"

int main()
{
	double dd;
	scanf("%lf", &dd);
	printf("%f\n", dd);
	printf("%0.5f\n", dd);
	printf("%e\n", dd);
	printf("%g\n", dd);

	system("pause");
	return 0;
}

