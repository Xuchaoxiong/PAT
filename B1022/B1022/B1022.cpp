// B1022.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<long> ten2D_num;
	long long A, B, tmp, D;
	cin >> A >> B >> D;
	tmp = A + B;
	while (tmp)
	{
		ten2D_num.push_back(tmp%D);
		tmp = tmp / D;
	}
	int i = ten2D_num.size()-1;
	if (i==-1)
	{
		cout << 0;
	}
	else
	{
		while (i >= 0)
		{
			cout << ten2D_num[i];
			i--;
		}
	}


	system("pause");

	return 0;
}
