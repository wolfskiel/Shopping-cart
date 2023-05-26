#include "BookProduct.hpp"
#include <iostream>
#include <string>
using std::string;

BookProduct::BookProduct(string aProdName, double aPrice, NameType anAuthor,int pageNum) : 
  Product(aProdName, aPrice) // base class constructor
{
  author = anAuthor;
  pages = pageNum;
  prod_id_t newID = getNewID();
  setProdID(newID);
  }

void BookProduct::setAuthor(NameType anAuthor) {
  author = anAuthor;
}

void BookProduct::setPages(int aPage) {
  pages = aPage;
}

NameType BookProduct::getAuthor() {
  return author;
}

int BookProduct::getPages() {
  return pages;
}

void BookProduct::displayProdInfo(){
  std::cout << "Product Name: " << getProdName() << std::endl;
  std::cout << "Product Price: " << getPrice() << std::endl;
  std::cout << "Product ID: "  << getProdID() << std::endl;
  std::cout << "Product review: " << getReviewRate() << std::endl;
}

void BookProduct::displayContentsInfo() {
 std::cout << "The author is: " << author.firstName << " " << author.lastName << std::endl;
 std::cout << "The number of pages is: " << pages;
 std::cout << std::endl;
}