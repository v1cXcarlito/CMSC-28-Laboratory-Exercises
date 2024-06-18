#include <iostream>

class Motorcycle{
  private:
    int yearModel;
    std::string brandName;
    std::string typeOfMotor; 

  public:
    Motorcycle(int y, std::string b, std::string tM){
      yearModel=y;
      brandName=b;
      typeOfMotor=tM;
    };
    void displayDetails(){
        std::cout << "Motorcycle Details: " << std::endl;
        std::cout << "Year Model: " << yearModel<< std::endl;
        std::cout << "Brand Name: " << brandName<< std::endl;
        std::cout << "Type of Motor: " << typeOfMotor << std::endl;
    }
};
