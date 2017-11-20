// B1028.cpp : �������̨Ӧ�ó������ڵ㡣
//

// PAT1028�⣬�˿��ղ�
//�˴�����scanf_s��strcpy_s,����PAT����ֻ����scanf��strcpy,�ύʱ��Ҫע�� 
//scanf_s("%s %s", NAME, 6, DayMass, 12);Ҫ�ĳ�scanf("%s %s", NAME,DayMass); 
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

bool compare(LustrumStruct person1, LustrumStruct person2);        //��仰���ܹ����ڽṹ��֮ǰ,�����Ļ�LustrumStruct���þͻ���Ч

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