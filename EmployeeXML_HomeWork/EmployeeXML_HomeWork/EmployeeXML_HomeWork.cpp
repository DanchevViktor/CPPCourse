#include <iostream>
#include"pugixml.h"
#include <exception>
#include"Employee.h"
#include"EmployeesWorkstations.h"
#include "WorkStation.h"
#include<vector>

using namespace std;
using namespace pugi;  // xml library

vector<Employee> XMLtoEmployee(const char* filename) {
	xml_document doc;  //creating connection with xml 
	
	vector<Employee> employees;
	
	if (!doc.load_file(filename)) {
		cout << "Error! Cannot load xml file." << endl;
	}
	
		xml_node empls = doc.child("EmployeesData").child("Employees");
		
		for (xml_node_iterator atit = empls.begin(); atit != empls.end(); atit++) // attribute xml iterator
		{
			
			string name;
			string type;
			string age;

			name = atit->attribute("Name").value();
			type = atit->attribute("Type").value();
			age = atit->attribute("Age").value();

			employees.push_back(Employee(name, type, age));
			
		}
		return employees;
	
}


vector<EmployeesWorkstations> XMLtoEmployeeWorkstations(const char* fileName) {

	xml_document doc; 
	vector<EmployeesWorkstations> employees;

	if (!doc.load_file(fileName)) {
		cout << "Error! Cant load xml file." << endl;
	}
	else
	{
		xml_node empls = doc.child("EmployeeData").child("Employees");
		for (xml_node_iterator it = empls.begin(); it != empls.end(); it++) {

			
			string name;
			string type;
			string age;
			string building;
			string floor;
			string disc;

			name = it->attribute("Name").value();
			type = it->attribute("Type").value();
			age = it->attribute("Age").value();

			xml_node station = it->child("Workstation");

			

			for (xml_attribute_iterator atit = station.attributes_begin(); atit != station.attributes_end(); atit++) {

				building= it->first_child().attribute("Building").value();
				floor = it->first_child().attribute("Floor").value();
				disc = it->first_child().attribute("Dеsc").value();

				
			}

			employees.push_back(EmployeesWorkstations(name,type,age,building, floor, disc));
		
		}

	}

	return employees;
}



int main()
{

	vector<Employee> employees;

	employees = XMLtoEmployee("Employees.xml");
	for (int i = 0; i < employees.size(); i++) {
		employees[i].print();
	}

	cout << endl;
	cout << endl;
	cout << endl;

	vector<EmployeesWorkstations>employeesWithStations;
	employeesWithStations = XMLtoEmployeeWorkstations("employeesData.xml");


	for (int i = 0; i < employeesWithStations.size(); i++) {
		employeesWithStations[i].print();

	}



	return 0;
}

