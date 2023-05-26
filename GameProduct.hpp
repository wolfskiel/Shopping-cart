#ifndef GAMEPRODUCT_H
#define GAMEPRODUCT_H
#include "Product.hpp"
#include <string>
using std::string;

enum ConsoleType {XBox,PlayStation,Nintendo};

class GameProduct : public Product {

  private:
    string version;
    ConsoleType console;

  public:
    GameProduct(string aProdName, double aPrice, ConsoleType aConsole);
    ConsoleType getConsole();
    string getVersion();
    void setConsole(ConsoleType aConsole);
    void setVersion(string aVersion);
    
    virtual string getProdTypeStr();
    virtual void displayProdInfo();    
    virtual void displayContentsInfo();


};

#endif