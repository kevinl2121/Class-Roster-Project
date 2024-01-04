#include <iostream>
#include "roster.h"

int main() {
    // F1: Print out information about the project
    std::cout << "C867\n"
        << "Language: C++\n"
        << "WGU Student ID: 011902322 \n"
        << "Name: [Kevin Lemus-Medrano]\n\n";

    // F2: Create an instance of the Roster class called classRoster.
    Roster* classRoster = new Roster();

    // F3: Add each student to classRoster.
    const std::string studentData[] = {
        "A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Kevin,Lemus,kevin10lemus10@gmail.com,20,10,5,5,SOFTWARE"
    };

    const int studentDataLength = sizeof(studentData) / sizeof(studentData[0]);

    for (int i = 0; i < studentDataLength; i++) {
        classRoster->parseStudentDataThenAdd(studentData[i]);
    }

    // F4: Display various information using classRoster methods

    // F4 A: Print all student data
    std::cout << "Printing All Data from Class Roster\n";
    classRoster->printAll();
    std::cout << "\n";

    // F4 B: Print invalid emails
    classRoster->printInvalidEmails();
    std::cout << "\n";

    // F4 C: Print average days for all students
    std::cout << "Average Days for All Students\n";
    for (int i = 0; i < studentDataLength; i++) {
        std::string currentStudentId = classRoster->classRosterArray[i]->getStudentId();
        classRoster->printAverageDaysInCourse(currentStudentId);
    }
    std::cout << "\n";

    // F4 D: Print all students in SOFTWARE program
    std::cout << "Printing all students in SOFTWARE Program\n";
    classRoster->printByDegreeProgram(DegreeProgram::SOFTWARE);
    std::cout << "\n";

    // F4 E: Remove student with ID "A3"
    std::cout << "Removing Student with ID A3\n";
    classRoster->remove("A3");
    std::cout << "\n";

    // F4 F: Print all student data after removing A3
    std::cout << "Printing All Data from Class Roster after removing A3\n";
    classRoster->printAll();
    std::cout << "\n";

    // F4 G: Try to remove student with ID "A3" again (will throw an error)
    std::cout << "Trying to remove Student with ID A3, will throw error\n";
    classRoster->remove("A3");

    // Clean up memory
    delete classRoster;

    return 0;
}
