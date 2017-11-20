// B1029.cpp : 定义控制台应用程序的入口点。
//


#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
bool IsExist(const vector<char> &list, char word);
int main()
{
	vector<char> wrongWord;
	string str1, str2;
	cin >> str1 >> str2;
	int flag = 0;
	char tmp;
	for (int i = 0; i < str1.size(); i++)
	{
		if (str1[i]!=str2[flag])
		{
			tmp = str1[i];
			if ((tmp >= 'a') && (tmp <= 'z'))
				tmp = tmp - 32;

			if (IsExist(wrongWord,tmp))
			{
				continue;
			}
			else
			{
				wrongWord.push_back(tmp);
				continue;
			}
		}

		flag++;

	}




	for (int i = 0; i < wrongWord.size(); i++)
		cout << wrongWord[i];



	system("pause");
	return 0;
}

bool IsExist(const vector<char> &list, char word)
{
	for (int i = 0; i < list.size(); i++)
	{
		if (list[i]==word)
			return 1;
	}

	return 0;

}