#include <iostream>
#include <vector>
#include "Product.h"
#include "SortingAlgorithms.h"
#include "BinarySearch.h"

// Function to display all products
void displayProducts(const std::vector<Product>& products) {
    std::cout << "\nList of Products:\n";
    for (const auto& product : products) {
        product.display();
    }
}

// Function to add a product
void addProduct(std::vector<Product>& products) {
    std::string name;
    double price, rating;

    std::cout << "Enter product name: ";
    std::cin >> name;
    std::cout << "Enter product price: ";
    std::cin >> price;
    std::cout << "Enter product rating: ";
    std::cin >> rating;

    products.emplace_back(name, price, rating);
}

// Menu to select sorting order
ComparisonFunc chooseSortingOrder(int& attribute) {
    std::cout << "\nChoose sorting attribute:\n";
    std::cout << "1. Name\n";
    std::cout << "2. Price\n";
    std::cout << "3. Rating\n";
    std::cin >> attribute;

    int order;
    std::cout << "Choose sorting order:\n";
    std::cout << "1. Ascending\n";
    std::cout << "2. Descending\n";
    std::cin >> order;

    if (attribute == 1) {
        return order == 1 ? compareByNameAsc : compareByNameDesc;
    }
    else if (attribute == 2) {
        return order == 1 ? compareByPriceAsc : compareByPriceDesc;
    }
    else if (attribute == 3) {
        return order == 1 ? compareByRatingAsc : compareByRatingDesc;
    }
    return nullptr;
}

// Main program menu
int main() {
    std::vector<Product> products;
    int choice;

    do {
        std::cout << "\nE-commerce Product Sorting and Search Engine\n";
        std::cout << "1. Add Product\n";
        std::cout << "2. Display Products\n";
        std::cout << "3. Sort Products\n";
        std::cout << "4. Search Product by Name\n";
        std::cout << "5. Search Product by Price\n";
        std::cout << "6. Exit\n";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            addProduct(products);
            break;
        }
        case 2: {
            displayProducts(products);
            break;
        }
        case 3: {
            if (products.empty()) {
                std::cout << "No products to sort.\n";
                break;
            }

            int sortingMethod;
            std::cout << "Choose sorting algorithm:\n";
            std::cout << "1. Bubble Sort\n";
            std::cout << "2. Quick Sort\n";
            std::cin >> sortingMethod;

            int attribute;
            ComparisonFunc compFunc = chooseSortingOrder(attribute);

            if (sortingMethod == 1) {
                bubbleSort(products, compFunc);
            }
            else if (sortingMethod == 2) {
                quickSort(products, 0, products.size() - 1, compFunc);
            }

            std::cout << "Products sorted successfully!\n";
            break;
        }
        case 4: {
            if (products.empty()) {
                std::cout << "No products available to search.\n";
                break;
            }

            std::string name;
            std::cout << "Enter product name to search: ";
            std::cin >> name;

            // Assuming the products are sorted by name
            int index = binarySearchByName(products, name);
            if (index != -1) {
                std::cout << "Product found:\n";
                products[index].display();
            }
            else {
                std::cout << "Product not found.\n";
            }
            break;
        }
        case 5: {
            if (products.empty()) {
                std::cout << "No products available to search.\n";
                break;
            }

            double price;
            std::cout << "Enter product price to search: ";
            std::cin >> price;

            // Assuming the products are sorted by price
            int index = binarySearchByPrice(products, price);
            if (index != -1) {
                std::cout << "Product found:\n";
                products[index].display();
            }
            else {
                std::cout << "Product not found.\n";
            }
            break;
        }
        case 6:
            std::cout << "Exiting the program.\n";
            break;
        default:
            std::cout << "Invalid option! Please choose again.\n";
        }
    } while (choice != 6);

    return 0;
}
