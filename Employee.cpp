#include "Employee.h"

Employee::Employee(int income, int sinNumber, char* role, char* title, char* department, char* firstName, char* lastName){
    income = income;
    sinNumber = sinNumber;
    role = role;
    title = title;
    department = department;
    firstName = firstName;
    lastName = lastName;
};

int Employee::readIncome(){
    return income;
}
