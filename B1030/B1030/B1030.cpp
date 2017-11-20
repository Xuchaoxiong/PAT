// B1030.cpp : 定义控制台应用程序的入口点。
//


//这道题我开始的思路是，先将数列读入数组之中，然后排序，然后从第一个元素作为最小元素，
//算组成完美数列的长度，然后再从第二个算作为最小元素，再算长度。。。但是这样的话时间
//复杂度很高，可以算完第一个元素得到max长度，然后第二元素与max+1个长度开始进行比较，
//这样就能够减少不小的计算开支


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

