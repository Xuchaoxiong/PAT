// B1013.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>  
#include <math.h>  
#include <ctime>
using namespace std;
int isprime(int n)
{
	int i;
	for (i = 2; i <= (int)sqrt((double)n); i++)
		if (n%i == 0)
			return 0;
	return 1;
}

int main()
{
	int i = 2, j = 0, n, m, k = 0;
	cin >> n >> m;
		clock_t start, finish;
		double duration;
		start = clock();
	while (true)
	{
		if (isprime(i))
		{
			j++;
			if (j >= n&&j<m)
			{
				k++;
				if (k % 10 == 0)
					cout << i << endl;
				else
					cout << i << ' ';
			}
			if (j == m)
			{
				cout << i << endl;
				break;
			}
		}
		i++;
	}
		finish = clock();
		duration = (double)(finish - start) / CLOCKS_PER_SEC;
		cout << duration << endl;
	system("pause");
	return 0;
}