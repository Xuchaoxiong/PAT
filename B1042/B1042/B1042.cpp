// B1042.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

int main()
{
	char word;
	int list[52] = { 0 };
	while (true)
	{
		word = getchar();
		if (word=='\n')
			break;

		if (word >= 'a'&&word <= 'z')
			list[int(word - 'a')]++;

		if (word >= 'A'&&word <= 'Z')
			list[int(word - 'A')]++;
	}
	int max = 0, max_n;
	for (int i = 0; i < 52; i++)
	{
		if (list[i]>max)
		{
			max = list[i];
			max_n = i;
		}
	}

		word = 'a' + max_n;


	printf("%c %d", word, max);

	system("pause");
	


	return 0;
}

