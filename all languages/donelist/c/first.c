//this is a comment
/* this is also a comment */
#include <stdio.h>  // Include the standard input/output library

// Structure definition
typedef struct {
    // Member function pointer for adding two numbers
    int (*add)(int, int);
} Calculator;

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Main function
int main() {
    Calculator calc;            // Create an instance of the structure
    calc.add = &add;            // Assign the function to the structure member

    int result = calc.add(10, 20);  // Use the function pointer
    printf("The sum is: %d\n", result);  // Output the result

    return 0;
}
