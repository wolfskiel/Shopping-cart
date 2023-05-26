#ifndef EBOOKPRODUCT_H
#define EBOOKPRODUCT_H
#include <string>
#include "BookProduct.hpp"
using std::string;

class EBookProduct : public BookProduct {
  public:
    EBookProduct(string aProdName, double aPrice, NameType anAuthor,int pageNum);
    virtual string getProdTypeStr();
};

#endif