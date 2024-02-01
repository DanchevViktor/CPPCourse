#include "Member.h"

Member::Member(string name, int age, string id)
{
    setName(name);
    setAge(age);
    setID(id);
}

void Member::setName(string name) {
    m_name = name;
}

void Member::setAge(int age)
{
    if (age < 0) 
        cout << "Invalid age. Please try again" << endl;
    else 
        m_age = age;
}      

void Member::setID(string id)
{
    m_memberID = id;
}

void Member::display()
{
    cout << "Member name: " << m_name << endl  << "Age: " << m_age <<
       endl << "ID: "<<  m_memberID << endl << endl;
}

string Member::getName()
{
    return m_name;
}

int Member::getAge()
{
    return m_age;
}

string Member::getID()
{
    return m_memberID;
}

void Member::borrowBook(Book* obj)
{
    cout << m_name << " Is borrowing a book "; obj->display(); 
    cout << endl;
}
