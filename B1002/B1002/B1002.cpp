#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
void Split_Num(string Num, vector<int> &list);
void display(int num);
vector <int> Num_store;
vector <int> Num_store2;
int main()
{
	string Num;
	long temp=0;
	cin >> Num;
	Split_Num(Num, Num_store);
	int length = Num_store.size();
	for (int i = 0; i < length; i++)
		temp = temp + Num_store[i];
	Num = to_string(temp);
	Split_Num(Num, Num_store2);
	length = Num_store2.size();
	for (int i = 0; i < length; i++)
	{ 
		if (i!=(length-1))
		{
			display(Num_store2[i]);
			cout << " ";
		}
		else
		{
			display(Num_store2[i]);
		}

	}
	system("pause");
	return 0;
}

void Split_Num(string num, vector<int> &list)
{
	int m = num.size();
	for (int i = 0; i < m; i++)
	{
		list.push_back(int(num[i] - '0'));
	}
}

void display(int num)
{
	switch (num)
	{
	case 0:cout << "ling"; break;
	case 1:cout << "yi"; break;
	case 2:cout << "er"; break;
	case 3:cout << "san"; break;
	case 4:cout << "si"; break;
	case 5:cout << "wu"; break;
	case 6:cout << "liu"; break;
	case 7:cout << "qi"; break;
	case 8:cout << "ba"; break;
	case 9:cout << "jiu"; break;
	default:
		break;
	}
}