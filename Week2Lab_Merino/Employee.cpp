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

string Employee::getFirstName(){ // retrieves the stored attribute for first name
    
    return this->firstName;
}

void Employee::setFirstName(){ // modifies the value of first name
    
    cout << "Please enter your first name: ";
    getline(cin, firstName);
}

string Employee::getLastName(string last){
    
    return this -> lastName;
}

void Employee::setLastName(){
    
    cout << "Please enter your last name: ";
    getline(cin, lastName);
}

char Employee::getGender(char gen){
    
    return gender[0];
}

void Employee::setGender(){
    
    cout << "Please enter your gender: ";
    cin >> gender;
}

int Employee::getDependents(int dep){
    
    return dependents;
}

void Employee::setDependents(){
    
    cout << "Please enter your Dependents: ";
    cin >> dependents;
}

double Employee::getAnnualSalary(double salary){
    
    return annualSalary;
}

void Employee::setAnnualSalary(){
    
    cout << "Please enter your Annual Salary: ";
    cin >> annualSalary;
}
