// B1018.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
struct MyStruct
{
	char A;
	char B;
};

int AwinGes[3] = { 0 };                      //A获胜的手势的次数分别为B，C，J
int BwinGes[3] = { 0 };                      //B获胜的手势的次数分别为B，C，J
int Awin = 0, Adraw = 0, Alose = 0;              //存储A的获胜平局失败的次数
void Iswin(const char &gesture1, const char &gesture2);
char Choose(int i);
int main()
{
	int n;
	cin >> n;
	MyStruct *Game = new MyStruct[n];   //存储手势
	for (int i = 0; i < n; i++)
	{
		cin >> Game[i].A >> Game[i].B;
		Iswin(Game[i].A, Game[i].B);
	}
	cout << Awin << ' ' << Adraw << ' ' << Alose << endl;
	cout << Alose << ' ' << Adraw << ' ' << Awin << endl;

	int Amax = 0, Bmax = 0;

	for (int i = 0; i < 3; i++)
	{
		if (AwinGes[i]>=Amax)
			Amax = AwinGes[i];
		if (BwinGes[i] >= Bmax)
			Bmax = BwinGes[i];
	}

	for (int i = 0; i < 3; i++)
	{
		if (AwinGes[i] == Amax)
		{
			cout << Choose(i);
			break;
		}
		
	}
	cout << ' ';
	for (int i = 0; i < 3; i++)
	{
		if (BwinGes[i] == Bmax)
		{
			cout << Choose(i);
			break;
		}

	}
	system("pause");
	return 0;
}

void Iswin(const char &gesture1,const char &gesture2)
{
	if (gesture1=='C')
	{
		if (gesture2 == 'J')
		{
			Awin++;
			AwinGes[1]++;
			return ;

		}
		
		if (gesture2 == 'B')
		{
			Alose++;
			BwinGes[0]++;
			return ;
		}
			
		if (gesture2 == 'C')
		{
			Adraw++;
			return ;
		}
			
	}
	if (gesture1 == 'J')
	{
		if (gesture2 == 'B')
		{
			Awin++;
			AwinGes[2]++;
			return ;
		}
			
		if (gesture2 == 'C')
		{
			Alose++;
			BwinGes[1]++;
			return ;
		}
			
		if (gesture2 == 'J')
		{
			Adraw++;
			return ;
		}
			
	}
	if (gesture1 == 'B')
	{
		if (gesture2 == 'C')
		{
			Awin++;
			AwinGes[0]++;
			return ;
		}
			
		if (gesture2 == 'J')
		{
			Alose++;
			BwinGes[2]++;
			return ;
		}
			
		if (gesture2 == 'B')
		{
			Adraw++;
			return ;
		}
			
	}
}

char Choose(int i)
{
	if (i==0)
		return 'B';
	if (i==1)
		return 'C';
	if (i==2)
		return 'J';

}