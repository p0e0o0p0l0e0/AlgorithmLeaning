// 1_1_03_PrintFormat.cpp: 定义控制台应用程序的入口点。
//

#include "stdlib.h"
#include "stdio.h"

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%8d %8d %8d", a, b, c);

	system("pause");
    return 0;
}

