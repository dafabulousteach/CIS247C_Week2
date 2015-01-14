//
//  Employee.cpp
//  Week2Lab_Merino
//
//  Created by Big Brother on 1/13/15.
//  Copyright (c) 2015 CIS247C. All rights reserved.
//
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

//deconstructor
//Employee::~Employee()
//{}

// Public Access Method Definitions
double calculatePay(){
    //double value;
    //value = annualSalary/52;
    return 0;
}

void displayEmployee(){
    
}

string Employee::getFirstName(){
    cout << "Please enter your first name: ";
    return 0;
}

string setFirstName(string first){
    return 0;
}

string getLastName(string last){
    return 0;
}

string setLastName(){
    return 0;
}

char getGender(){
    return 0;
}

char setGender(char gen){
    return 0;
}

int getDependents(){
    return 0;
}

int setDependents(int dep){
    return 0;
}

double getAnnualSalary(){
    return 0;
}

double setAnnualSalary(double salary){
    return 0;
}
