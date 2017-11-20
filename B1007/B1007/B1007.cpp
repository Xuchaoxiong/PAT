// B1007.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
#include <vector>
using namespace std;
bool IsPrime(int Num);
vector <int> Prime;
int main()
{
	int NumEnd;
	cin >> NumEnd;
	Prime.push_back(2);
	if (NumEnd<=3)
	{
		cout << 0 << endl;
		return 0;
	}
	int num = 3;
	while (num <= NumEnd)
	{
		if (IsPrime(num))
		{
			Prime.push_back(num);
		}
		num++;
	}
	int length = Prime.size();
	int flag = 0;
	for (int i = 0; i < length-1; i++)
	{
		if ((Prime[i+1]-Prime[i])==2)
			flag++;
	}
	cout << flag << endl;
	system("pause");
	return 0;
}



bool IsPrime(int Num)
{
	int i = 0, sqrtNum;
	sqrtNum = int(sqrt(Num)) + 1;
	for (int i=2; i < sqrtNum; i++)
	{
		if ((Num%i)==0)
		{
			return 0;
		}
	}
	return 1;
}