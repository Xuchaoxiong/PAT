// B1032.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include<algorithm>

using namespace std;

struct MyStruct
{
	int id;
	int sum=0;
}Sch[100000];
bool compare(MyStruct a, MyStruct b);
int main()
{
	int n, flag, tmp, max = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> flag >> tmp;
		Sch[flag].sum = Sch[flag].sum + tmp;
		Sch[flag].id = flag;
		if (max<flag)
			max = flag;
	}


	sort(Sch + 1, Sch + max, compare);
	cout << Sch[1].id << ' ' << Sch[1].sum << endl;
	system("pause");


	return 0;
}

bool compare(MyStruct a, MyStruct b)
{
	return a.sum > b.sum;
}