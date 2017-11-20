// B1038.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"

int main()
{
	int N;   //学生人数
	scanf_s("%d", &N);
	int stu[101] = {0}, tmp;    //储存不同分数的学生个数
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &tmp);
		stu[tmp]++;

	}

	int K;         //要查询的分数K
	scanf_s("%d", &K);
	int *score = new int[K];
	for (int i = 0; i < K; i++)
	{
		scanf_s("%d", score + i);
	}

	for (int i = 0; i < K-1; i++)
	{
		printf("%d ", stu[score[i]]);
	}
	printf("%d\n", stu[score[K-1]]);
	
	system("pause");
	return 0;
}

