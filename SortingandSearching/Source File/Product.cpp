#include "Product.h"
#include <iostream>

// Default constructor
Product::Product() : name(""), price(0.0), rating(0.0) {}

// Parameterized constructor
Product::Product(const std::string& name, double price, double rating)
    : name(name), price(price), rating(rating) {}

// Getters
std::string Product::getName() const { return name; }
double Product::getPrice() const { return price; }
double Product::getRating() const { return rating; }

// Setters
void Product::setName(const std::string& name) { this->name = name; }
void Product::setPrice(double price) { this->price = price; }
void Product::setRating(double rating) { this->rating = rating; }

// Display product details
void Product::display() const {
    std::cout << "Product Name: " << name << ", Price: " << price << ", Rating: " << rating << "\n";
}
