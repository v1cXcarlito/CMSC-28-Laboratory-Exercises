#include <iostream>
#include "Employees.h"

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main()
{
  string fname, lname, emailadd, cpnumber, empnum, position, office;
  char gender;
  float salary;

  cout << "Programming Exercise 08 - OOP 4 Inheritance" << endl;
  cout << "Created by: Carl Raymund Suello" << endl;
  cout << "This program will take user input and displays an information about an employee being hired for work." << endl;

  Employees employee;

  cout << "\nEnter Employee's First Name: ";
  getline(cin, fname);

  cout << "Enter Employee's Last Name: ";
  getline(cin, lname);

  cout << "Enter Employee's Gender: ";
  cin >> gender;
  cin.ignore(); // Ignore remaining newline character after reading char

  cout << "Enter Employee's email address: ";
    cin >> emailadd;

    cout << "Enter Employee's contact number: ";
    cin >> cpnumber;

    cout << "Enter Employee's employee number: ";
    cin >> empnum;

    cin.ignore();

    cout << "Enter Employee's position: ";
    getline(cin, position);

    cout << "Enter Employee's office: ";
    getline(cin, office);

    cout << "Enter Employee's salary: ";
    cin >> salary;

    employee.setFname(fname);
    employee.setLname(lname);
    employee.setGender(gender);
    employee.setEmailAdd(emailadd);
    employee.setCpNum(cpnumber);
    employee.setEmpNum(empnum);
    employee.setPosition(position);
    employee.setOffice(office);
    employee.setSalary(salary);

    cout << "\nHi, " << employee.getFname() << " " << employee.getLname() << "!" << endl << endl;
    cout << "You are hired! We are pleased to inform you that your application for work in " << employee.getOffice() 
         << " is accepted, under the position of " << employee.getPosition() << ". With these, your starting salary will be " 
         << employee.getSalary() << "." << endl;
    cout << "Your employee number is " << employee.getEmpNum() << ". ";
    cout << "Your provided email address is " << employee.getEmailAdd() << " and your contact number is " 
         << employee.getCpNum() << "." << endl;
    cout << "With your gender stated as " << employee.getGender() << "." << endl << endl;
}