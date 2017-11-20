// B1041.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct MyStruct
{
	long long id;
	int pos;
};

int main()
{
	int N, n;
	long long tmp_id, tmp;
	cin >> N;
	n = N;
	MyStruct *Stu = new MyStruct[N];
	do
	{
		cin >> tmp_id >> tmp;
		cin >> Stu[tmp - 1].pos;
		Stu[tmp - 1].id = tmp_id;
		n--;


	} while (n>0);

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> N;
		cout << Stu[N - 1].id << ' ' << Stu[N - 1].pos << endl;
	}

	system("pause");







	return 0;
}

