// B1017.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

vector<int> Q;

int main()
{
	string Num;
	int B, R = 0, tmp = 0;
	cin >> Num >> B;
	for (int i = 0; i < Num.size(); i++)
	{
		tmp = tmp * 10 + int(Num[i] - '0');
		R = tmp%B;
		if (Q.size()==0&&(tmp/B)==0)
		{
		}
		else
			Q.push_back(tmp / B);
		tmp = R;
	}
	if (Q.size()==0)
	{
		cout << 0;
	}
	else
	{
		for (vector<int>::iterator itr = Q.begin(); itr != Q.end(); itr++)
			cout << *itr;
	}

	cout << ' '<<R<<endl;
	system("pause");
	return 0;
}

