#include "AudioProduct.hpp"
#include <iostream>
#include <string>
using std::string;

AudioProduct::AudioProduct(string aProdName, double aPrice, NameType aSinger) :
Product(aProdName, aPrice) // base class constructor
{
 singer = aSinger;
 prod_id_t newID = getNewID();
 setProdID(newID);
}
// setter block
void AudioProduct::setSinger(NameType aSinger) {
  singer = aSinger;
}
void AudioProduct::setGenre(GenreType aGenre) {
  genre = aGenre;
}

NameType AudioProduct::getSinger() {
  return singer;
}
// getter block
GenreType AudioProduct::getGenre() {
  return genre;
}
string AudioProduct::getProdTypeStr() {
  return "Music";
}
// display product information
void AudioProduct::displayProdInfo() {
  std::cout << "Product Name: " << getProdName() << std::endl;
  std::cout << "Product Price: $" << getPrice() << std::endl;
  std::cout << "Product Type: " << getProdID() << std::endl;
  std::cout << "Product review: " << getReviewRate() << std::endl;
}

// display contents with a switch case to go through the enumerator values
void AudioProduct::displayContentsInfo() {
string genreString;

  switch (genre) {
    case Blues:
      genreString = "Blues";
      break;
    case Classical:
      genreString = "Classical";
      break;
    case Country:
      genreString = "Country";
      break;
    case Folk:
      genreString = "Folk";
      break;
    case Jazz:
      genreString = "Jazz";
      break;
    case Metal:
      genreString = "Metal";
      break;
    case Pop:
      genreString = "Pop";
      break;
    case RnB:
      genreString = "RnB";
      break;
    case Rock:
      genreString = "Rock";
      break;
    default:
      genreString = "";
      break;
  }

  std::cout << "The singer is: " << singer.firstName << " " << singer.lastName << std::endl;
  std::cout << "The genre is: " << genreString << std::endl;
}