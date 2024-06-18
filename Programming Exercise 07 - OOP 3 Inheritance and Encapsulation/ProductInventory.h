#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

//parent class
class Product
{
private:
  string name;
  string brand;
  string description;
  string category;
  double price;
  int quantity;

public:
  Product(){}

  //setters and getters for the attributes of the class Product
  void setNameOfProd(string nameProd){
    name=nameProd;
  }
  string getNameofProd(){
    return name;
  }

  void setNameOfBrand(string brandProd){
    brand=brandProd;
  }
  string getNameOfBrand(){
    return brand;
  }
 
  void setDescription(string desProd){
    description=desProd;
  }
  string getDescription(){
    return description;
  }

  void setCategory(string categoryProd){
    category=categoryProd;
  }
  string getCategory(){
    return category;
  }

  void setPrice(double priceProd){
    price=priceProd;
  }
  double getPrice(){
    return price;
  }

  void setQuantity(int quantityProd){
    quantity=quantityProd;
  }
  int getQuantity(){
    return quantity;
  }
};

//child/derived class of Product (parent class)
class Clothing:public Product
{
  private:
    string size;
    string color;
    string material;
  public:
    Clothing(){}

    //setters and getters method
    void setSize(string sizeofCloth){
      size=sizeofCloth;
    }
    string getSize(){
      return size;
    }

    void setColor(string colorofCloth){
      color=colorofCloth;
    }
    string getColor(){
      return color;
    }

    void setMaterial(string matofCloth){
      material=matofCloth;
    }
    string getMaterial(){
      return material;
    }

    //print details of cloth
    void ShowClothDetails(){
      cout<< "Name: " << getNameofProd() << endl;
      cout<< "Brand: " << getNameOfBrand() << endl;
      cout<< "Price: " << getPrice() << endl;
      cout<< "Quantity: " << getQuantity() << endl;
      cout<< "Size: " << getSize() << endl;
      cout<< "Color: " << getColor() << endl;
      cout<< "Description: " << getDescription() << endl;
      cout<< "Category: " << getCategory() << endl;
      cout<< "Material: " << getMaterial() << endl;
    }
};

//child/derived class of Product (parent class)
class Electronics:public Product
{
  private:
    string model;
    string techspecs;
    int warranty;
  public:
    Electronics(){}
  
  //setters and getters method
  void setModel(string modelE){
    model=modelE;
  }
  string getModel(){
    return model;
  }

  void setTechSpecs(string specs){
    techspecs=specs;
  }
  string getTechSpecs(){
    return techspecs;
  }

  void setWarranty(int warrantyE){
    warranty=warrantyE;
  }
  int getWarranty(){
    return warranty;
  }

  void ShowElecDetails(){
    cout<< "Name: " << getNameofProd() << endl;
      cout<< "Brand: " << getNameOfBrand() << endl;
      cout<< "Model: " << getModel() << endl;
      cout<< "Price: " << getPrice() << endl;
      cout<< "Quantity: " << getQuantity() << endl;
      cout<< "Description: " << getDescription() << endl;
      cout<< "Category: " << getCategory() << endl;
      cout<< "Warranty: " << getWarranty() << endl;
      cout<< "Technical Specifications: " << getTechSpecs() << endl;
  }
};