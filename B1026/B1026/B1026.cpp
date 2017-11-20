// B1026.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>


using namespace std;

int main()
{
	long long clock1, clock2;
	cin >> clock1 >> clock2;
	long long  HowLong;
	int hour, minute, second;
	HowLong = double(clock2 - clock1) / 100 + 0.5;
	second = HowLong % 60;
	HowLong = HowLong / 60;
	minute = HowLong % 60;
	HowLong = HowLong / 60;
	hour = HowLong;
	printf("%02d:%02d:%02d\n", hour,minute,second);
	system("pause");
	return 0;
}

