// B1019.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>

using namespace std;

bool compare1(int a, int b);
bool compare2(int a, int b);
void x_split(int *Num, int num);

int main()
{
	int Num1[4] = { 0 }, Num2[4] = { 0 }, num1, num2, tmp, TMP[4] = { 0 };
	cin >> tmp;
	x_split(Num1, tmp);
	x_split(Num2, tmp);
	sort(Num1, Num1 + 4, compare1);
	sort(Num2, Num2 + 4, compare2);
	num1 = Num1[0] * 1000 + Num1[1] * 100 + Num1[2] * 10 + Num1[3];
	num2 = Num2[0] * 1000 + Num2[1] * 100 + Num2[2] * 10 + Num2[3];
	while (((num1 - num2 )!= 6174) && ((num1 - num2 )!= 0))
	{
		tmp = num1 - num2;
		x_split(TMP, tmp);
		cout << Num1[0] << Num1[1] << Num1[2] << Num1[3] << " - " << Num2[0] << Num2[1] << Num2[2] << Num2[3] << " = " << TMP[0] << TMP[1] << TMP[2] << TMP[3] << endl;
		x_split(Num1, tmp);
		x_split(Num2, tmp);
		sort(Num1, Num1 + 4, compare1);
		sort(Num2, Num2 + 4, compare2);
		num1 = Num1[0] * 1000 + Num1[1] * 100 + Num1[2] * 10 + Num1[3];
		num2 = Num2[0] * 1000 + Num2[1] * 100 + Num2[2] * 10 + Num2[3];
	}
	tmp = num1 - num2;
	x_split(TMP, tmp);
	cout << Num1[0] << Num1[1] << Num1[2] << Num1[3] << " - " << Num2[0] << Num2[1] << Num2[2] << Num2[3] << " = " << TMP[0] << TMP[1] << TMP[2] << TMP[3] << endl;
	system("pause");
	return 0;
}

bool compare1(int a, int b)
{
	return (a > b);
}


bool compare2(int a, int b)
{
	return (a < b);
}

void x_split(int *Num, int num)
{
	*Num = num / 1000;
	num = num - *Num * 1000;
	Num++;
	*Num = num / 100;
	num = num - *Num * 100;
	Num++;
	*Num = num / 10;
	num = num - *Num * 10;
	Num++;
	*Num = num;
	return;
}