#include "GameProduct.hpp"
#include <iostream>
#include <string>
using std::string;

GameProduct::GameProduct(string aProdName, double aPrice, ConsoleType aConsole) :
   Product(aProdName, aPrice) // base class constructor

{
  console = aConsole;
  prod_id_t newID = getNewID();
  setProdID(newID);
}

void GameProduct::setConsole(ConsoleType aConsole) {
  console = aConsole;
}
void GameProduct::setVersion(string aVersion) {
  version = aVersion;
}
ConsoleType GameProduct::getConsole() {
  return console;
}
string GameProduct::getVersion() {
  return version;
}

string GameProduct::getProdTypeStr() {
  return "Game";
}

void GameProduct::displayProdInfo() {
  std::cout << "Product Name: " << getProdName() << std::endl;
  std::cout << "Product Price: $" << getPrice() << std::endl;
  std::cout << "Product ID: " << getProdID() << std::endl;
  std::cout << "Product review: " << getReviewRate() << std::endl;
}

void GameProduct::displayContentsInfo() {
string consoleString;

  switch (console) {
    case XBox:
      consoleString = "XBoX";
      break;
    case PlayStation:
      consoleString = "PlayStation";
      break;
    case Nintendo:
      consoleString = "Nintendo";
      break;
    default:
      consoleString = "";
      break;
  }

  std::cout << "The console is: " << consoleString << std::endl;
  



  
}