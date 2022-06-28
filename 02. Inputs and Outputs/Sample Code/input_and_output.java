import java.util.Scanner;

class input_and_output {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);        // create a Scanner object

        String phrase = "End program.";
        System.out.print("Hello World! ");
        System.out.println("Hello Malaysia!");
        System.out.print("Hello Penang!\n");
        System.out.println("Goodbye! " + phrase);

        // Output:
        // Hello World! Hello Malaysia!
        // Hello Penang!
        // Goodbye! End program.

        //Input Example
        String phrase2;
        int x, y;

        System.out.print("Enter 2 numbers seperated by space: ");
        x = sc.nextInt();
        y = sc.nextInt();                           // Example input: 4 5. The value 4 and 5 will be assigned to x and y respectively.
        int sum = x + y;
        System.out.println("The sum of the 2 numbers is: " + sum);
        System.out.println("\nEnter a sentence: ");
        sc.nextLine();                              // This line enables sc to ignore one line of input as the integer input previously
                                                    // contains a newline character which was not accepted in an integer input.
        phrase2 = sc.nextLine();
        System.out.println("The sentence you just entered is: " + phrase2);

        // Sample Output:
        // Enter 2 numbers seperated by space: 4 5
        // The sum of the 2 numbers is: 9
        //
        // Enter a sentence: Lorem ipsum dolor
        // The sentence you just entered is: Lorem ipsum dolor
    }
}
