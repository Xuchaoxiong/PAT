// B1027.cpp : �������̨Ӧ�ó������ڵ㡣
//

// �������Ǵ�ӡ���ַ�֮��ֱ�ӻس�����Ҫ�ٴ�ո���


#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int Num, flag;
	char alph;
	cin >> Num >> alph;
	int num = Num;
	int tmp = 1;
	num = num - 1;
	while (num >= ((tmp + 2) * 2))
	{
		tmp = tmp + 2;
		num = num - tmp * 2;
	}
		flag = tmp;

	for (int i = flag; i >=1; i=i-2)
	{
		for (int j = 0; j < (flag-i)/2; j++)
			cout << ' ';
		for (int j = 0; j < i; j++)
			cout << alph;
		/*
		for (int j = 0; j < (flag - i) / 2; j++)
			cout << ' ';
			*/
		cout << endl;
	}
	for (int i = 3; i <= flag; i=i+2)
	{
		for (int j = 0; j < (flag-i)/2; j++)
			cout << ' ';
		for (int j = 0; j < i; j++)
			cout << alph;
		/*
		for (int j = 0; j < (flag - i) / 2; j++)
			cout << ' ';
			*/
		cout << endl;
	}
	if (num==-1)
		cout << 0 << endl;
	else
	    cout << num << endl;

	system("pause");

	return 0;
}

