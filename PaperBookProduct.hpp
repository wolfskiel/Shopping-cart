#ifndef PAPERBOOKPRODUCT_H
#define PAPERBOOKPRODUCT_H
#include "BookProduct.hpp"
#include <string>
using std::string;

class PaperBookProduct : public BookProduct{
  public:
    PaperBookProduct(string aProdName, double aPrice, NameType anAuthor, int pageNum);
    virtual string getProdTypeStr();
};
#endif
