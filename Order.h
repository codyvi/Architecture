#pragma once

#include "OrderDetails.h"
#include "ShippingInfo.h"
#include <ctime>
#include<string>

class Order{
  public:
    //Constructores
    Order();
    Order(int oID, string dateCreated, string dateShipped, string status, OrderDetails, ShippingInfo);
    //Gets
    int getOrderId(){return orderId;};
    string getDateCreated(){return dateCreated;};
    string getDateShipped(){return dateShipped;};
    string getStatus(){return status;};
    //Sets
    void setOrderId(int i){orderId = i;};
    void setDateCreated(string s){dateCreated = s;};
    void setDateShipped(string s){dateShipped = s;};
    void setStatus(string s){status = s;};
    //Funciones
    void placeOrder(time_t date);

    private:
      int orderId;
      string dateCreated;
      string dateShipped;
      string status;
      OrderDetails orderDetails;
      ShippingInfo shipInfo;
};

Order::Order(){
  orderId = 0;
  dateCreated = "";
  dateShipped = "";
  status = "";
  orderDetails = OrderDetails();
  shipInfo = ShippingInfo();
}

Order::Order(int oID, string dateCreated, string dateShipped, string status, OrderDetails order, ShippingInfo ship){
  this -> orderId = oID;
  this -> dateCreated = dateCreated;
  this -> dateShipped = dateShipped;
  this -> status = status;
  this -> orderDetails = order;
  this -> shipInfo = ship;
}

void Order::placeOrder(time_t date){
  this -> orderId = 1;
  this -> dateCreated = to_string(date);
  this -> dateShipped = "Not shipped";
  this -> status = "Created";
}
