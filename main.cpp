#include "Product.hpp"
#include "AudioProduct.hpp"
#include "BookProduct.hpp"
#include "EBookProduct.hpp"
#include "PaperBookProduct.hpp"
#include "VideoProduct.hpp"
#include "GameProduct.hpp"
#include "Cart.hpp"
#include "Customer.hpp"

#include <iostream>
#include <string>
using std::string;

int main() {
  // set the user name that will be set in customer
  NameType aName {"John", "Greene"};
  // cart object
  Cart myCart;
  // setting name in the cart object initializer
  Customer me(aName, myCart);
  // set email address
  me.setEmail("me@gmail.com");
  // try except error handle
  try {
    // set name variable for artist
    
    NameType aArtist1;
    aArtist1 = {"Beetles", ""};
    
    // dynamic declaring and defining 
    
    AudioProduct* music1 = new AudioProduct ("Yesterday", 16.5, aArtist1);
    music1->setGenre(GenreType::Pop);
    music1->setReviewRate(9.8);
    
    // repeat for 7 more objects varying type
    
    NameType aDirector1;
    aDirector1 = {"Ridley", "Scott"};
    VideoProduct* video1 = new VideoProduct ("Aliens", 15.3, aDirector1);
    video1->setReleaseYear(1986);
    video1->setReviewRate(9.8);
    video1->setRunTime(154);
    video1->setFilmRate(FilmRateType::R);


    NameType aDirector2;
    aDirector2 = {"Peter", "Jackson"};
    VideoProduct* video2 = new VideoProduct ("The Lord of the Rings: The Fellowship of the Ring", 15.3, aDirector2);
    video2->setReleaseYear(2001);
    video2->setReviewRate(10);
    video2->setRunTime(178);
    video2->setFilmRate(FilmRateType::PG_13);

 
    NameType aDirector3 {"Robert", "wise"};
    VideoProduct* video3 = new VideoProduct ("Sound of Music", 22, aDirector3);
    video3->setReviewRate(9.2);
    video3->setFilmRate(FilmRateType::G);
    video3->setReleaseYear(1965);
    video3->setRunTime(175);
 

    NameType aArtist2 {"Michael", "Jackson"};
    AudioProduct* music2 = new AudioProduct("We are the World", 13.75, aArtist2);
    music2->setGenre(GenreType::Country);
    music2->setReviewRate(9.1);
 
    NameType aAuthor1 {"Ernest", "Hemmingway"};
    EBookProduct* ebook1 = new EBookProduct("The Old Man and The Sea", 8.3, aAuthor1,127);
    ebook1->setReviewRate(9.5);

  
    NameType aDirector4 {"George", "Lucas"};
    VideoProduct* video4 = new VideoProduct {"Star Wars", 22, aDirector4};
    video4->setReviewRate(8.5);
    video4->setFilmRate(FilmRateType::PG);
    video4->setReleaseYear(1977);
    video4->setRunTime(120);


 
    GameProduct* game1 = new GameProduct{"Halo", 60, XBox};
    game1->setVersion("1");
    game1->setReviewRate(0.5);

    
    // add to cart using operator overloading 
    // for some reason adding them in reverse order that they were declared outputs them in the correct order
    myCart = myCart + *game1 + *video4 + *ebook1 + *music2 + *video3 + *video2 + *video1 + *music1;
    
    // catch exception
  } catch (CartOverFlowException& e) {
      std::cerr << e.what() << std::endl;
    }
  // display report
  
  me.displayCustomerReport();
  myCart.displayCart();
  
  
  
 
return 0;
}

