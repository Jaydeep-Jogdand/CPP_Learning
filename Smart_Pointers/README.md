
# Smart Pointers in Student Management

## Problem Statement
Develop a C++ application that utilizes smart pointers to manage a collection of `Student` objects. 
The application should demonstrate the use of `std::unique_ptr` for managing individual `Student` 
instances, `std::shared_ptr` for managing a group of students in a class, and `std::weak_ptr` to prevent 
circular references when tracking students enrolled in multiple classes. The program should include methods 
to add, remove, and display students, showcasing the advantages of smart pointers in resource management.

## Solution Hint
- Use `std::unique_ptr` to manage individual `Student` objects.
- Use `std::shared_ptr` to maintain a shared ownership of students in a classroom.
- Use `std::weak_ptr` to observe relationships without ownership to avoid circular references.

## Learning
- Smart pointers automate memory management, reducing the risk of memory leaks and dangling pointers.
- Understanding the differences between `unique_ptr`, `shared_ptr`, and `weak_ptr` helps in selecting the right smart pointer for various use cases.
- This project illustrates how smart pointers can simplify resource management in applications dealing with dynamic memory.
