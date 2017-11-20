// B1043.cpp : 定义控制台应用程序的入口点。
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

		if (word>='a'&&word<='z')
			list[int(word - 'a')]++;

		if (word >= 'A'&&word <= 'Z')
			list[int(word - 'A'+26)]++;
	}


	int P, A, T, e, s, t;
	P = int('P' - 'A') + 26;
	A = int('A' - 'A') + 26;
	T = int('T' - 'A') + 26;
	e = int('e' - 'a');
	s = int('s' - 'a');
	t = int('t' - 'a');

	while ((list[P] + list[A] + list[T] + list[e] + list[s] + list[t]) > 0)
	{
		if (list[P]>0)
		{
			printf("%c", 'P');
			list[P]--;
		}
		if (list[A]>0)
		{
			printf("%c", 'A');
			list[A]--;
		}
		if (list[T]>0)
		{
			printf("%c", 'T');
			list[T]--;
		}
		if (list[e]>0)
		{
			printf("%c", 'e');
			list[e]--;
		}
		if (list[s]>0)
		{
			printf("%c", 's');
			list[s]--;
		}
		if (list[t]>0)
		{
			printf("%c", 't');
			list[t]--;
		}

	}

	printf("\n");

	system("pause");


	return 0;
}

