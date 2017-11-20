// B1028.cpp : 定义控制台应用程序的入口点。
//

// PAT1028题，人口普查
//此处用了scanf_s和strcpy_s,但是PAT里面只能用scanf和strcpy,提交时需要注意 
//scanf_s("%s %s", NAME, 6, DayMass, 12);要改成scanf("%s %s", NAME,DayMass); 
//
// Author: Sunbear


#include "stdafx.h"
#include "stdio.h"
#include "string.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct LustrumStruct
{
	char name[10];
	int year;
	int month;
	int day;
};

bool compare(LustrumStruct person1, LustrumStruct person2);        //这句话不能够放在结构体之前,这样的话LustrumStruct引用就会无效

int main()
{
	int n;
	int YEAR, MONTH, DAY;
	long sum;
	char DayMass[12];
	char  NAME[6];
	LustrumStruct tmp;
	vector <LustrumStruct> People;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
//		cin >> NAME>>DayMass;
		scanf_s("%s %s", NAME, 6, DayMass, 12);
		YEAR = (DayMass[0] - '0') * 1000 + (DayMass[1] - '0') * 100 + (DayMass[2] - '0') * 10 + (DayMass[3] - '0');
		MONTH = (DayMass[5] - '0') * 10 + (DayMass[6] - '0');
		DAY = (DayMass[8] - '0') * 10 + (DayMass[9] - '0');
		sum = YEAR * 10000 + MONTH * 100 + DAY;
		if (sum>20140906||sum<18140906)
			continue;
		strcpy_s(tmp.name, NAME);
		tmp.year = YEAR;
		tmp.month = MONTH;
		tmp.day = DAY;
		People.push_back(tmp);
	}
	sort(People.begin(), People.end(),compare);
	n = People.size();
	if (n==0)
	{
		cout << n << ' ' << endl;
	}
	else
	{
		cout << n << ' ' << People[0].name << ' ' << People[n - 1].name << endl;
	}
	

	system("pause");
	
	return 0;
}

bool compare(LustrumStruct person1, LustrumStruct person2)
{
	if (person1.year!=person2.year)
		return (person1.year < person2.year);

	if (person1.month!=person2.month)
		return (person1.month < person2.month);

	if (person1.day != person2.day)
		return (person1.day < person2.day);
	else
		return 1;

}