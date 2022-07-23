using System;

namespace Basics {
    class InputOutput {
        static void xMain(string[] args) {
            string phrase = "End program.";
            Console.Write("Hello World! ");
            Console.WriteLine("Hello Malaysia!");
            Console.Write("Hello Penang!\n");
            Console.WriteLine("Goodbye! " + phrase);

            // Output:
            // Hello World! Hello Malaysia!
            // Hello Penang!
            // Goodbye! End program.
            
            // Input Example
            string phrase2;
            int x, y;
            Console.Write("Enter 2 numbers seperated by space: ");
            string s = Console.ReadLine();                  // Example input: 4 5. The value 4 and 5 will be assigned to x and y respectively.
            string[] values = s.Split(' ');                 // C#, contrary to Java/C++/C, only supports reading an entire line as a string at a time.
            x = int.Parse(values[0]);                       // If you want to read oher values (int / double), type casting is required.
            y = int.Parse(values[1]);
            int sum = x + y;
            Console.WriteLine("The sum of the 2 numbers is: " + sum);
            Console.Write("\nEnter a sentence: ");
            phrase2 = Console.ReadLine();
            Console.Write("The sentence you just entered is: " + phrase2);

            // Sample Output:
            // Enter 2 numbers seperated by space: 4 5
            // The sum of the 2 numbers is: 9
            //
            // Enter a sentence: Lorem ipsum dolor
            // The sentence you just entered is: Lorem ipsum dolor
        }
    }
}