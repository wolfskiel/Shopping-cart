#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using std::string;

typedef int prod_id_t;

struct NameType{
  string firstName;
  string lastName;
};


class Product {

  private:
    int productID;
    string productName;
    double price;
    float reviewRate;
    static prod_id_t nextID;
    static prod_id_t createNewID();

  public:

    Product(string aProdName, double aPrice); 
    void setProdID(prod_id_t theID);
    void setProdName(string theName);
    void setPrice(double thePrice);
    void setReviewRate(float theRate);
    prod_id_t getNewID();
    prod_id_t getProdID();
    string getProdName();
    double getPrice();
    float getReviewRate();
    virtual string getProdTypeStr() = 0;
    virtual void displayContentsInfo() = 0;
    virtual void displayProdInfo();

    friend std::ostream& operator<< (std::ostream& os, Product& aProduct) {
        aProduct.displayProdInfo();
        return os;
    }
};

#endif