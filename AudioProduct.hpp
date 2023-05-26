#ifndef AUDIOPRODUCT_H
#define AUDIOPRODUCT_H
#include "Product.hpp"
#include <string>

enum GenreType {Blues, Classical,Country, Folk, Jazz, Metal, Pop, RnB, Rock};



class AudioProduct : public Product {
  private:
    NameType singer;
    GenreType genre;
  public:
    AudioProduct(string aProdName, double aPrice, NameType aSinger);
    void setSinger(NameType aSinger);
    void setGenre(GenreType aGenre);
    NameType getSinger();
    GenreType getGenre();
    string getProdTypeStr();
    void displayProdInfo();
    void displayContentsInfo();
};

#endif