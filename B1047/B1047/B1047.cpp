// B1047.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int main()
{
	int troops[1001] = { 0 }, N;
	int troops_num, member_num, scores;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d-%d %d", &troops_num, &member_num, &scores);
		troops[troops_num] += scores;
	}

	int max_score = 0, vic_trp = 0;
	for (int i = 0; i < 1001; i++)
	{
		if (troops[i]>max_score)
		{
			max_score = troops[i];
			vic_trp = i;
		}


	}

	printf("%d %d", vic_trp, max_score);

	system("pause");

	return 0;
}

