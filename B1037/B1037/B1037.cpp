// B1037.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int g1, s1, k1, g2, s2, k2, sum1, sum2;
	scanf_s("%d.%d.%d %d.%d.%d", &g1, &s1, &k1, &g2, &s2, &k2);
	sum1 = (g1 * 17 + s1) * 29 + k1;
	sum2 = (g2 * 17 + s2) * 29 + k2;
	sum1 = sum2 - sum1;
	if (sum1>=0)
	{
		k1 = sum1 % 29;
		sum1 = sum1 / 29;
		s1 = sum1 % 17;
		g1 = sum1 / 17;
		printf_s("%d.%d.%d\n", g1, s1, k1);
	}
	else
	{
		sum1 = -sum1;
		k1 = sum1 % 29;
		sum1 = sum1 / 29;
		s1 = sum1 % 17;
		g1 = sum1 / 17;
		printf_s("-%d.%d.%d\n", g1, s1, k1);
	}
	system("pause");
	return 0;
}

