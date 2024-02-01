#include "Department.h"

Department::Department(string departmentName)
{
    setName(departmentName);
    m_numEmployees = 0;
}

void Department::setName(string departmentName)
{
    m_departmentName = departmentName;
}

void Department::setEmployees(vector<Employee*> employees)
{
    m_employees = employees;
}

void Department::setNumEmployees(int numEmployees_)
{
    m_numEmployees = numEmployees_;
}

void Department::addEmployee(Employee* employee_)
{
    m_employees.push_back(employee_);
    m_numEmployees++;
}

string Department::getDepartmentName() 
{
    return m_departmentName;
}

vector<Employee*> Department::getEmployees() 
{
    return  m_employees;
}

int Department::getNumEmployees() 
{
    return m_numEmployees;
}

void Department::displayEmployees() 
{

    cout << "Department is : " << m_departmentName << endl;
    
    for (int i = 0; i < m_employees.size(); i++)
    {
        m_employees[i]->display();
       
    }
    cout << "The number of employees in the department is: " << getNumEmployees() << endl;
    
}
