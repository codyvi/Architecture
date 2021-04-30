#pragma once
#include <ctime>
#include<string>

using namespace std;

class ShoppingCart{
  public:
    //Constructores
    ShoppingCart();
    ShoppingCart(int cart, int product, int qty, time_t date);
    //Gets
    int getCartID(){return cartId;};
    int getProductID(){return productID;};
    int getQuantity(){return quantity;};
    time_t getDateAdded(){return dateAdded;};
    //Sets
    void setCartID(int i){cartId = i;};
    void setProductID(int i){productID = i;};
    void setQuantity(int i){quantity = i;};
    void setTimeAdded(time_t t){dateAdded = t;};
    //Funciones
    string viewCartDetails();
    bool CheckOut();
    void addCartItem(int itemID);
    
  protected:
    void updateQuantity(int value);

  private:
  int cartId;
  int productID;
  int quantity;
  time_t dateAdded;
};

ShoppingCart::ShoppingCart(){
  cartId = 0;
  productID = 0;
  quantity = 0;
  dateAdded = time(0);
}

ShoppingCart::ShoppingCart(int cart, int product, int qty, time_t date){
  this -> cartId = cart;
  this -> productID = product;
  this -> quantity = qty;
  this -> dateAdded = date;
}

string ShoppingCart::viewCartDetails(){
  string carId = "Shopping cart ID: " + to_string(this->cartId);
  string ProductId = " Product ID: " + to_string(this->productID);
  string ids = carId + ProductId;
  string qty = " Quantity: " + to_string(this->quantity);
  string cartInfo = ids + qty;
  string date = " Date added: ";
  string allInfo = cartInfo + date;
  return allInfo;
}

bool ShoppingCart::CheckOut(){
  if(productID != 0){
    return true;
  }
  else{
    return false;
  }
}

void ShoppingCart::addCartItem(int itemID){
  this->productID = itemID;
}

void ShoppingCart::updateQuantity(int value){
  this->quantity = value;
}