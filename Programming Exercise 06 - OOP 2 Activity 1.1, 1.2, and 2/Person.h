#include <iostream>

using namespace std;

class Person
{

private:
  int age;
  char gender;
  string courseName;
  float grade;

public:
  Person() {}

  Person(int newage, char c)
  {
    age = newage;
    gender = c;
  }

  void setage(int newage)
  {
    if (newage >= 0)
    {
      age = newage;
    }

    else
    {
      cout << "Invalid age!!!" << endl;
    }
  }

  int getage()
  {
    return age;
  }

  void setgender(char c)
  {
    if ((c == 'M') || (c == 'F'))
    {
      gender = c;
    }

    else
    {
      cout << "invalid gender!!!" << endl;
    }
  }
  char getgender()
  {
    return gender;
  }

  void setcourseName(string course)
  {
    courseName = course;
  }

  string getcourseName()
  {
    return courseName;
  }

  void setgrade(float newgrade)
  {
    if (newgrade >= 60.00)
    {
      grade = newgrade;
      cout << "You passed!!!" << endl;
    }
    else
    {
      cout << "You failed..." << endl;
    }
  }

  float getgrade()
  {
    return grade;
  }

  void view()
  {
    cout << "Person age is = " << getage() << endl;
    cout << "Person gender is = " << getgender() << endl;
    cout << "Person course name is = " << getcourseName() << endl;
    cout << "Person grade is = " << getgrade() << endl;
    cout << "Person grade is = " << getgrade() << endl;
  }
};