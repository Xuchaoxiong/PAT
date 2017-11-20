// B1006.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;


int main()
{
	string Num;
	cin >> Num;
	int tmpB, tmpS, tmpG, i;
	if (Num.size() == 3)
	{
		tmpB = Num[0] - '0';
		tmpS = Num[1] - '0';
		tmpG = Num[2] - '0';
		for (i = 0; i < tmpB; i++)
			cout << 'B';
		for (i = 0; i < tmpS; i++)
			cout << 'S';
		for (i = 1; i <= tmpG; i++)
			cout << i;
		cout << '\n';
	}
	if (Num.size() == 2)
	{
		tmpS = Num[0] - '0';
		tmpG = Num[1] - '0';
		for (i = 0; i < tmpS; i++)
			cout << 'S';
		for (i = 1; i <= tmpG; i++)
			cout << i;
		cout << '\n';
	}
	if (Num.size() == 1)
	{
		tmpG = Num[0] - '0';
		for (i = 1; i <= tmpG; i++)
			cout << i;
		cout << '\n';
	}
	system("pause");
	return 0;
}

