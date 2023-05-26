****
*  **Class**     :  CSC 2312 Fall 2022
*  **Name        : John Greene**                                       
*  **Due Date**  :  December 17, 2022
****
# Read Me

## Description of the program 

This program contains a Base abstract class that has multiple derived classes used to virtual simulate a online shopping cart. There is the abillity to add/subtract items to a cart, determine the total cost/average cost of cart and to give information on the customer and the products within the customers cart.


##  Source files
- ***main.cpp***
  main.cpp is in REPL it drives the program.
- ***Product.hpp***
   Contains the a typdef prod_id_t set to int data type outside of the class definition and a structure NameType containg a first and last name string. Class contains private a public member variables and functions notably 2 pure virtual functions.
- ***Product.cpp***
   Class implementation file containing the constructor for the Product class and all the functions.
- ***AudioProduct.hpp***
   Child class of product class creates a product of Audio type to be used for music products. Header file contains all declerations typical getters and setters. Contains an enumerator defintion outside the class GenreType used to define what genre of music the product is.
- ***AudioProduct.cpp***
  The implementation of the AudioProduct class file.
- ***BookProduct.hpp***
  Contains the child class of Product BookProduct contains header file with defintions, BookProduct is a base class for two child classes and is not called directly the child classes are EBookProduct and PaperBookProduct.
- ***BookProduct.cpp***
  Contains the definition for all declared functions in BookProduct header file
- ***EBookProduct.hpp***
  EBookProduct a child class of BookProduct, uses the virtual functions in BookProduct to work headerfile contains declerations of functions and variables.
- ***EBookProduct.cpp***
  Implementation of EBookProduct 
- ***PaperBookProduct.hpp***
  Similar to EBookProduct a child class of BookProduct using virtual functions of BookProduct. Headerfile contains declerations of functions and variables.
- ***PaperBookProduct.cpp***
  Implementation of BookProduct
- ***VideoProduct.hpp***
  Child class of Product class header file contains decleration for VideoProduct functions and variables used for products that are movies.Contains a enumurator FilmRateType used when declaring what suggested audience rating the product has.
- ***VideoProduct.cpp***
  Implementation of VideoProduct class
- ***GameProduct.hpp***
  GameProduct child class of Product contains header file definitions. Contains a enumerator used when declaring what kind of console the product is on.
- ***GameProduct.cpp***
  GameProduct implementation.
- ***Cart.hpp***
  Longest file used in program, contains many functions and variables used to create a virtual cart it can add/remove items, check for overflow of the cart or underflow and print out the details of the cart. Has a 1:1 relationship with Customer class used to create a customer that would use the cart. File contains all declerations for member variables and functions. Contains a overflow and underflow class seperate from the main class.
- ***Cart.cpp***
  Implementation of the headerfile contains all defintions.
- ***Customer.hpp***
  Customer class is used to set parameters for the customer what their name is, email address, total cart balance. This class has a 1:1 relationship with the cart class.
- ***Customer.cpp***
  Class implementation for customer



   
##  Circumstances of program

The program runs successfully.  
Test output shown in output.txt file.

