// B1023.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int Num[10];
	for (int i = 0; i < 10; i++)
		cin >> Num[i];
	int min;
	for (int i = 1; i < 10; i++) {
		if (Num[i] != 0)
		{
			min = i;
			break;
		}
	}
	cout << min;
	Num[min]--;
	for (int i = 0; i < 10; i++) {
		for (; Num[i] > 0; Num[i]--) {
			cout << i;
		}
	}
	system("pause");
	return 0;
}
