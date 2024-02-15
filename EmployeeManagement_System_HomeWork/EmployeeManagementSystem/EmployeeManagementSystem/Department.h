#pragma once
#include <vector>
#include "Employee.h"
class Department
{

public:
	Department(string);

	void setName(string);
	void setEmployees(vector<Employee*>);
	void setNumEmployees(int);
	
	void addEmployee(Employee*);

	string getDepartmentName();
	vector<Employee*> getEmployees();
	int getNumEmployees();
	
	void displayEmployees();


private:
	string m_departmentName;
	vector<Employee*> m_employees;
	int m_numEmployees;

};

