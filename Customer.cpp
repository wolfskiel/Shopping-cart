#include "Customer.hpp"
#include <string>
#include <iostream>
using std::string;

Customer::Customer(NameType theName, Cart& theCart) {
  name = theName;
  email = "";
  balance = 0.0;
  cart = &theCart;
  cart->setCustomer(this); // this pointer points to the customer object being constructed 
}
/// standard getters and setters
void Customer::setCart(Cart* aCart) {
  cart = aCart;
}
void Customer::setEmail(string anEmailAddr) {
  email = anEmailAddr;
}
NameType Customer::getName() {
  return name;
}
string Customer::getEmail() {
  return email;
}
double Customer::getBalance() {
  return balance;
}
Cart Customer::getCart() {
  return *cart;
}
// update balance for the cart 
void Customer::updateBalance(double delta) {
  balance += delta;
}
// displaying the report with customer, name email and balance
void Customer::displayCustomerReport() {
    std::cout << "Customer Name: " << name.firstName << " " << name.lastName << std::endl;
    std::cout << "Email: " << email << std::endl;
    std::cout << "Balance: $" << balance << std::endl;

}