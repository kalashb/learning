public class Calculator {
    // Method to add two numbers
    public Integer add(Integer a, Integer b) {
        return a + b;
    }
}

public class CalculatorExample {
    public static void main() {
        // Create an instance of the Calculator class
        Calculator calc = new Calculator();
        
        // Perform addition and store the result
        Integer result = calc.add(10, 20);
        
        // Output the result (Apex uses system.debug to log output)
        System.debug('The sum is: ' + result);
    }
}

//apex from salesforce