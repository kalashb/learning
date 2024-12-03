using System;

class Calculator
{
    // Member function to add two numbers
    public int Add(int a, int b)
    {
        return a + b;
    }
}

class Program
{
    static void Main()
    {
        Calculator calc = new Calculator(); // Create an object of the class
        int result = calc.Add(10, 20); // Use the object's method
        Console.WriteLine("The sum is: " + result); // Output the result
    }
}
