#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include "Cart.hpp"
#include "Product.hpp"
#include <string>
using std::string;

class Customer {

private:
  NameType name;
  string email;
  double balance;
  Cart* cart;
public:
  
  Customer(NameType aName, Cart& theCart);
  NameType getName();
  string getEmail();
  double getBalance();
  Cart getCart();
  void setCart(Cart* aCart);
  void setEmail(std::string anEmailAddr);
  void displayCustomerReport();
  void updateBalance(double delta);
};

#endif