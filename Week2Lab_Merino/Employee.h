/* CIS 247C
 * January 12, 2015
 * Kim Merino
 * Lab 2 Week 2
 * Employee Header File
 * Program Description: This program accepts input from an employee and displays the informtion entered.
 */

#include<string>
#include<iostream>

using namespace std;

class Employee
{
public:
    
    Employee();
    //Employee(string); // string, char, int, double
    ~Employee();
    
    // public access methods
    double calculatePay();
    void displayEmployee();
    string getFirstName();
    void setFirstName(string first); // changed this from string to void
    string getLastName();
    void setLastName(string last);
    char getGender();
    void setGender(char gen);
    int getDependents();
    void setDependents(int dep);
    double getAnnualSalary();
    void setAnnualSalary(double salary);
    
    // private members
private:
    string firstName;
    string lastName;
    char gender[1]; // Needed to use char array to avoid an error of "incompatible types in assignment...."
    int dependents;
    double annualSalary;
}; // End of Employee class

