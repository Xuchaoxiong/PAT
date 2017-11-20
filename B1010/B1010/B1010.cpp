// B1010.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> polynomial;
	vector<int> polynomial2;
	int tmp,i=0;
	char c;
	while (((cin>>tmp).get(c)))
	{
		polynomial.push_back(tmp);
		if (c=='\n')
			break;
	}
	int length = polynomial.size();
	for (i = 0; i < length; i+=2)
	{
		polynomial[i] = polynomial[i] * polynomial[i + 1];
		polynomial[i + 1] = polynomial[i + 1] - 1;
		if (polynomial[i + 1] != -1)
		{
			polynomial2.push_back(polynomial[i]);
			polynomial2.push_back(polynomial[i+1]);
		}
	}
	length = polynomial2.size();
	for (i = 0; i < length; i++)
	{
		if (i == length - 1)
			cout << polynomial2[i];
		else
			cout << polynomial2[i] << ' ';
	}
	if (length==0)
	{
		cout << 0 << ' ' << 0;
	}
	system("pause");
}
