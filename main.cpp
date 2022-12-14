#include <iostream>
#include <fstream>
#include "Employee.h"
#include <string>

using namespace std;

int main (void){
    int input;
    bool active = 1; 
    while(active){
        cout << "**********************\n";
        cout << "Employee Management System\n";
        cout << "1.View all employees\n";
        cout << "2.Add an employee.\n";
        cout << "3.Delete an employee.\n";
        cout << "4.Get Employee by ID\n";
        cout << "5.Exit\n";
        cout << "Enter an input: "; 
        cin >> input;
            if(input == 1){
                cout << "Loading Employees.....\n";
                cout << "**********************\n";
                ifstream file_obj;
                file_obj.open("Employees.txt", ios::in);
                while(!file_obj.eof()){
                    Employee temp;
                    temp.employeeNumber = 111;
                    file_obj.read((char*)&temp, sizeof(temp));
                    if(temp.employeeNumber == 111){
                        break;
                    }
                    cout << "Employee Name: " << temp.readName() << "\n";
                    cout << "Employee Number: " << temp.employeeNumber << "\n";
                    cout << "Employee Title: " << temp.readTitle() << "\n";
                    cout << "Employee Department: " << temp.readDepartment() << "\n";
                    cout << "**********************\n";
                }
            }
            else if(input == 2){
                int income;
                int sinNumber; //one time setting
                int empIdInput;
                char role[50];
                char title[50];
                char department [50];
                char firstName [50];
                char lastName [50];

                cout << "Enter Income :";
                cin >> income;

                cout << "Enter Sin Number: ";
                cin >> sinNumber;

                cout << "Enter Employee Number: ";
                cin >> empIdInput; 

                cout << "Enter Role: ";
                cin >> role;

                cout << "Enter Title :";
                cin >> title;

                cout << "Enter Department: ";
                cin >> department;

                cout << "Enter First Name";
                cin >> firstName;

                cout << "Enter Last Name";
                cin >> lastName;

                Employee temp;
                temp.setIncome(income);
                temp.setSinNumber(sinNumber);
                temp.employeeNumber = empIdInput;
                temp.setRole(role);
                temp.setTitle(title);
                temp.setDepartment(department);
                temp.setName(firstName, lastName);

                // write this to a file; 
                // take inputs to construct employee;
                ofstream file_obj;
                file_obj.open("Employees.txt", ios::app);
                file_obj.write((char*)&temp, sizeof(temp));
            }
            else if(input == 3){
                int empIdInput;
                cout << "Enter Employee Number: ";
                cin >> empIdInput;
                 
                Employee temp;
                ifstream file_obj;
                file_obj.open("Employees.txt", ios::in);
                ofstream old_file_obj;
                old_file_obj.open("OldEmps.txt");
                while(!file_obj.eof()){
                    file_obj.read((char*)&temp, sizeof(temp));
                    if(!(temp.employeeNumber == empIdInput)){
                        old_file_obj.write((char*)&temp, sizeof(temp));
                    }
                }
                file_obj.close();
                old_file_obj.close();

                ifstream oldx_file_obj;
                oldx_file_obj.open("OldEmps.txt", ios::in);
                ofstream new_file_obj;
                new_file_obj.open("Employees.txt");
                while(!oldx_file_obj.eof()){
                    temp.employeeNumber = 111;
                    oldx_file_obj.read((char*)&temp, sizeof(temp));
                       if(temp.employeeNumber == 111){
                        break;
                    }
                    new_file_obj.write((char*)&temp, sizeof(temp));
                }   
            }
            else if(input == 4){
                int empIdInput;
                cout << "Enter Employee Number: ";
                cin >> empIdInput; 

                ifstream file_obj;
                file_obj.open("Employees.txt", ios::in);
                while(!file_obj.eof()){
                    Employee temp;
                    file_obj.read((char*)&temp, sizeof(temp));
                    if(temp.employeeNumber == empIdInput){
                        cout << "**********************\n";
                        cout << "Employee Name: " << temp.readName() << "\n";
                        cout << "Employee Income: " << temp.readIncome() << "\n";
                        cout << "Employee Number: " << temp.employeeNumber << "\n";
                        cout << "Employee Role: " << temp.readRole() << "\n";
                        cout << "Employee Title: " << temp.readTitle() << "\n";
                        cout << "Employee Department: " << temp.readDepartment() << "\n";
                        break;
                    }
                }

            }
            else{
                active = false;
            }
         }
    }