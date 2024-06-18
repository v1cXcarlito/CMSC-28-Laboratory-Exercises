#include <iostream>
#include <string>
#include "Person.h"

using std::string;

class Student: public Person{
  private:
    string studentNum;
  
  public:
    string course;
    string department;
    string college;

    Student(){}

    void setStudentNum(string student_no){
      studentNum=student_no;
    }
    string getStudentNum(){
      return studentNum;
    }

    void setCourse(string c){
      course=c;
    }
    string getCourse(){
      return course;
    }
    
    void setDepartment(string dept){
      department=dept;
    }
    string getDepartment(){
      return department;
    }

    void setCollege(string kolehiyo){
      college=kolehiyo;
    }
    string getCollege(){
      return college;
    }

};