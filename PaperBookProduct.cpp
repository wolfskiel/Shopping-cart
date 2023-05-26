#include "PaperBookProduct.hpp"
#include <string>
#include <iostream>
using std::string;

PaperBookProduct::PaperBookProduct(string aProdName, double aPrice, NameType anAuthor, int pageNum) : 
  BookProduct(aProdName, aPrice, anAuthor, pageNum) // base class constructor
{

}

string PaperBookProduct::getProdTypeStr() {
  return "PaperBook";
}