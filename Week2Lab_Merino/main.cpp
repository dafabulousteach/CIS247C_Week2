/* CIS 247C
 * January 12, 2015
 * Kim Merino
 * Lab 2 Week 2
 * Program Description: This program accepts input from an employee and displays the informtion entered.
 */

#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    Employee newEmployee;
    cout << "Welcome to your first Object-Oriented Program\nEmployee Class 247C, Week 2 Lab\n";
    cout << "Name: Kim Merino\n";
    newEmployee.getFirstName();
} // end of main
