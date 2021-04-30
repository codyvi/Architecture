#include <iostream>
#include <ctime>
#include "Customer.h"
#include "Administrator.h"
#include <string>

using namespace std;

int main() {
  //Pequeña prueba 
  time_t now = time(0);

  ShoppingCart cart(1,2,3,now);
  OrderDetails oDetails(1012,3624, "Libros", 200, 20.5, 20.2);
  ShippingInfo shipInfo(1014, 2032, 200, "Internacional");
  Order myOrder(1024,"24/04/2021", "Not Shipped", "Confirmed", oDetails, shipInfo);
  Customer customerConDatos("01","1234","Logged off","Pepe", "Cumbres", "pepe@email.com", "4334", cart, myOrder);
  
  cout << customerConDatos.getLoginStatus() << endl;
  customerConDatos.login();
  cout << customerConDatos.getLoginStatus() << endl;
  Administator newAdmin;

  string details = cart.viewCartDetails();
  time_t cartTime = cart.getDateAdded();
  cout << details << ctime(&cartTime) << endl;


  return 0;
}