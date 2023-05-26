#include "VideoProduct.hpp"
#include <string>
#include <iostream>
using std::string;

VideoProduct::VideoProduct(string aProdName, double aPrice, NameType aDirector) :
Product(aProdName, aPrice) // base class constructor
{
  director = aDirector;
  prod_id_t newID = getNewID();
  setProdID(newID);
}
// block of setters
void VideoProduct::setDirector(NameType aDirector) {
  director = aDirector;
}

void VideoProduct::setReleaseYear(int aReleaseYear) {
  releaseYear = aReleaseYear;
}
void VideoProduct::setRunTime(int aRunTime) {
  runTime = aRunTime;
}
void VideoProduct::setFilmRate(FilmRateType aRate) {
  filmRate = aRate;
}


//block of getters
NameType VideoProduct::getDirector() {
  return director;
}
FilmRateType VideoProduct::getFilmRate() {
  return filmRate;
}
int VideoProduct::getReleaseYear() {
  return releaseYear;
}
int VideoProduct::getRunTime() {
  return runTime;
}
string VideoProduct::getProdTypeStr() {
  return "Movie";
}

// checks if the year given is greater than than the year of the release to tell if it is a new movie
bool VideoProduct::isNewRelease(int theYear) {
  
  if (theYear > releaseYear) {
    return false;
  } else if (theYear <= releaseYear) {
    return true;
  }
}
// displaying the product information 
void VideoProduct::displayProdInfo() {
  std::cout << "Product Name: " << getProdName() << std::endl;
  std::cout << "Product Price: $" << getPrice() << std::endl;
  std::cout << "Product ID: "  << getProdID() << std::endl;
  std::cout << "Product review: " << getReviewRate() << std::endl;
}
// displaying the contents info this is using an switch case to output the correct value 
void VideoProduct::displayContentsInfo() {
string ratingString;
  
  switch (filmRate) {
    case NotRated:
      ratingString = "Not Rated";
      break;
    case G:
      ratingString = "G";
      break;
    case PG:
      ratingString = "PG";
      break;
    case PG_13:
      ratingString = "PG-13";
      break;
    case R:
      ratingString = "R";
      break;
    case NC_17:
      ratingString = "NC-17";
      break;
    default:
      ratingString = "";
      break;
  }

  std::cout << "The director is: " << director.firstName << " " << director.lastName << std::endl;
  std::cout << "The rating is: " << ratingString << std::endl;
  std::cout << "The release year is: " << releaseYear << std::endl;
  std::cout << "The runtime is: " << runTime << " minutes" << std::endl;
}