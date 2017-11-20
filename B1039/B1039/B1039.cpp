// B1039.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

using namespace std;

int main()
{
	int ku[62] = {0};
	char tmp;
	do
	{
		tmp = getchar();
		if (tmp=='\n')
			break;

		if (tmp >= '0'&&tmp <= '9')
			ku[int(tmp - '0')]++;
		if (tmp >= 'a'&&tmp <= 'z')
			ku[int(tmp - 'a')+10]++;
		if (tmp >= 'A'&&tmp <= 'Z')
			ku[int(tmp - 'A')+36]++;

	} while (true);

	int flag = 0;
	char word[62] = { 0 };
	do
	{
		tmp = getchar();
		if (tmp == '\n')
			break;

		if (tmp >= '0'&&tmp <= '9')
			word[int(tmp - '0')]++;
		if (tmp >= 'a'&&tmp <= 'z')
			word[int(tmp - 'a') + 10]++;
		if (tmp >= 'A'&&tmp <= 'Z')
			word[int(tmp - 'A') + 36]++;

	} while (true);
	int tmp2 = 0;
	for (int i = 0; i < 62; i++)
	{
		ku[i] = ku[i] - word[i];
		if (ku[i]<0)
			flag += ku[i];
		else
			tmp2 += ku[i];
	}

	if (flag==0)
		printf("Yes %d\n", tmp2);
	else
		printf("No %d\n", -flag);

	system("pause");

	return 0;
}

