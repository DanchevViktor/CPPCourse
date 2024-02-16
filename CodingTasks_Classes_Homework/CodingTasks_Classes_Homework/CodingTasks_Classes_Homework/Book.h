#pragma once
using namespace std;
#include <iostream>

class Book
{
public:
	Book(string, string, int);
	void setTitle(string);
	void setAuthor(string);
	void setPages(int);

	string getTitle();
	string getAuthor();
	int getPages();

	void display();

private:
	string m_title;
	string m_author;
	int m_pages;
};

