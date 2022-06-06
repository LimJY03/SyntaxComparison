import sys


marks = -85
grade = ''

if((marks >= 0) & (marks < 25)):
    grade = 'F'

elif((marks >= 25) & (marks < 45)):
    grade = 'E'

elif((marks >= 45) & (marks < 50)):
    grade = 'D'

elif((marks >= 50) & (marks < 60)):
    grade = 'C'

elif((marks >= 60) & (marks < 80)):
    grade = 'B'

elif(marks >= 80):
    grade = 'A'

else:
    print("Invalid mark!")
    sys.exit(0)                 # Terminates Program

print("Grade is: " + grade)     # Grade is: A