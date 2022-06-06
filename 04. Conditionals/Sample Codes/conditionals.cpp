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

#include <iostream>

int main(){
	double marks = 85.0;
	char grade;

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
    else if(marks >= 80 && marks <=100){
        grade = 'A';
    }
    else{
        std::cout << "Invalid mark!";
        return -1; 			// Terminates Program with exit code -1
    }

    std::cout << "Grade is: " << grade; // If program terminates here, exit code is 0.

    // For this program, the expected output is: 
    // Grade is: A
    // (program process) exited with code 0.
}
