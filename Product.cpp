#include "Product.hpp"
#include <iostream>
#include <string>
using std::string;
// initialize
prod_id_t Product::nextID = 1;

// contstructor defintion
Product::Product(string aProdName, double aPrice) {
  productName = aProdName;
  price = aPrice;
}
// getters and setters
void Product::setProdID(prod_id_t theID) {
  productID = theID;
}
void Product::setProdName(string theName) {
  productName = theName;
}
void Product::setPrice(double thePrice) {
  price = thePrice;
}
void Product::setReviewRate(float theRate) {
  reviewRate = theRate;
}
prod_id_t Product::getNewID() {
  return createNewID();
}
prod_id_t Product::getProdID() {
  return productID;
}
string Product::getProdName() {
  return productName;
}
double Product::getPrice() {
  return price;
}
float Product::getReviewRate() {
  return reviewRate;
}
// creating new ID

prod_id_t Product::createNewID()
{
  return nextID++;
}
// virtual function displays attributes in product class then invokes displayContentsInfo()
void Product::displayProdInfo() {
  std::cout << "the ID is: " << productID << "the product name is: " << productName << "the price is: $" << price << "the review rate is: " << reviewRate << std::endl;
  displayContentsInfo();
}
