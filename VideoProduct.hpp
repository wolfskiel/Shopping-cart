#ifndef VIDEOPRODUCT_H
#define VIDEOPRODUCT_H
#include <string>
#include "Product.hpp"
using std::string;

enum FilmRateType {NotRated, G, PG, PG_13, R, NC_17};

class VideoProduct : public Product {
  private:
    NameType director;
    FilmRateType filmRate;
    int releaseYear;
    int runTime;
  public:
    VideoProduct(string aProdName, double aPrice, NameType aDirector);
    void setDirector(NameType aDirector);
    void setFilmRate(FilmRateType aRate);
    void setReleaseYear(int aReleaseYear);
    void setRunTime(int aRunTime);
    NameType getDirector();
    FilmRateType getFilmRate();
    int getReleaseYear();
    int getRunTime();
    bool isNewRelease(int theYear);
    virtual string getProdTypeStr();
    virtual void displayProdInfo();
    virtual void displayContentsInfo();
    
    
};




#endif