// B1031.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
char lastword(string word);
int main()
{
	int n, isallpass = 1;
	cin >> n;
	string *list = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> list[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (list[i][17]!=lastword(list[i]))
		{
			cout << list[i] << endl;
			isallpass = 0;
		}

	}
	if (isallpass)
	{
		cout << "All passed" << endl;
	}

	system("pause");
	return 0;
}


char lastword(string word)
{
	int tmp = 0, weight [17]= { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	for (int i = 0; i < 17; i++)
		tmp = tmp + (word[i] - '0')*weight[i];

	tmp = tmp % 11;
	switch (tmp)
	{
	case 0:return '1'; 
	case 1:return '0';
	case 2:return 'X';
	case 3:return '9';
	case 4:return '8';
	case 5:return '7';
	case 6:return '6';
	case 7:return '5';
	case 8:return '4';
	case 9:return '3';
	case 10:return '2';

	}




}

