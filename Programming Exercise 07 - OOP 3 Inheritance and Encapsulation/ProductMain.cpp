#include <iostream>
#include <string>
#include "ProductInventory.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;


int main(){
  string name;
  string brand;
  string description;
  string category;
  double price;
  int quantity, warranty;
  string size, color;
  string material, model, techspecs;
  
  //Given program details
  cout<< "Inheritance and Encapsulation - Programming Exercise 06" << endl;
  cout<< "Created by: Carl Raymund Suello" <<endl;
  
  /*Details for clothing item
    getline() function to read string from input
    cin.ignore()function is used which is used to 
    ignore or clear one or more characters from the input buffer*/
  cout<< "\nEnter details for a clothing item\n" <<endl;
  cout<< "Name: " << endl;
  getline(cin, name);

  cout<< "Brand: " << endl;
  getline(cin, brand);

  cout<< "Price: " <<endl;
  cin>> price;

  cout<< "Quantity: " << endl;
  cin >> quantity;
  cin.ignore(); 

  cout<< "Size: " << endl;
  getline(cin, size);

  cout<< "Color: " << endl;
  getline(cin, color);

  cout<< "Description:" << endl;
  getline(cin, description);

  cout<< "Category: " << endl;
  getline(cin, category);

  cout<< "Type of Material: " << endl;
  getline(cin, material);

  //object for the Clothing class
  Clothing clothing1;

  clothing1.setNameOfProd(name);
  clothing1.setNameOfBrand(brand);
  clothing1.setPrice(price);
  clothing1.setQuantity(quantity);
  clothing1.setSize(size);
  clothing1.setColor(color);
  clothing1.setDescription(description);
  clothing1.setCategory(category);
  clothing1.setMaterial(material);

  //Details for the electronic item
  cout<<"\nEnter details of the electronic item" << endl;
  cout<< "Name: " <<endl;
  getline(cin,name);

  cout<< "Brand: " << endl;
  getline(cin, brand);

  cout<< "Model: " <<endl;
  getline(cin,model);

  cout<< "Price: " <<endl;
  cin>> price;

  cout<< "Quantity: " << endl;
  cin >> quantity;
  cin.ignore(); 

  cout<< "Description:" << endl;
  getline(cin, description);

  cout<< "Category: " << endl;
  getline(cin, category);

  cout<< "Warranty (Year/s): " <<endl; 
  cin >> warranty;
  cin.ignore(); 

  cout<<"Tehcnical Specifications: "<<endl;
  getline(cin, techspecs);

  //object for Electronics class;
  Electronics electronics1;

  electronics1.setNameOfProd(name);
  electronics1.setNameOfBrand(brand);
  electronics1.setModel(model);
  electronics1.setPrice(price);
  electronics1.setQuantity(quantity);
  electronics1.setDescription(description);
  electronics1.setCategory(category);
  electronics1.setWarranty(warranty);
  electronics1.setTechSpecs(techspecs);

  //Printing the details after the input
  cout<<"\nAbout the items:" <<endl;
  clothing1.ShowClothDetails();

  cout<<endl;

  electronics1.ShowElecDetails();

  return 0;
}