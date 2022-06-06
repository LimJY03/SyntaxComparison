/* 
 * A school has following rules for grading system:
 * Below 25 excluded - F
 * 25 to 45 excluded - E
 * 45 to 50 excluded - D
 * 50 to 60 excluded - C
 * 60 to 80 excluded - B
 * Above 80 included - A
 * Display grade based on marks.
 */

class conditionals{

    public static void main(String[] args){

        double marks = 85;
        char grade = 'Z';

        if(marks >= 0 && marks < 25){
            grade = 'F';
        }
        else if(marks >= 25 && marks < 45){
            grade = 'E';
        }
        else if(marks >= 45 && marks < 50){
            grade = 'D';
        }
        else if(marks >= 50 && marks < 60){
            grade = 'C';
        }
        else if(marks >= 60 && marks < 80){
            grade = 'B';
        }
        else if(marks >= 80 && marks <= 100){
            grade = 'A';
        }
        else{
            System.out.println("Invalid mark!");
            System.exit(0);                             // Terminates Program
        }

        System.out.println("Grade is: " + grade);       // Grade is: A
    }
}
