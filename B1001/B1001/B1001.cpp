// B1001.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num,i=0;
	cin >> num;
	while (num!=1)
	{
		if (num%2)
		{
			num = (num * 3 + 1) / 2;
			i++;
		}
		else
		{
			num = num / 2;
			i++;
		}
	}
	cout << i;
	system("pause");
	return 0;
}

