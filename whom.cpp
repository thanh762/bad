#include <iostream>

// Function to print a greeting message
void printGreeting(const std::string& message) {
    std::cout << message << std::endl;
}

int main() {
    // Define the greeting message
    std::string greeting = "Hello, World!";
    
    // Print the greeting message
    printGreeting(greeting);
    
    return 0;
}