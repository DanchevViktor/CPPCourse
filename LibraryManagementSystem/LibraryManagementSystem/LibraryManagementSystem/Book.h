#pragma once
using namespace std;
#include<iostream>

class Book
{
public:
	Book(string, string, string);

	void setTitle(string);
	void setAuthor(string);
	void setISBN(string);

	void display();

	string getTitle();
	string getAuthor();
	string getISBN();

private:
	string m_title;
	string m_author;
	string m_isbn;
};

