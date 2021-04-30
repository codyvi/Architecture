#pragma once

class ShippingInfo{
  public:
    //Constructores
    ShippingInfo();
    ShippingInfo(int sId, int sRId, int sCost, string sType);
    //Gets
    int getShippingId(){return shippingId;};
    int getShippingRegion(){return shippingRegionId;};
    int getShippingCost(){return shippingCost;};
    string getShippingType(){return shippingType;};
    //Sets
    void setShippingId(int i){shippingId = i;};
    void setShippingRegion(int i){shippingRegionId = i;};
    void setShippingCost(int i){shippingCost = i;};
    void setShippingType(string s){shippingType = s;};
    //Funciones
    void updateShippingInfo();

  private:
    int shippingId;
    int shippingRegionId;
    int shippingCost;
    string shippingType;
};

ShippingInfo::ShippingInfo(){
  shippingId = 0;
  shippingRegionId = 0;
  shippingCost = 0;
  shippingType = "";
}

ShippingInfo::ShippingInfo(int sId, int sRId, int sCost, string sType){
  this -> shippingId = sId;
  this -> shippingRegionId = sRId;
  this -> shippingCost = sCost;
  this -> shippingType = sType;
}

void ShippingInfo::updateShippingInfo(){
  this -> setShippingId(this -> shippingId);
  this -> setShippingCost(this -> shippingCost); 
  this -> setShippingRegion(this -> shippingRegionId); 
  this -> setShippingType(this -> shippingType); 
}