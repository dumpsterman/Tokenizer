// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main()

{
	int ctr = 0;
	int OutputCount;
	std::string s1;
	std::string s2;
	std::string Output;
	s1 = "whatev { 1 (){}";

	for (int var1 = 0; var1 < s1.length(); var1++)
	{
		switch (s1[var1]) {

		case ' ':
			cout << s2 << endl;
			Output[OutputCount] = s2;
			OutputCount++;
			s2.erase();
			break;

		default:
			if (isalpha(s1[var1])) {
				s2.append(s1, var1, 1);
				break;
			}

			if (!isalpha(s1[var1])) {
				cout << s1[var1] << endl;
				break;

			}

		}
	}
	cout << Output << endl;
}
