#include <string>
using namespace std;

class Employee {
    private: // all information should be private
        int income;
        int sinNumber;
        string role;
        string title;
        string department;
        string firstName;
        string lastName;
    public:
        
        Employee();
        int employeeNumber; 
        int readIncome(); // figure out which params to read with 
        void setIncome(int newIncome);

        void setSinNumber(int newSinNumber);


        string readRole();
        void setRole(char* newRole);

        string readTitle();
        void setTitle(char* newTitle);

        string readDepartment();
        void setDepartment(char* newDepartment);

        string readName();
        void setName(char* newFirstName, char* newLastName);
    
};

