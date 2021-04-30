#pragma once
#include "User.h"
#include "ShoppingCart.h"
#include "Order.h"

class Customer : public User{
  public:
    //Constructores
    Customer();
    Customer(string, string, string, string name, string add, string eml, string shippInfo, ShoppingCart, Order);
    //Gets
    string getName(){return name;};
    string getAddress(){return address;};
    string getEmail(){return email;};
    string getShippingInfo(){return shippingInfo;};
    ShoppingCart getShoppingCart(){return myCart;};
    //Sets
    void setName(string s){name = s;};
    void setAddress(string s){address = s;};
    void setEmail(string s){email = s;};
    void setShippingInfo(string s){shippingInfo = s;};
    void setShoppingCart(ShoppingCart c){myCart = c;};
    //Funciones
    bool registerC();
    bool login();
    void updateProfile(Customer c);
    bool verifyLogin();
  private:
    string name;
    string address;
    string email;
    string shippingInfo;
    ShoppingCart myCart;
    Order myOrders;
};

Customer::Customer() : User(){
  name = "";
  address ="";
  email = "";
  shippingInfo = "";
  myCart = ShoppingCart();
  myOrders = Order();
}

Customer::Customer(string UserId, string password, string loginStatus, string name, string add, string eml, string shippInfo, ShoppingCart cart, Order order) : User( UserId, password, loginStatus) {
  this -> name = name;
  this -> address =add;
  this -> email = eml;
  this -> shippingInfo = shippInfo;
  this -> myCart = cart;
  this -> myOrders = order;
}

bool Customer::registerC(){
  if(name == "" &&   address == "" && email == "" && shippingInfo == ""){
    return true; //Devuelve verdadero si el Customer no tiene info, es decir no se ha registrado
  }
  else{
    return false; //Devuelve falso porque ya hay datos del Customer y no es necesario registrarlo
  }
}

bool Customer::verifyLogin(){
  if(this -> loginStatus != "Logged In"){
    return false;
  }
  else{
    return true;
  }
}

bool Customer::login(){
  if(this -> verifyLogin() == true){
    return false;
  }
  else{
    this -> loginStatus = "Logged In";
    return true;
  }
}

void Customer::updateProfile(Customer c){
  string newName = c.getName();
  string newAddress = c.getAddress();
  string newEmail = c.getEmail();
  string newShipping = c.getShippingInfo();
  name = newName;
  address = newAddress;
  email = newEmail;
  shippingInfo = newShipping;
}
