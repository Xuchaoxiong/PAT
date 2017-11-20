// B1020.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>

using namespace std;
struct MyStruct
{
	float stock;           //����
	float Totalprice;      //�ܼ�
	float Unitprice;       //����
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
		printf("%.2f", max_p);           //���ﱾ��ͻ���������
	}

	system("pause");
	return 0;
}

bool compare(MyStruct a, MyStruct b)
{
	return (a.Unitprice > b.Unitprice);
}
