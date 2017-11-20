// B1044.cpp : 定义控制台应用程序的入口点。
//

/*
这种语法的存在只是为了兼容C 旧有的代码。对于 char* str = "hello";
使用C++编译器会有警告提示：warning: deprecated conversion from string constant to 'char*' [-Wwrite-strings]
|推荐把类型修改为const char *也就是说，这种语法的存在，只是为了保证以前的C代码可以正常编译。
对于标记为deprecated的语法，做为一个C++程序猿，请不要再使用了。因为这样做可能会导致一个 让你颜面尽失的内存非法写操作。

作者：Fun Macro
链接：https://www.zhihu.com/question/20362192/answer/46933038
来源：知乎
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。


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
	getchar();          //使用getline时他会将第一次cin>>N的时候回车记录在内，从而少一次循环所以用getchar()捕捉那个回车
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