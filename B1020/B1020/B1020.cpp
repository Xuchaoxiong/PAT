// B1020.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>

using namespace std;
struct MyStruct
{
	float stock;           //存量
	float Totalprice;      //总价
	float Unitprice;       //单价
};
bool compare(MyStruct a, MyStruct b);
int main()
{
	int n;
	float max_s;
	float max_p = 0;
	cin >> n >> max_s;
	MyStruct *Cookie = new MyStruct[n];
	for (int i = 0; i < n; i++)
		cin >> Cookie[i].stock;

	for (int i = 0; i < n; i++)
	{
		cin >> Cookie[i].Totalprice;
		Cookie[i].Unitprice = Cookie[i].Totalprice / Cookie[i].stock;
	}
	sort(Cookie, Cookie + n, compare);
	int j = 0;
	while ((max_s>=Cookie[j].stock)&&(j<n))
	{
		max_s = max_s - Cookie[j].stock;
		max_p = max_p + Cookie[j].Totalprice;
		j++;
	}
	if (j==n)
	{
		printf("%.2f", max_p);
	}
	else
	{
		max_p = max_p + Cookie[j].Unitprice*max_s;
		printf("%.2f", max_p);           //这里本身就会四舍五入
	}

	system("pause");
	return 0;
}

bool compare(MyStruct a, MyStruct b)
{
	return (a.Unitprice > b.Unitprice);
}
