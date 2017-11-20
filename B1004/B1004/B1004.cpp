// B1004.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

struct StudentStruct
{
	string name;
	string stu_id;
	int score;
};


int main()
{
	int n;
	cin >> n;
	StudentStruct *student = new StudentStruct[n];
	StudentStruct tmp;
	for (int i = 0; i < n; i++)
	{
		cin >> student[i].name >> student[i].stu_id >> student[i].score;
	}
	for (int i = 0; i< n - 1; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			if (student[j].score > student[j+1].score)
			{
				tmp = student[j]; student[j] = student[j + 1];  student[j + 1] = tmp;
			}
		}
	}
	cout << student[n - 1].name << " " << student[n - 1].stu_id<<endl;
	cout << student[0].name << " " << student[0].stu_id<<endl;
	delete[] student;
	system("pause");

	return 0;
}

