//
//  Employee.h
//  Week2Lab_Merino
//
//  Created by Big Brother on 1/13/15.
//  Copyright (c) 2015 CIS247C. All rights reserved.
//

#ifndef Week2Lab_Merino_Employee_h
#define Week2Lab_Merino_Employee_h
#include <string>
#include <iostream>

#endif

using namespace std;

class Employee
{
public:
    
    Employee();
    ~Employee();
    
    // public access methods
    double calculatePay();
    void displayEmployee();
    string getFirstName();
    string setFirstName(); // might take in arguments
    string getLastName(string last);
    string setLastName();
    char getGender();
    char setGender(char gen);
    int getDependents();
    int setDependents(int dep);
    double getAnnualSalary();
    double setAnnualSalary(double salary);
    
    // private members
private:
    string firstName;
    string lastName;
    char gender[1]; // Needed to use char array to avoid an error of "incompatible types in assignment...."
    int dependents;
    double annualSalary;
}; // End of Employee class

