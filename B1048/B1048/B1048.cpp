// B1048.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string A, B;
	cin >> A >> B;
	char list[13] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K' };
	int tmp, Alen = A.length(), Blen = B.length();
	if (Alen>Blen)
	{
		tmp = Alen - Blen;
		while (tmp--)
			B = "0" + B;
	}
	if (Blen>Alen)
	{
		tmp = Blen - Alen;
		while (tmp--)
			A = "0" + A;
	}
	int len = Alen > Blen ? Alen : Blen;

	for (int i = 1; i <= len; i++)
	{
		if (i%2)
			B[len - i] = list[int(B[len - i] + A[len - i]-'0'-'0') % 13];
		else
		{
			tmp = int(B[len - i] - A[len - i]);
			if (tmp<0)
			{
				tmp += 10;
				B[len - i] = tmp + '0';
			}
			else
				B[len - i] = tmp + '0';
		}
	}


	//cout << A << endl;
	cout << B << endl;
	system("pause");


	return 0;
}

