// B1044.cpp : �������̨Ӧ�ó������ڵ㡣
//

/*
�����﷨�Ĵ���ֻ��Ϊ�˼���C ���еĴ��롣���� char* str = "hello";
ʹ��C++���������о�����ʾ��warning: deprecated conversion from string constant to 'char*' [-Wwrite-strings]
|�Ƽ��������޸�Ϊconst char *Ҳ����˵�������﷨�Ĵ��ڣ�ֻ��Ϊ�˱�֤��ǰ��C��������������롣
���ڱ��Ϊdeprecated���﷨����Ϊһ��C++����Գ���벻Ҫ��ʹ���ˡ���Ϊ���������ܻᵼ��һ�� �������澡ʧ���ڴ�Ƿ�д������

���ߣ�Fun Macro
���ӣ�https://www.zhihu.com/question/20362192/answer/46933038
��Դ��֪��
����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������


*/




#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


const string Num1[13] = { "tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec" };
const string Num2[13] = { "", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };
void Num2Alien(string word);
void Alien2Num(string word);
int main()
{
	int N;
	cin >> N;
	//vector<string> list;
	string tmp;
	string *list = new string[N];
	getchar();          //ʹ��getlineʱ���Ὣ��һ��cin>>N��ʱ��س���¼���ڣ��Ӷ���һ��ѭ��������getchar()��׽�Ǹ��س�
	for (int i = 0; i < N; i++)
	{
		getline(cin, tmp);
		list[i] = tmp;

	}
		
	for (int i = 0; i < N; i++)
	{
		if ('0'<=list[i][0]&&list[i][0]<='9')
		{
			Num2Alien(list[i]);
		}
		else
		{
			Alien2Num(list[i]);
		}

	}

	system("pause");




	return 0;
}

void Num2Alien(string word)
{
	int num = 0;
	for (int i = 0; i < word.size(); i++)
		num = num * 10 + int(word[i] - '0');
	if (num>12)
	{
		int num1, num2;
		num2 = num / 13;
		num1 = num % 13;
		cout << Num2[num2] << ' ' << Num1[num1] << endl;
		return;
	}
	else
	{
		cout << Num1[num] << endl;
		return;
	}

}


void Alien2Num(string word)
{
	string word1, word2;
	int num1 = 100, num2, n;
	n = word.size();
	if (n==7)
	{
		word2 = word.substr(0, 3);
		word1 = word.substr(4, 7);

		for (int i = 0; i < 13; i++)
		{
			if (word1==Num1[i])
			{
				num1 = i;
				break;
			}

		}
		for (int i = 0; i < 13; i++)
		{
			if (word2 == Num2[i])
			{
				num2 = i;
				break;
			}

		}

		num1 = num1 + num2 * 13;
		printf("%d\n", num1);
		return;

	}
		if (n==4)
		{
			printf("%d\n", 0);
			return;
		}

		if (n==3)
		{
			word1 = word.substr(0, 3);
			for (int i = 0; i < 13; i++)
			{
				if (word1 == Num1[i])
				{
					num1 = i;
					break;
				}
			}
			if (num1 == 100)
			{
				for (int i = 0; i < 13; i++)
				{
					if (word1 == Num2[i])
					{
						num1 = i * 13;
						break;
					}
				}


			}

			printf("%d\n", num1);
			return;

		}


		if (n == 8)
		{
			word1 = word.substr(0, 3);
			for (int i = 0; i < 13; i++)
			{
				if (word1 == Num1[i])
				{
					num1 = i;
					break;
				}
			}
			if (num1 == 100)
			{
				for (int i = 0; i < 13; i++)
				{
					if (word1 == Num2[i])
					{
						num1 = i * 13;
						break;
					}
				}


			}

			printf("%d\n", num1);
			return;

		}


}