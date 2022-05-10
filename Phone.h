/* ------------------------------------------------------
Workshop 1 part 2
Name     : Harsh Vishnu Limbachiya
Email    : hvlimbachiya@myseneca.ca
studentId: 157295197
Filename : Phone.h
date     : 23/1/2022
-----------------------------------------------------------*/

/*I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments*/


#ifndef Word_H_ // replace with relevant names
#define Word_H_
#pragma once
#include <cstdio>
#include<iostream>

namespace sdds
{
	const int Max_Length= 50;
	extern std::FILE* fp;
	struct Phone
	{
		char name[Max_Length + 1], areaCode[4], prefix[4], number[5];
	};
	void buffer();
	void task( struct Phone data[Max_Length]);
	void phoneDir(const char* programTitle, const char* fileName);
}

#endif