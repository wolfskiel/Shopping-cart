#include "Cart.hpp"
#include "Customer.hpp"
#include <string>
#include <iostream>
#include <vector>
#include <stdexcept>
using std::string;


// underflow and overflow class implementation

CartOverFlowException::CartOverFlowException(Product* theProduct, const string& message) :
std::logic_error("Cart overflow!: "  + message)
{
}

CartUnderFlowException::CartUnderFlowException(const string& message) :
std::logic_error("Cart underflow!: "  + message)
{
}

// cart constructor
Cart::Cart(){
  itemNum = 0; // Initialize itemNum to 0
  purchasedItems.resize(MAX_ITEMS); // setting the vector to MAX_ITEMS length
}

// customer getter and setter
void Cart::setCustomer(Customer* aCustomer) {
  customer = aCustomer;
}
Customer* Cart::getCustomer() {
  return customer;
}
/*void Cart::setOwner(NameType theOwner) {
  owner = theOwner;
}*/
void Cart::setItemNum(int aNum) {
  itemNum = aNum;
}
void Cart::setPurchasedItems(int index, Product* newValue){
  purchasedItems[index] = newValue;
}
/*NameType Cart::getOwner() {
  return owner;
}*/
int Cart::getItemNum() {
  return itemNum;
}

// operator overloader definitions for adding items 
Cart& Cart::operator+ (Product& theProduct) {
  addItem(&theProduct);
  return *this;
}

// addItem definition
bool Cart::addItem(Product* theProduct)
{
  if (theProduct == nullptr) {
    std::cout << "Error: Cannot add nullptr to cart" << std::endl;
    return false;
  }
  // item won't be added if the cart is checked and seen to be full, the exception will be thrown and the last item that tried to be added will be removed
  if (isCartFull()) {
throw CartOverFlowException(theProduct,  theProduct->getProdName() + " Product ID: " + std::to_string(theProduct->getProdID()) + " Max Items: " + std::to_string(MAX_ITEMS) + "\n");
  }
  // add the product to the start of the vector
   purchasedItems.insert(purchasedItems.begin(), theProduct);

  // increment the number of items in the cart
  ++itemNum;

  // get the customer associated with the cart
  Customer* customer = getCustomer();

  // if the customer is not null, update their balance
  if (customer != nullptr) {
    customer->updateBalance(theProduct->getPrice());
  }

  // return true to indicate that the item was added successfully
  return true;
}
// remove item defintion
bool Cart::removeItem(prod_id_t theProductID) {
  
  if (isCartEmpty()) {
    throw CartUnderFlowException("Cart is empty");
  }
  
  for (int i = 0; i < itemNum; i++) {
    if (purchasedItems[i]->getProdID() == theProductID) {
      // get the customer associated with the cart
      Customer* customer = getCustomer();

      // if the customer is not null, update their balance
      if (customer != nullptr) {
        customer->updateBalance(-purchasedItems[i]->getPrice());
      }

      // remove the item from the vector
      purchasedItems.erase(purchasedItems.begin() + i);

      // decrement the number of items in the cart
      itemNum--;

      return true;
    }
  }
  return false; // product not found in cart
}

// displaying the cart
void Cart::displayCart()
{
  std::cout << "Testing Cart" << std::endl;
  std::cout << "============" << std::endl;
  std::cout << std::endl;

  Customer* customer = getCustomer();
  
  // if customer is not null print out
  
  if (customer != nullptr) {
    std::cout << "Cart Owner: " << customer->getName().firstName << " " << customer->getName().lastName << std::endl;
  } else {
    std::cout << "Cart Owner: (unknown)" << std::endl;
  }
  std::cout << std::endl;
  
   // Check if the index is out of bounds
  
  if (itemNum > MAX_ITEMS)
  {
    std::cout << "Error: Invalid index" << std::endl;
    return;
  }
  
  for (int i = 0; i < itemNum; ++i)
  {
    // Print the product type and information
    // first check if the ptr at the index is invalid
    if (purchasedItems[i] == nullptr) {
    std::cout << "Invalid pointer found at index " << i << std::endl; 
    }
    else {
    std::cout << "[" << purchasedItems[i]->getProdTypeStr() << "]" << std::endl;
    purchasedItems[i]->displayProdInfo();
    purchasedItems[i]->displayContentsInfo();
    std::cout << std::endl;
    }
  }

  // Calculate the total cost of the items in the cart
  
  double totalCost = 0;
  for (int i = 0; i < itemNum; ++i)
  {
    totalCost += purchasedItems[i]->getPrice();
  }

  std::cout << "===== Summary of Purchase ======" << std::endl;
  std::cout << "Total number of purchases: " << itemNum << std::endl;
  std::cout << "Total purchasing amount: $" << totalCost << std::endl;
  std::cout << "Average cost: $" << (totalCost / itemNum) << std::endl;
}

// cart full check
bool Cart::isCartFull() {
  return itemNum == MAX_ITEMS; // just compare itemNum to max items for full check
}

bool Cart::isCartEmpty() {
  return purchasedItems.empty(); // using built in function of vector class to check if vector is empty
}

