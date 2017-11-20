// B1021.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct MyStruct
{
	int num;
	int How_many = 0;
}Num[10];

int main()
{
	string list;
	cin >> list;
	for (int i = 0; i < 10; i++)
		Num[i].num = i;
	for (int i = 0; i < list.size(); i++)
	{
		switch (list[i])
		{
		case '0':Num[0].How_many++; break;
		case '1':Num[1].How_many++; break;
		case '2':Num[2].How_many++; break;
		case '3':Num[3].How_many++; break;
		case '4':Num[4].How_many++; break;
		case '5':Num[5].How_many++; break;
		case '6':Num[6].How_many++; break;
		case '7':Num[7].How_many++; break;
		case '8':Num[8].How_many++; break;
		case '9':Num[9].How_many++; break;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (Num[i].How_many!=0)
		{
			cout << Num[i].num << ':' << Num[i].How_many << endl;
		}
	}
	system("pause");
	return 0;
}
