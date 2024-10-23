#pragma once

#include <string>

class Product {
private:
    std::string name;
    double price;
    double rating;

public:
    // Constructors
    Product();
    Product(const std::string& name, double price, double rating);

    // Getters
    std::string getName() const;
    double getPrice() const;
    double getRating() const;

    // Setters
    void setName(const std::string& name);
    void setPrice(double price);
    void setRating(double rating);

    // Display product details
    void display() const;
};
