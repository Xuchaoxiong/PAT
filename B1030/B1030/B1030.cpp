// B1030.cpp : �������̨Ӧ�ó������ڵ㡣
//


//������ҿ�ʼ��˼·�ǣ��Ƚ����ж�������֮�У�Ȼ������Ȼ��ӵ�һ��Ԫ����Ϊ��СԪ�أ�
//������������еĳ��ȣ�Ȼ���ٴӵڶ�������Ϊ��СԪ�أ����㳤�ȡ��������������Ļ�ʱ��
//���ӶȺܸߣ����������һ��Ԫ�صõ�max���ȣ�Ȼ��ڶ�Ԫ����max+1�����ȿ�ʼ���бȽϣ�
//�������ܹ����ٲ�С�ļ��㿪֧


#include "stdafx.h"
#include "stdlib.h"
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	long n, p;
	cin >> n >> p;
	long *list = new long[n];
	for (int i = 0; i < n; i++)
		scanf_s("%d", &list[i]);

	sort(list, list + n);
	long max = 0;
	for (int i = 0; i <n; i++)
	{
		for (int j = i+max; j < n;j++)
		{
			if (list[i]*p<list[j])
				break;

			if (j-i+1>max)
				max = j - i + 1;

		}

	}

	cout << max << endl;


	delete [] list;

	system("pause");
	return 0;
}

