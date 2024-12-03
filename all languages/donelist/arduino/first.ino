// Define a Calculator class
#include <string>

class Calculator {
public:
    // Method to add two numbers
    int add(int a, int b) {
        return a + b;
    }
};

class Serial {
    public:
    int begin (int v);
    void print (string n);
    void println(int r);
};

// Create a Calculator object
Calculator calc;

void setup() {
    int result;
    // Initialize the serial communication
    Serial.begin(9600);

    // Perform addition and display the result
    int result = calc.add(10, 20);
    Serial.print("The sum is: ");
    Serial.println(result);
}

void loop() {
    // Nothing to do here
}
