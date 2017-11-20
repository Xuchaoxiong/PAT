// B1009.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;


int main()
{
	vector<string> words;
	string tmp;
	char c;
	while ((cin >> tmp).get(c))
	{
		words.push_back(tmp);
		if (c=='\n')
			break;
	}
	cin.clear();
	cin.ignore();
	for (int i = words.size()-1; i >= 0; i--)
	{
		if (i)
		{
			cout << words[i] << ' ';
		}else
		cout << words[i] << endl;
	}
	system("pause");
	return 0;
}

