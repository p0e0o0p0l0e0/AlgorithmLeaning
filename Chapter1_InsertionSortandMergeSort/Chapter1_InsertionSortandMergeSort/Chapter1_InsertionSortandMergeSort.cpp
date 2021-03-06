#include <time.h>
#include <stdlib.h>
#include "stdio.h"
#define random(x)(rand()%x)

int array[1] = { 0 };
int size = 0;

int InsertionSort(int);
int MergeSort(int);

int main()
{
	srand((int)time(0));
	size = sizeof(array) / sizeof(array[0]);
	for (int i = 0; i < size; i++)
	{
		array[i] = random(10);
		printf("%d ", array[i]);
	}
	printf("\n");

	clock_t start, finish;
	double Total_time;
	start = clock();

	int n = 0;
	
	n = InsertionSort(n);
	//n = MergeSort(n);

	finish = clock();
	Total_time = (double)(finish - start);
	printf("\n函数运行时间：%lf毫秒 \n", Total_time);
	printf("\n遍历次数%d \n", n);

	system("pause");
	return 0;
}

int InsertionSort(int n)
{
	for (int j = 1; j < size; j++)
	{
		int itemvalue = array[j];
		int i = j - 1;
		while (i >= 0 && array[i] > itemvalue)
		{
			n++;
			array[i + 1] = array[i];
			i = i - 1;
		}
		array[i + 1] = itemvalue;
	}
	return n;
}

int MergeSort(int n)
{
	return n;
}