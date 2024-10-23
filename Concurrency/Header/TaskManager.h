#pragma once
#include <thread>
#include <mutex>
#include <iostream>
#include <vector>

class TaskManager {
public:
    TaskManager();
    ~TaskManager();

    // Function to run tasks concurrently
    void runTasks();

private:
    std::vector<std::thread> tasks;
    std::mutex mtx; // Mutex for thread-safe operations

    // Task functions
    void printMessage(int id);
    void calculateSum(int limit);
};
