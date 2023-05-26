#ifndef CART_H
#define CART_H

#include "Product.hpp"
#include <string>
#include <vector>
#include <stdexcept>
using std::string;
// maximum number of items in cart set as a constant
const int MAX_ITEMS = 7;
// cart overflow class 
class CartOverFlowException: public std::logic_error {
  private:
    Product* theProduct;
  public:
    CartOverFlowException(Product* theProduct, const string& message);
};

// cart underflow class
class CartUnderFlowException: public std::logic_error {

  public:
    CartUnderFlowException(const string& message = "The cart is empty");
};

class Customer;

class Cart {

  private:
    int itemNum;
    NameType owner;
    std::vector<Product*> purchasedItems;
    Customer* customer;
    bool isCartFull();
    bool isCartEmpty();
    // I moved the addItem to the private section as I only want them to be called indirectly through the overloaded operators that I added
    bool addItem(Product* theProduct);
   
  public:
    Cart();
    void setOwner(NameType theOwner);
    void setItemNum(int aNum);
    void setPurchasedItems(int index, Product* newValue);
    NameType getOwner();
    int getItemNum();
    int getPurchasedItems();
    bool removeItem(prod_id_t theProductID);
    void displayCart();

    void setCustomer(Customer* aCustomer);
    Customer* getCustomer();
    Cart& operator+(Product&);
    friend std::ostream& operator<< (std::ostream& os, Cart& aCart) {
       aCart.displayCart();
       return os;
    }
};




#endif 