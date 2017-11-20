// B1003.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
bool IsOnlyPAT(string list2);
bool IsCorrect(string list);
int main()
{
	int n;
	cin >> n;
	string *strmass = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> strmass[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (IsCorrect(strmass[i]))
		{ 
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	delete [] strmass;
//	system("pause");
	return 0;
}

bool IsCorrect(string list)
{
	int length = list.size();
	int count1 = list.find("P");
	int count2 = list.find("A");
	int count3 = list.find("T");
	if (IsOnlyPAT(list)==0)
	{
		return 0;
	}
	if (((count1 * (count3 - count1 - 1)) == (length - count3 - 1)))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

bool IsOnlyPAT(string list2)
{
	int length2 = list2.size();
	int p = 0, a = 0, t = 0;
	for (int i = 0; i < length2; i++)
	{
		if (list2[i]=='P')
		{
			p++;
		}
		else if (list2[i] == 'A')
		{
			a++;
		}
		else if (list2[i] == 'T')
		{
			t++;
		}
		else if (list2[i] == NULL)
		{
		}
		else
		{
			return 0;
		}
	}
	if ((p==1)&&(a>=1)&&(t==1))
	{
		return 1;
	}
	else
	{
		return 0;
	}

}