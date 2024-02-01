#include "Book.h"

Book::Book(string title, string author, string isbn)
{
    setTitle(title);
    setAuthor(author);
    setISBN(isbn);

}

void Book::setTitle(string title)
{
    m_title = title;
}

void Book::setAuthor(string author)
{
    m_author = author;
}

void Book::setISBN(string isbn)
{
    if (sizeof(isbn) < 5)
        cout << "Invalid ISBN number. Please try again." << endl;
    else
    m_isbn = isbn;
}

void Book::display()
{
    cout << "Book title: " << m_title << endl << "Author: " << m_author <<
        endl << "ISBN: " << m_isbn << endl << endl;
}

string Book::getTitle()
{
    return m_title;
}

string Book::getAuthor()
{
    return m_author;
}

string Book::getISBN()
{
    return m_isbn;
}
