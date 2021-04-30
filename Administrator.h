#include "User.h"

class Administator : public User{
  public:
    //Constructores
    Administator();
    Administator(string, string, string, string aName, string email);
    //Gets
    string getAdminName(){return adminName;};
    string getEmail(){return email;};
    //Sets
    void setAdminName(string s){adminName = s;};
    void setEmail(string s){email = s;};
    //Funciones
    bool updateCatalog();
    bool verifyLogin();
  
  private:
    string adminName;
    string email;
};

Administator::Administator() :User() {
  adminName = "";
  email = "";
}

Administator::Administator(string UserId, string password, string loginStatus, string aName, string email) :User( UserId, password, loginStatus) {
  this -> adminName = aName;
  this -> email = email;
}

bool Administator::updateCatalog(){
return true;
}

bool Administator::verifyLogin(){
  if(this -> loginStatus != "Logged In"){
    return false;
  }
  else{
    return true;
  }
}


