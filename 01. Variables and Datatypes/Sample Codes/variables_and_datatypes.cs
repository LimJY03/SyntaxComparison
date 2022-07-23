using System;

namespace Basics {
    class VarAndDTs {
        static void xMain(string[] args) {
            // Declare and initialise variables
            int fav_number = 10;
            double deci = 2.718;                                        // if you are referring to other languages,
                                                                        // "decimal" is a reserved word in C#.
            char fav_alphabet = 'A';
            string fav_message = "Hello World";  
            bool is_married = false;

            const double PI = 3.141592653;

            // Output variables
            Console.WriteLine("Favourite number: " + fav_number);       // My favourite number is 10.
            Console.WriteLine(deci + " is a decimal.");                 // 2.718 is a decimal number.
            Console.WriteLine("Favourite alphabet: " + fav_alphabet);   // My favourite alphabet is A.
            Console.WriteLine("Favourite message: " + fav_message);     // My favourite message is Hello World.
            Console.WriteLine("Am I married? " + is_married);           // Am I married? False.
            Console.WriteLine("In math, pi has the value of " + PI);    // In math, pi has the value of 3.141592653.
        }                                                               
    }                                                                   
}