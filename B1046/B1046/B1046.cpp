// B1046.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int A_han, A_hua, B_han, B_hua,hanSum, A_win = 0, B_win = 0;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A_han >> A_hua >> B_han >> B_hua;
		hanSum = A_han + B_han;
		if (A_hua==B_hua)
			continue;

		if (A_hua==hanSum)
		{
			A_win++;
			continue;
		}
		if (B_hua == hanSum)
		{
			B_win++;
			continue;
		}
	}

	cout << B_win << ' ' << A_win << endl;

	system("pause");


	return 0;
}

