#include "Book.h"

Book::Book(string title, string author, int pages)
{
    setTitle(title);
    setAuthor(author);
    setPages(pages);
}

void Book::setTitle(string title)
{
    m_title = title;
}

void Book::setAuthor(string author)
{
    m_author = author;
}

void Book::setPages(int pages)
{
    m_pages = pages;
}

string Book::getTitle()
{
    return m_title;
}

string Book::getAuthor()
{
    return m_author;
}

int Book::getPages()
{
    return m_pages;
}

void Book::display()
{
    cout << "Title: " << getTitle() << " "
        << "Author: " << getAuthor() << " "
        << "Pages: " << getPages() << endl;
}
