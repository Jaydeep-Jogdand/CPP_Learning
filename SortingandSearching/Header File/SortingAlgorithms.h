#pragma once

#include <vector>
#include "Product.h"

// Function pointers for comparison
typedef bool (*ComparisonFunc)(const Product&, const Product&);

// Sorting algorithms
void bubbleSort(std::vector<Product>& products, ComparisonFunc compare);
void quickSort(std::vector<Product>& products, int low, int high, ComparisonFunc compare);
void mergeSort(std::vector<Product>& products, int left, int right, ComparisonFunc compare);

// Comparison functions
bool compareByNameAsc(const Product& a, const Product& b);
bool compareByPriceAsc(const Product& a, const Product& b);
bool compareByRatingAsc(const Product& a, const Product& b);

bool compareByNameDesc(const Product& a, const Product& b);
bool compareByPriceDesc(const Product& a, const Product& b);
bool compareByRatingDesc(const Product& a, const Product& b);
