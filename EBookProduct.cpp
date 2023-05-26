#include "EBookProduct.hpp"
#include <iostream>
#include <string>
using std::string;

EBookProduct::EBookProduct(string aProdName, double aPrice, NameType anAuthor, int pageNum) : 
  BookProduct(aProdName, aPrice, anAuthor, pageNum) // base class constructor
{
  
}
string EBookProduct::getProdTypeStr() {
  return "Ebook";
}