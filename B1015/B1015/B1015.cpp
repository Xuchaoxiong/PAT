// B1015.cpp : 定义控制台应用程序的入口点。
//

//visual studio里面用scanf_s但是在PAT里面必须用scanf

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct StuStruct
{
	int id;
	int virtue;
	int talent;
	int sum;
};

vector <StuStruct> NO1Stu;
vector <StuStruct> NO2Stu;
vector <StuStruct> NO3Stu;
vector <StuStruct> NO4Stu;
bool comparer(StuStruct &stu_a, StuStruct &stu_b);
int main()
{
	int n, Lsco, Hsco;
	cin >> n >> Lsco >> Hsco;
	StuStruct Stu;
	vector < StuStruct > ::iterator itr;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d %d", &Stu.id, &Stu.virtue, &Stu.talent);
		Stu.sum = Stu.talent + Stu.virtue;
		if (Stu.virtue>=Hsco&&Stu.talent>=Hsco)
		{
			NO1Stu.push_back(Stu);
			continue;
		}	
		if (Stu.virtue >= Hsco&&Stu.talent >= Lsco)
		{
			NO2Stu.push_back(Stu);
			continue;
		}	
		if (Stu.virtue >= Lsco&&Stu.talent >= Lsco && (Stu.virtue >= Stu.talent))
		{
			NO3Stu.push_back(Stu);
			continue;
		}
		 if (Stu.virtue>=Lsco&&Stu.talent>=Lsco)
			NO4Stu.push_back(Stu); 
	}
	sort(NO1Stu.begin(), NO1Stu.end(), comparer);
	sort(NO2Stu.begin(), NO2Stu.end(), comparer);
	sort(NO3Stu.begin(), NO3Stu.end(), comparer);
	sort(NO4Stu.begin(), NO4Stu.end(), comparer);
	n = NO1Stu.size() + NO2Stu.size() + NO3Stu.size() + NO4Stu.size();
	cout << n << endl;
	for (itr=NO1Stu.begin(); itr!=NO1Stu.end(); itr++)
	    printf("%d %d %d\n", itr->id, itr->virtue, itr->talent);
	for (itr = NO2Stu.begin(); itr != NO2Stu.end(); itr++)
		printf("%d %d %d\n", itr->id, itr->virtue, itr->talent);
	for (itr = NO3Stu.begin(); itr != NO3Stu.end(); itr++)
		printf("%d %d %d\n", itr->id, itr->virtue, itr->talent);
	for (itr = NO4Stu.begin(); itr != NO4Stu.end(); itr++)
		printf("%d %d %d\n", itr->id, itr->virtue, itr->talent);

	system("pause");
	return 0;
}

bool comparer(StuStruct &stu_a, StuStruct &stu_b)
{
	if (stu_a.sum != stu_b.sum)
	{
		return (stu_a.sum > stu_b.sum);
	}
	else
	{
		if (stu_a.virtue != stu_b.virtue)
			return (stu_a.virtue > stu_b.virtue);
		else
			return (stu_a.id < stu_b.id);
	}
}
