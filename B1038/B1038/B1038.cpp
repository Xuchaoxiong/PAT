// B1038.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"

int main()
{
	int N;   //ѧ������
	scanf_s("%d", &N);
	int stu[101] = {0}, tmp;    //���治ͬ������ѧ������
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &tmp);
		stu[tmp]++;

	}

	int K;         //Ҫ��ѯ�ķ���K
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

