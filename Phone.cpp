/* ------------------------------------------------------
Workshop 1 part 2
Name     : Harsh Vishnu Limbachiya
Email    : hvlimbachiya@myseneca.ca
studentId: 157295197
Filename : Phone.cpp
date     : 23/1/2022
-----------------------------------------------------------*/

/*I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments*/
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <fstream>
#include "Phone.h"
#include "cStrTools.h"

using namespace std;

namespace sdds
{
	int values = 0;
	FILE* fp;
	//clear buffer 
	void buffer()
	{
		while (getchar() != '\n');
	}
	//perform task
	void task( struct Phone data[Max_Length])
	{
		char exitVal = '!';
		char val[Max_Length + 1];
		char newVal1[Max_Length + 1];
		char newVal2[Max_Length + 1];
		bool check;
		int i, j;
		do
		{
			cout << "Enter a partial name to search (no spaces) or enter '!' to exit" << endl;
			cout << "> ";
			cin >> val;
			buffer(); //flush the buffer
			for (i = 0; i < Max_Length; i++)
			{
				for (j = 0; j < Max_Length; j++)
				{
					newVal1[j] = toLower(data[i].name[j]);
 					newVal2[j] = toLower(val[j]);
				}
				check = strstr(newVal1, newVal2);
				if (check != false)
				{
					cout << data[i].name << ": (" << data[i].areaCode << ") " << data[i].prefix << "-" << data[i].number << endl;
				}
			}
			if (val[0] == '!')
			{
				cout << "Thank you for using Star Wars directory." << endl;
			}
		} while (val[0] != '!');
	}

	//get data from file and add to struct 
	void phoneDir(const char* programTitle, const char* fileName)
	{
		struct Phone details[Max_Length] = { {} };
		cout << programTitle << " phone direcotry search" << endl;
		cout << "-------------------------------------------------------" << endl;
		fp = fopen(fileName, "r");
		if (fp != NULL)
		{
			while ((fscanf(fp, "%[^\t]\t%s\t%s\t%s\n", details[values].name, details[values].areaCode, details[values].prefix, details[values].number) != EOF))
			{
				values++;
		    }
		}
		else
		{
			cout << "badfile.txt file not found!" << endl;
			cout << "Thank you for using Star Wars directory." << endl;
		}

		fclose(fp);
		//performs the search task for the star war 
		task(details);
	}
}
