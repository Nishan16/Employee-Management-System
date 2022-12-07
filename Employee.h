#include <string.h>


class Employee {
    private: // all information should be private
        int income;
        int sinNumber; //one time setting
        char role[50];
        char title[50];
        char department [50];
        char firstName [50];
        char lastName [50];
    public:
        Employee(int income, int sinNumber, char* role, char* title, char* department, char* firstName, char* lastName);
        int employeeNumber; 
        int readIncome(); // figure out which params to read with 
        bool setIncome(int newIncome);

        char* readRole();
        bool setRole(char* newRole);

        char* readTitle();
        bool setTitle(char* newTitle);

        char* readDepartment();
        bool setDepartment(char* newDepartment);

        char* readName();
        bool setName(char* newFirstName, char* newLastName);
    
};

