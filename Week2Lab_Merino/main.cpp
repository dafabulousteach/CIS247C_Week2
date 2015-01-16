/* CIS 247C
 * January 12, 2015
 * Kim Merino
 * Lab 2 Week 2
 * Employee Main Program
 * Program Description: This program accepts input from an employee and displays the informtion entered.
 */

#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    Employee e1;
    
    cout << "Welcome to your first Object-Oriented Program\nEmployee Class 247C, Week 2 Lab\n";
    cout << "Name: Kim Merino\n";

    // Employee #1 User Input
    cout << "***************** Employee 1 ****************\n";
    e1.setFirstName(" ");
    e1.setLastName(" ");
    e1.setGender(0);
    e1.setDependents(0);
    e1.setAnnualSalary(0);
    e1.displayEmployee();
    cout << "***************** Employee 2 ****************\n";
     // Employee #2
    Employee e2("Mary", "Noia", 'F', 2, 150000);
    e2.displayEmployee();
    cout << "The end of the CIS 247C Week 2 iLab\n";
} // end of main
