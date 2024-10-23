#include "SortingAlgorithms.h"
#include <algorithm>

// Bubble Sort
void bubbleSort(std::vector<Product>& products, ComparisonFunc compare) {
    int n = products.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (!compare(products[j], products[j + 1])) {
                std::swap(products[j], products[j + 1]);
            }
        }
    }
}

// Quick Sort Helper
int partition(std::vector<Product>& products, int low, int high, ComparisonFunc compare) {
    Product pivot = products[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; ++j) {
        if (compare(products[j], pivot)) {
            ++i;
            std::swap(products[i], products[j]);
        }
    }
    std::swap(products[i + 1], products[high]);
    return (i + 1);
}

// Quick Sort
void quickSort(std::vector<Product>& products, int low, int high, ComparisonFunc compare) {
    if (low < high) {
        int pi = partition(products, low, high, compare);
        quickSort(products, low, pi - 1, compare);
        quickSort(products, pi + 1, high, compare);
    }
}

// Comparison functions
bool compareByNameAsc(const Product& a, const Product& b) { return a.getName() < b.getName(); }
bool compareByPriceAsc(const Product& a, const Product& b) { return a.getPrice() < b.getPrice(); }
bool compareByRatingAsc(const Product& a, const Product& b) { return a.getRating() < b.getRating(); }

bool compareByNameDesc(const Product& a, const Product& b) { return a.getName() > b.getName(); }
bool compareByPriceDesc(const Product& a, const Product& b) { return a.getPrice() > b.getPrice(); }
bool compareByRatingDesc(const Product& a, const Product& b) { return a.getRating() > b.getRating(); }
