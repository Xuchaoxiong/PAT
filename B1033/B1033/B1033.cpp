// B1033.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

bool Ismissing(string mWord, char word);
int main()
{
	string missing_word, total_word;
	//cin >> missing_word >> total_word;
	getline(cin, missing_word);  //防止第一行为空,不然的话第三个测试点不能够通过
	getline(cin, total_word);
	int flag = 0;
	for (int i = 0; i < missing_word.size(); i++)
	{
		if (missing_word[i]=='+')
		{
			flag = 1;
		}
	}

	for (int i = 0; i < total_word.size(); i++)
	{
		if (Ismissing(missing_word,total_word[i]))
			continue;
		if (flag)
		{
			if (total_word[i] >= 'A'&&total_word[i] <= 'Z')
				continue;
		}

		cout << total_word[i];

	}

	cout << endl;
	system("pause");



	return 0;
}

bool Ismissing(string mWord, char word)
{
	for (int i = 0; i < mWord.size(); i++)
	{
		if (mWord[i] >= 'a'&&mWord[i] <= 'z')
		{
			if (word == mWord[i] || word == mWord[i]-32)
			{
				return 1;
			}

		}

		if (mWord[i] >= 'A'&&mWord[i] <= 'Z')
		{
			if (word == mWord[i] || word == mWord[i] + 32)
			{
				return 1;
			}

		}
		else
		{
			if (word == mWord[i])
			{
				return 1;
			}
		}


	}


	return 0;


}