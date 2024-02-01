#include "Employee.h"


Employee::Employee(string name, string id, string position) {

    setName(name);
    setID(id);
    setPosition(position);

}

void Employee::setName(string name)
{
    m_name = name;
}

void Employee::setID(string id)
{
    m_employeeID= id;
}

void Employee::setPosition(string position)
{
    m_position = position;
}

void Employee::display() const
{
    cout << "Name: " << m_name << endl;
    cout << "ID: " << m_employeeID << endl;
    cout << "Position: " << m_position << endl;
}

string Employee::getName()
{
    return m_name;
}

string Employee::getID()
{
    return m_employeeID;
}

string Employee::getPosition()
{
    return m_position;
}
