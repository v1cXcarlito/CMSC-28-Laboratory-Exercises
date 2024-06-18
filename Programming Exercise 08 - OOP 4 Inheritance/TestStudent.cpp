// TestStudent.cpp
#include <iostream>
#include "Student.h"

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main() {
    string fname, lname, emailAdd, cpNumber, studentNum, course, department, college;
    char gender;

    cout << "Programming Exercise 08 - OOP 4 Inheritance" << endl;
    cout << "Created by: Carl Raymund Suello" << endl;
    cout << "This program will take user input and displays a welcome message for new UP Min students." << endl;

    Student student1;

    cout << "\nEnter Student's First Name: ";
    getline(cin, fname);

    cout << "Enter Student's Last Name: ";
    getline(cin, lname);

    cout << "Enter Student's Gender: ";
    cin >> gender;
    cin.ignore();  // Ignore remaining newline character after reading char

    cout << "Enter Email Address: ";
    getline(cin, emailAdd);

    cout << "Enter Contact Number: ";
    getline(cin, cpNumber);

    cout << "Enter Student Number: ";
    getline(cin, studentNum);

    cout << "Enter Course: ";
    getline(cin, course);

    cout << "Enter Department: ";
    getline(cin, department);

    cout << "Enter College: ";
    getline(cin, college);

    student1.setFname(fname);
    student1.setLname(lname);
    student1.setGender(gender);
    student1.setEmailAdd(emailAdd);
    student1.setCpNum(cpNumber);
    student1.setStudentNum(studentNum);
    student1.setCourse(course);
    student1.setDepartment(department);
    student1.setCollege(college);

    cout << "\nHi, " << student1.getFname() << " " << student1.getLname() << "!" << endl << endl;
    cout << "Welcome to UP Mindanao! Congratulations on your admission in the " << student1.getCourse() 
         << " program under the " << student1.getDepartment() << " in " << student1.getCollege() << "." << endl;
    cout << "Your student number is " << student1.getStudentNum() << ". ";
    cout << "Your provided email address is " << student1.getEmailAdd() << " and your contact number is " 
         << student1.getCpNum() << "." << endl;
    cout << "with your gender stated as " << student1.getGender() << "." << endl << endl;

    return 0;
}
