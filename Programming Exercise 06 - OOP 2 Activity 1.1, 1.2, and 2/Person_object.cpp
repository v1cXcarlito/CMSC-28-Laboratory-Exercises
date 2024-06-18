#include <iostream>
#include "Person.h" // add Person.h as a library to this program

using namespace std;

int main()
{
  int a;
  char g;
  string course;
  float gr;

  cout << "Creating the 1st Person object (p) using the 1st Constructor" << endl;
  cout << "\nInput age: ";
  Person p;
  cin >> a;
  p.setage(a);
  cout << "Input gender: ";
  cin >> g;
  p.setgender(g);
  cout << "Input course name: ";
  cin >> course;
  p.setcourseName(course);
  cout << "Input grade: ";
  cin >> gr;
  p.setgrade(gr);

  cout << "Age = " << p.getage() << endl;
  cout << "Gender = " << p.getgender() << endl;

  cout << "\nThis is an example of method overloading: \n";
  cout << "Using view 1: \n";
  p.view();
  return 0;
}