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

/*Employee::Employee(string first){
    
}*/

//deconstructor
Employee::~Employee()
{
}

// Public Access Method Definitions


void Employee::setFirstName(string first){
    
    cout << "Please enter your first name: ";
    getline(cin, firstName);
    
}
string Employee::getFirstName(){
    return this -> firstName;
}

void Employee::setLastName(string last){
    
    cout << "Please enter your last name: ";
    getline(cin, lastName);
}
string Employee::getLastName(){
    
    return this -> lastName;
}
void Employee::setGender(char gen){
    
    cout << "Please enter your gender: ";
    cin >> gender;
}

char Employee::getGender(){
    
    return gender[0];
}

void Employee::setDependents(int dep){
    
    cout << "Please enter your Dependents: ";
    cin >> dependents;
}
int Employee::getDependents(){
    
    return dependents;
}
void Employee::setAnnualSalary(double salary){
    
    cout << "Please enter your Annual Salary: ";
    cin >> annualSalary;
}
double Employee::getAnnualSalary(){
    
    return annualSalary;
}
double Employee::calculatePay(){
    
    return annualSalary/52;
}

void Employee::displayEmployee(){
    cout << "-------------------------------------------------\n";
    cout << "Name:\t" << firstName << " " << lastName + "\n";
    cout << "Gender:\t" << gender << "\n";
    cout << "Dependents:\t" << dependents << "\n";
    cout << "Annual Salary:\t" << setprecision(2) << showpoint << fixed << annualSalary << "\n";
    //cout << "Weekly Salary:\t" << annualSalary << "\n";
    
    
}



