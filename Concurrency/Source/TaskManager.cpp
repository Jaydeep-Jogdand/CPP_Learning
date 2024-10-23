#include "TaskManager.h"
#include <chrono>
#include <thread>

// Constructor
TaskManager::TaskManager() {}

// Destructor
TaskManager::~TaskManager() {
    // Join all threads before destruction
    for (std::thread& t : tasks) {
        if (t.joinable()) {
            t.join();
        }
    }
}

// Function to run tasks concurrently
void TaskManager::runTasks() {
    // Launch threads for tasks
    tasks.push_back(std::thread(&TaskManager::printMessage, this, 1));
    tasks.push_back(std::thread(&TaskManager::calculateSum, this, 100));

    // Add more tasks as needed
}

// Task: Print a message with an ID
void TaskManager::printMessage(int id) {
    for (int i = 0; i < 5; ++i) {
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); // Simulate delay
        std::lock_guard<std::mutex> lock(mtx); // Thread-safe access to console
        std::cout << "Task " << id << ": Printing message " << i + 1 << std::endl;
    }
}

// Task: Calculate the sum of numbers up to a limit
void TaskManager::calculateSum(int limit) {
    int sum = 0;
    for (int i = 1; i <= limit; ++i) {
        sum += i;
        std::this_thread::sleep_for(std::chrono::milliseconds(200)); // Simulate delay
    }
    std::lock_guard<std::mutex> lock(mtx); // Thread-safe access to console
    std::cout << "Sum up to " << limit << ": " << sum << std::endl;
}
