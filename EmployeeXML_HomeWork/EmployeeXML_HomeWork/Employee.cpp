#include "Employee.h"

void Employee::setName(string name)
{
    m_name = name;
}

void Employee::setType(string type)
{
    m_type = type;
}

void Employee::setAge(string age)
{
    m_age = age;
}

string Employee::getName() const
{
    return m_name;
}

string Employee::getType() const
{
    return m_type;
}

string Employee::getAge() const
{
    return m_age;
}

void Employee::print() const
{
    cout << "Name: " << getName() << " "
        << "Type: " << getType() << " "
        << "Age: " << getAge() << endl;
}
