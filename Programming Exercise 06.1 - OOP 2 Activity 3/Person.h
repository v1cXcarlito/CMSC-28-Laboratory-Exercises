#include <iostream>
#include <string>
#include <list>

using std::string;

//A class person containing the first name, last name, and gender.
class Person{
  private:
    string fname; //first name
    string lname; //last name
    string gender; //gender
  
  public:
    Person(){}

    //sets the first name of the person
    void setFname(string firstn){
      fname=firstn;
    }

    //gets the first name of the person nad returns it
    string getFname(){
      return fname;
    }

    //sets the last name of the person
    void setLname(string lastn){
      lname=lastn;
    }

    //gets the last name of the person and returns it
    string getLname(){
      return lname;
    }

    //sets the gender of the person
    void setGender(string gndr){
      gender= gndr;
    }
    //gets the gender of the person and returns it
    string getGender(){
      return gender;
    }

    //gets the first and last name of the person (full name)
    string getFullname(){
      return (fname + " " + lname);
    }
};