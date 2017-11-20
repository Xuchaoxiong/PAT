// B1012.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int DataProcess1(int *list1, int len);
int DataProcess2(int *list2, int len);
int DataProcess3(int *list3, int len);
float DataProcess4(int *list4, int len);
int DataProcess5(int *list5, int len);
int flag=0;
int main()
{
	int n,A1,A2,A3,A5;
	float A4;
	cin >> n;
	int *list = new int[n];
	for (int i = 0; i < n; i++)
		cin >> list[i];
	A1 = DataProcess1(list, n);
	A2 = DataProcess2(list, n);
	A3 = DataProcess3(list, n);
	A4 = DataProcess4(list, n);
	A5 = DataProcess5(list, n);
	if (A1==NULL)
		cout << "N ";
	else
		cout << A1 << ' ';
	if (flag == 1)
	{
		cout << "N ";
		flag = 0;
	}
		else
		cout << A2 << ' ';
	if (A3 == NULL)
		cout << "N ";
	else
		cout << A3 << ' ';
	if (A4 == NULL)
		cout << "N ";
	else
	{
//		cout.unsetf(ios::fixed);
		cout << setiosflags(ios::fixed) << setprecision(1) << A4 << ' ';
	}
	if (A5 == NULL)
		cout << 'N'<<endl;
	else
		cout << A5<<endl;
	delete[] list;
	system("pause");
	return 0;
}

int DataProcess1(int *list1, int len)
{
	int sum=0,j=0;
	for (int i = 0; i < len; i++)
	{
		if ((list1[i] % 10) == 0)
		{
			sum = sum + list1[i];
			j++;
		}
	}
	if (j==0)
		return NULL;
	else
	    return sum;
}
int DataProcess2(int *list2, int len)
{
	int result = 0, j = 1;
	for (int i = 0; i < len; i++)
	{
		if ((list2[i] % 5) == 1)
		{
			if ((j%2)==1)
				result = result + list2[i];
			else
				result = result - list2[i];
			j++;
		}
	}
	if (j == 1)
	{
		flag=1;
		return NULL;
	}
	
	else
	    return result;
}
int DataProcess3(int *list3, int len)
{
	int num = 0;
	for (int i = 0; i < len; i++)
	{
		if ((list3[i]%5)==2)
			num++;
	}
	if (num == 0)
		return NULL;
	else
		return num;
}

float DataProcess4(int *list4, int len)
{
	float result = 0, j = 0;
	for (int i = 0; i < len; i++)
	{
		if ((list4[i] % 5) == 3)
		{
			result = result + list4[i];
			j++;
		}
	}
	if (j == 0)
		return NULL;
	else
		return (result / j);
}
int DataProcess5(int *list5, int len)
{
	int result = 0,j=0;
	for (int i = 0; i < len; i++)
	{
		if ((list5[i] % 5) == 4)
		{
			if (list5[i]>result)
			{
				result = list5[i];
				j++;
			}
		}
		
	}
	if (j==0)
		return NULL;
	else
	{
		return result;
	}
}