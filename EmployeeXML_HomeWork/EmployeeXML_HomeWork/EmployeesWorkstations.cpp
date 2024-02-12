#include "EmployeesWorkstations.h"

EmployeesWorkstations::EmployeesWorkstations(string name, string type, string age,
    string building, string floor, string desc):m_name(name),m_type(type),m_age(age)
{
    workStation.setBuilding(building);
    workStation.setFloor(floor);
    workStation.setDesc(desc);
}

void EmployeesWorkstations::setName(string name)
{
    m_name = name;
}

void EmployeesWorkstations::setType(string type)
{
    m_type = type;
}

void EmployeesWorkstations::setAge(string age)
{
    m_age = age;
}

string EmployeesWorkstations::getName() const
{
    return m_name;
}

string EmployeesWorkstations::getType() const
{
    return m_type;
}

string EmployeesWorkstations::getAge() const
{
    return m_age;
}

void EmployeesWorkstations::print() const
{
    cout << "Name: " << getName() << " "
        << "Type: " << getType() << " "
        << "Age: " << getAge() << " " << endl;
    workStation.print();
    cout << endl;
}
