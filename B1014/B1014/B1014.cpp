// B1014.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
void display(int week, int hour, int minute);
int main()
{
	int len1, len2, flag = 0;
	int week, hour, minute;
	string sentences[4];
	cin >> sentences[0] >> sentences[1] >> sentences[2] >> sentences[3];
	sentences[0].size() > sentences[1].size() ? len1 = sentences[1].size() : len1 = sentences[0].size();
	sentences[2].size() > sentences[3].size() ? len1 = sentences[3].size() : len2 = sentences[2].size();

	for (int i = 0; i < len1; i++)
	{
		if ((sentences[0][i] == sentences[1][i]) && (sentences[0][i] >= 'A') && (sentences[0][i]<='G' )&&(flag==0))
		{
			flag = 1;
			week = sentences[0][i] - 'A'+1;
			continue;
		}
		if ((sentences[0][i] == sentences[1][i]) && (sentences[0][i] >= 'A') && (sentences[0][i] <= 'N') && (flag == 1))
		{
			hour = sentences[0][i] - 'A' + 10;
			break;
		}
		if ((sentences[0][i] == sentences[1][i]) && (sentences[0][i] >= '0') && (sentences[0][i] <= '9') && (flag == 1))
		{
			hour = sentences[0][i] - '0';
			break;
		}

	}
	for (int i = 0; i < len2; i++)
	{
		if (sentences[2][i] == sentences[3][i])
		{
			if ((sentences[2][i] >= 'a') && (sentences[3][i] <= 'z') || (sentences[2][i] >= 'A') && (sentences[3][i] <= 'Z'))
			{
				minute = i;
				break;
			}

		}
	}
	display(week, hour, minute);
	system("pause");
	return 0;
}

void display(int week, int hour, int minute)
{
	switch (week)
	{
	case 1:  cout << "MON "; break;
	case 2:  cout << "TUE "; break;
	case 3:  cout << "WED "; break;
	case 4:  cout << "THU "; break;
	case 5:  cout << "FRI "; break;
	case 6:  cout << "SAT "; break;
	case 7:  cout << "SUN "; break;
		break;
	}
	if (hour<=9)
		cout << 0 << hour << ':';
	else
	    cout << hour << ':';
	if (minute<=9)
		cout << 0 << minute;
	else
		cout << minute;
	return;
}