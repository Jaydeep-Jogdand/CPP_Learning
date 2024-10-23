#include "BinarySearch.h"

// Binary search by name
int binarySearchByName(const std::vector<Product>& products, const std::string& name) {
    int low = 0, high = products.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (products[mid].getName() == name)
            return mid;
        if (products[mid].getName() < name)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // Not found
}

// Binary search by price
int binarySearchByPrice(const std::vector<Product>& products, double price) {
    int low = 0, high = products.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (products[mid].getPrice() == price)
            return mid;
        if (products[mid].getPrice() < price)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // Not found
}
