class variables_and_datatypes {

    public static void main(String[] args) {

        // Declare and initialise variables
        int fav_number = 10;
        double decimal = 2.718;
        char fav_alphabet = 'A';
        String fav_message = "Hello World";
        boolean is_married = false;

        final double PI = 3.141592653;
        
        // Output variables
        System.out.println("My favourite number is " + fav_number + ".");       // My favourite number is 10.
        System.out.println(decimal + " is a decimal number.");                  // 2.718 is a decimal number.
        System.out.println("My favourite alphabet is " + fav_alphabet + ".");   // My favourite alphabet is A.
        System.out.println("My favourite message is " + fav_message + ".");     // My favourite message is Hello World.
        System.out.println("Am I married? " + is_married + ".");                // Am I married? false.
        System.out.println("In math, pi has the value of " + PI + ".");         // In math, pi has the value of 3.141592653.
    }
}