#include <iostream>
#include <string>
#include "Person.h"

using std::string;

class Employees: public Person{
  private:
    string empNum;
  
  public:
    string position;
    string office;
    float salary;

    Employees(){}

    void setEmpNum(string eNum){
      empNum=eNum;
    }
    string getEmpNum(){
      return empNum;
    }

    void setPosition(string pos){
      position=pos;
    }
    string getPosition(){
      return position;
    }

    void setOffice(string off){
      office=off;
    }
    string getOffice(){
      return office;
    }

    void setSalary(float sal){
      salary=sal;
    }

    float getSalary(){
      return salary;
    }

};