// B1036.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int len1, len2, flag = 0;
	char word;
	cin >> len1 >> word;
	len2 = int(float(len1) / 2 + 0.5);
	for (int i = 0; i < len1; i++)
		cout << word;
	cout << endl;

	for (int i = 1; i < len2-1; i++)
	{
			cout << word;
			for (int k = 1; k < len1-1; k++)
				cout << ' ';
			cout << word<<endl;

	}

	for (int i = 0; i < len1; i++)
		cout << word;
	cout << endl;

	system("pause");


	return 0;
}

