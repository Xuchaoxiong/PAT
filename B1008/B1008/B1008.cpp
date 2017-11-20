// B1008.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n,right_num;
	cin >> n >> right_num;
	int *list = new int[n];
	int *list2 = new int[n];
	for (int i = 0; i < n; i++)
		cin >> list[i];
	right_num = right_num % n;
	for (int i = 0; i < n; i++)
	{
		if ((i+right_num)<n)
		{
			list2[i + right_num] = list[i];
		}
		if ((i + right_num) >= n)
		{
			list2[i + right_num-n] = list[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (i==(n-1))
		{
			cout << list2[i];
		}else
		cout << list2[i]<<" ";

	}

	delete [] list;
	delete [] list2;
	system("pause");
	return 0;
}

