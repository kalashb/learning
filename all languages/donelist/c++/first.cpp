//this is a comment
/* this is also a comment */

#include <iostream>

// Class definition
class Calculator {
public:
    // Member function to add two numbers
    int add(int a, int b) {
        return a + b;
    }
};

int main() {
    Calculator calc; // Create an object of the class
    int result = calc.add(10, 20); // Use the object's method
    std::cout << "The sum is: " << result << std::endl; // Output the result
    return 0;
}
