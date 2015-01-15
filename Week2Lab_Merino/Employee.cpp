/* CIS 247C
 * January 12, 2015
 * Kim Merino
 * Lab 2 Week 2
 * Employee Class Definitions
 * Program Description: This program accepts input from an employee and displays the informtion entered.
 */
#ifndef Week2Lab_Merino_Employee_h
#define Week2Lab_Merino_Employee_h
#include "Employee.h"
#include <iostream>
#include <string>
#include <iomanip>
#endif
using namespace std;

Employee::Employee()
{
    this -> firstName="not given";
    strncpy(gender, "U", 1); // Needed to assign it with strncpy because I received an error trying to use this -> gender
    this -> dependents=0;
    this -> annualSalary=20000;
} // end of default constructor

Employee::Employee(string first, string last, char gen, int dep, double salary){
    
}

//deconstructor
Employee::~Employee()
{
}

// Public Access Method Definitions
double calculatePay(){
    //double value;
    //value = annualSalary/52;
    return 0;
}

void Employee::displayEmployee(){
    
}

string Employee::getFirstName(){
    cout << "Please enter your first name: \n";
    getline(cin, firstName);
    
    return firstName; //this was needed to avoid an error message of EXC_BAD_ACCESS
}

string Employee::setFirstName(string first){
    first = firstName;
    cout << "Your first name is: \n" + first;
    return 0;
}

string Employee::getLastName(string last){
    return 0;
}

string Employee::setLastName(){
    return 0;
}

char Employee::getGender(){
    return 0;
}

char Employee::setGender(char gen){
    return 0;
}

int Employee::getDependents(){
    
    //return dependents;
    return 0;
}

void Employee::setDependents(int dep){
    //int dep = dependents;
}

double Employee::getAnnualSalary(){
    return 0;
}

double Employee::setAnnualSalary(double salary){
    return 0;
}
