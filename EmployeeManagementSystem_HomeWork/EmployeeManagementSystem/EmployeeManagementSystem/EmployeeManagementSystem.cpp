
#include <iostream>
#include "Employee.h"
#include"Department.h"

int main()
{
	vector<Employee*> employees;

	Employee* ptr1 = new Employee("Viktor", "26", "Architect");
	Employee* ptr2 = new Employee("Raina", "2", "Architect");
	Employee* ptr3 = new Employee("Viktoria", "20", "Architect");

	Department dep1("Geodesy");

	dep1.addEmployee(ptr1);
	dep1.addEmployee(ptr2);
	dep1.addEmployee(ptr1);
	
	dep1.displayEmployees();


	return 0;
}

