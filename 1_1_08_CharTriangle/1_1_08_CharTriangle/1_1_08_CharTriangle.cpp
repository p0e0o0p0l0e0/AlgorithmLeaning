// 1_1_08_CharTriangle.cpp: 定义控制台应用程序的入口点。
//

#include "stdlib.h"
#include "time.h"
#include "stdio.h"

int main()
{
	clock_t start, finish;
	double Total_time;
	start = clock();

	char c;
	scanf("%c", &c);
	char c1[] = { ' ', ' ', c, '\0' };
	char c2[] = { ' ', c, c, c, '\0' };
	char c3[] = { c, c, c, c, c, '\0' };
	printf("%s\n", c1);
	printf("%s\n", c2);
	printf("%s\n", c3);

	finish = clock();
	Total_time = (double)(finish - start);
	printf("\n函数运行时间：%0.3f毫秒 \n", Total_time);

	system("pause");
	return 0;
}