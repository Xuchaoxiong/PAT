// B1011.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

struct NumStruct
{
	long A;
	long B;
	long C;
};

int main()
{
	int n;
	cin >> n;
	NumStruct *NumMass = new NumStruct [n];
	for (int i = 0; i < n; i++)
	{
		cin >> NumMass[i].A;
		cin >> NumMass[i].B;
		cin >> NumMass[i].C;
	}
	for (int i = 0; i < n; i++)
	{
		if ((NumMass[i].A + NumMass[i].B)>NumMass[i].C)
			cout << "Case #" << (i + 1) << ": " << "true" << endl;
		else
			cout << "Case #" << (i + 1) << ": " << "false" << endl;
	}
	system("pause");
}

