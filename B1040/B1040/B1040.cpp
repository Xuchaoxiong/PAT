// B1040.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;


int main()
{
	string word;
	cin >> word;
	int len = word.size();
	long long T = 0, AT = 0, PAT = 0;
	while (len>0)
	{
		len--;
		if (word[len]=='T')
			T++;
		if (word[len] == 'A')
			AT += T;
		if (word[len] == 'P')
			PAT += AT;
	}
	PAT = PAT % 1000000007;
	printf("%d\n", PAT);

	system("pause");


	return 0;
}

