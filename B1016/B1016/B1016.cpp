// B1016.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;


int main()
{
	string A, B;
	char Pa, Pb;
	vector <char> list1, list2;
	cin >> A >> Pa >> B >> Pb;
	for (int i = 0; i < A.size(); i++)
	{
		if (A[i]==Pa)
			list1.push_back(Pa);
	}
	for (int i = 0; i < B.size(); i++)
	{
		if (B[i] == Pb)
			list2.push_back(Pb);
	}
	int a = 0, b = 0;
	for (int i = 0; i < list1.size(); i++)
		a = a * 10 + (list1[i] - '0');
	for (int i = 0; i < list2.size(); i++)
		b = b * 10 + (list2[i] - '0');
	cout << (a + b) << endl;
	system("pause");
	return 0;
}

