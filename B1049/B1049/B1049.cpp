// B1049.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

int main()
{
	int N;
	scanf_s("%d", &N);
	double *list = new double[N];
	for (int i = 0; i < N; i++)
		scanf_s("%lf", list + i);
	double sum = 0;
	for (int i = 0; i < N; i++)
		sum += list[i] * (N - i)*(i + 1);

	printf("%.2f\n", sum);

	system("pause");
	return 0;
}
