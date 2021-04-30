#pragma once


using namespace std;


class User{
  public:
    //Constructores
    User();
    User(string Uid, string psswd, string status);
    //Gets
    string getUserID(){return UserId;};
    string getPassword(){return password;};
    string getLoginStatus(){return loginStatus;};
    //Sets
    void setUserId(string s){UserId = s;};
    void setPassword(string s){password = s;};
    void setLoginStatus(string s){loginStatus = s;};
    //Funciones
    virtual bool verifyLogin();

  protected:
    string loginStatus; //La cambie a protected para poderla usar dentro de las demás clases y hacer el verifyLogin
  
  private:
    string UserId;
    string password;
    
};

User::User(){
  UserId = "";
  password = "";
  loginStatus = "";
}

User::User(string Uid, string psswd, string status){
  UserId = Uid;
  password = psswd;
  loginStatus = status;
}

bool User::verifyLogin(){
  if(loginStatus == "Logged in"){
    return true;
  }
  else{
    return false;
  }
}

