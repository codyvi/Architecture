#pragma once


class OrderDetails{
  public:
    //Constructores
    OrderDetails();
    OrderDetails(int oID, int pId, string pName, int qty, float uCost, float sub);
    //Gets
    int getOrderId(){return orderId;};
    int getProductId(){return productId;};
    string getProductName(){return productName;};
    int getQuantity(){return quantity;};
    float getUnitCost(){return unitCost;};
    float getSubtotal(){return subtotal;};
    //Sets
    void setOrderId(int i){orderId = i;};
    void setProductId(int i){productId = i;};
    void setProductName(string s){productName = s;};
    void setQuantity(int i){quantity = i;};
    void setUnitCost(float f){unitCost = f;};
    void setSubtotal(float f){subtotal = f;};
    //Funciones
    long CalcPrice();

  private:
    int orderId;
    int productId;
    string productName;
    int quantity;
    float unitCost;
    float subtotal;
};

OrderDetails::OrderDetails(){
  orderId = 0;
  productId = 0;
  productName = "";
  quantity = 0;
  unitCost = 0.0f;
  subtotal = 0.0f;
}

OrderDetails::OrderDetails(int oID, int pId, string pName, int qty, float uCost, float sub){
  this -> orderId = oID;
  this -> productId = pId;
  this -> productName = pName;
  this -> quantity = qty;
  this -> unitCost = uCost;
  this -> subtotal = sub;
}

long OrderDetails::CalcPrice(){
  long price = (long)unitCost + 100;
  return price;
}