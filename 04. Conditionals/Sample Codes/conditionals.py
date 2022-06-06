'''
A school has following rules for grading system:
Below 25 excluded - F
25 to 45 excluded - E
45 to 50 excluded - D
50 to 60 excluded - C
60 to 80 excluded - B
Above 80 included - A
Display grade based on marks.
'''

marks = 85
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

elif((marks >= 80) & (marks <=100)):
    grade = 'A'

else:
    print("Invalid mark!")
    exit(0)                     # Terminates Program

print("Grade is: " + grade)     # Grade is: A
