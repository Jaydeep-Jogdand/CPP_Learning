#pragma once

#include <vector>
#include "Product.h"

// Binary search by name
int binarySearchByName(const std::vector<Product>& products, const std::string& name);

// Binary search by price
int binarySearchByPrice(const std::vector<Product>& products, double price);
