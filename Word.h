/* ------------------------------------------------------
Workshop 1 part 2
Name     : Harsh Vishnu Limbachiya
Email    : hvlimbachiya@myseneca.ca
studentId: 157295197
Filename : Word.h
date     : 23/1/2022
-----------------------------------------------------------*/

/*I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments*/


#pragma once
#ifndef Word_H_ // replace with relevant names
#define Word_H_

#include"cStrTools.h"
namespace sdds
{
	const int MAX_WORD_LEN = 21;

	struct Word
	{
		char letters[MAX_WORD_LEN];
		int count;
	};
	
	// Your header file content goes here
	//searchWord 
	int searchWords(const Word words[], int num, const char word[]);
	//addWord
	void addWord(Word words[], int* index, const char newWord[]);
	//readWord
	int readWord(char* word, FILE* fptr, int maxLen);
	//title
	void title(const char* value, int len);
	//endList
	void endList();
	//totalWordsStat
	void totalWordsStat(int totNoWrds, int totalOverAll, int longestWord);
	//print
	void print(const Word* w, int gotoNextLine, int len);
	//findMaxLen
	int findMaxLen(const Word words[], int noOfWords);
	//listWord
	void listWords(const Word words[], int noOfWords, const char* theTitle);
	//swap
	void swap(Word* p1, Word* p2);
	//sort
	void sort(Word words[], int cnt, int sortType);
	//totalCount
	int totalCount(const Word* words, int num);
	//wordStats
	void wordStats(const char* filename);
	// programTitle
	void programTitle();
}

#endif