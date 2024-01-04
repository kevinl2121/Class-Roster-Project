# Class-Roster-Project

C++ Student System Migration Project
This C++ application is developed to assist a university in migrating its existing student system to a new platform. The program manages a roster of students within a given course, reading and manipulating provided student data. The application consists of two classes, Student and Roster, to handle student information.

Project Files
The project includes the following files:

degree.h: Header file defining an enumerated data type DegreeProgram for the degree programs (SECURITY, NETWORK, SOFTWARE).

student.h and student.cpp: Header and implementation files for the Student class, which contains variables representing student information and functions for data manipulation.

roster.h and roster.cpp: Header and implementation files for the Roster class, which manages a roster of students, adding, removing, and printing student data.

main.cpp: Main program file demonstrating the required functionality.

Project Requirements
A. Modify the "studentData Table"
Add personal information as the last item in the "studentData Table."

cpp
Copy code
"A5,[firstname],[lastname],[emailaddress],[age],[numberofdaystocomplete3courses],SOFTWARE"
B. Create a C++ Project
Create a C++ project in your IDE with the specified file structure, including six source code files.

C. Define Enumerated Data Type
Define the enumerated data type DegreeProgram in the degree.h file for degree programs (SECURITY, NETWORK, SOFTWARE).

D. Student Class
Create the Student class with variables and functions in the student.h and student.cpp files.

Implement accessor and mutator functions for each instance variable.

Implement a constructor using input parameters, a print function to display student data, and other necessary functions.

E. Roster Class
Create the Roster class in the roster.h and roster.cpp files.

Use an array of pointers to hold student data and create student objects for each entry in the "studentData Table."

Define functions to add, remove, print all, print average days in the course, print invalid emails, and print by degree program.

F. Main Functionality
Demonstrate the program's functionality in the main.cpp file.

Print course title, programming language, WGU student ID, and name.

Create an instance of the Roster class.

Add each student to the roster.

Call necessary functions to print all, print invalid emails, print average days in the course, print by degree program, remove a student, and attempt to remove a non-existing student.

Implement a destructor in the Roster class to release dynamically allocated memory.

Submission
