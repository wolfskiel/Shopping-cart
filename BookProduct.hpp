#ifndef BOOKPRODUCT_H
#define BOOKPRODUCT_H
#include <string>
#include "Product.hpp"
using std::string;

class BookProduct : public Product {
  private:
    NameType author;
    int pages;

  public:
    BookProduct(string aProdName, double aPrice, NameType anAuthor, int pageNum);
    void setAuthor(NameType anAuthor);
    void setPages(int aPage);
    NameType getAuthor();
    int getPages();
    virtual string getProdTypeStr() = 0;
    virtual void displayProdInfo();
    virtual void displayContentsInfo();





};

#endif