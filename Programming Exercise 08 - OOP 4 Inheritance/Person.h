#include <iostream>
#include <string>

using std::string;

class Person{
  private:
    string fname;
    string lname;
    char gender;
  
  public:
    string emailAdd;
    string cpNum;

    Person(){}

    void setFname(string firstName){
      fname=firstName;
    }
    string getFname(){
      return fname;
    }

    void setLname(string lastName){
      lname=lastName;
    }
    string getLname(){
      return lname;
    }

    void setGender(char gndr){
      gender=gndr;
    }
    char getGender(){
      return gender;
    }

    void setEmailAdd(string email){
      emailAdd=email;
    }
    string getEmailAdd(){
      return emailAdd;
    }

    void setCpNum(string cp_no){
      cpNum=cp_no;
    }
    string getCpNum(){
      return cpNum;
    }
};