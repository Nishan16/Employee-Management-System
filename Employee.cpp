#include "Employee.h"
#include <string>

Employee::Employee(){
    employeeNumber = 1;
}
int Employee::readIncome(){
    return income;
}

void Employee::setIncome(int incomeInput){
    income = incomeInput;
}

void Employee::setSinNumber(int sinNumberInput){
    sinNumber = sinNumberInput;
}


string Employee::readName(){
    return firstName + " " + lastName;
}

void Employee::setName(char* newFirstName, char* lastFirstName){
    firstName = newFirstName;
    lastName = lastFirstName;
} 

string Employee::readRole(){
    return role;
}

void Employee::setRole(char* newRole){
    role = newRole;
}

string Employee::readTitle(){
    return title;
}

void Employee::setTitle(char* newTitle){
    title = newTitle;
}

string Employee::readDepartment(){
    return department;
}

void Employee::setDepartment(char* newDepartment){
    department = newDepartment;
}




