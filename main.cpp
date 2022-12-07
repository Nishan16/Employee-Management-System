#include <iostream>
#include "Employee.h"

using namespace std;

int main (void){
    int input;
    bool active = 1; 
    cout << "**********************\n";
    cout << "Employee Management System\n";
    cout << "1.View all employees\n";
    cout << "2.Add an employee.\n";
    cout << "3.Delete an employee.\n";
    cout << "4.Edit an employee.\n";
    cout << "5.Get Employee by ID\n";
    cout << "6.Exit\n";
    cout << "Enter an input: "; 
    cin >> input;
    while(active){
            if(input == 1){
                // present all employees from text file (make function for this);
            }
            else if(input == 2){
                int income;
                int sinNumber; //one time setting
                char role[50];
                char title[50];
                char department [50];
                char firstName [50];
                char lastName [50];
                
                // take inputs to construct employee;
            }
            else if(input == 3){
                // get empid to delete employee;
            }
            else if(input == 4){
                // get empid to edit employee;
            }
            else if(input == 5){
                // get empid to return all info and ask for password;
            }
            else{
                active = false;
            }
         }
    }