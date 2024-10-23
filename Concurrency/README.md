# Concurrency in C++ with std::thread

## Problem Statement
Create a `TaskManager` class that runs multiple tasks concurrently using `std::thread`. Implement simple tasks, like printing a message or calculating a sum, and use `std::mutex` for thread-safe access to shared resources.

## Solution Hint
- Use `std::thread` to execute multiple tasks in parallel.
- Ensure thread safety with `std::mutex` for shared resources.
- Test the program with concurrent tasks, observing how threads operate together.

## Learning
- Learn how to create and manage threads in C++ using `std::thread`.
- Understand the importance of thread synchronization using `std::mutex`.
- Explore concurrent execution and thread-safe operations.
