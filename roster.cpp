#include <iostream>
#include <sstream>
#include "roster.h"

using namespace std;

Roster::Roster() {
    this->rosterArraySize = 5;
    this->classRosterArray = new Student * [rosterArraySize] {};
}

// Destructor i
Roster::~Roster() {
    for (int i = 0; i < rosterArraySize; ++i) {
        delete classRosterArray[i];
    }
    delete[] classRosterArray;
}

// Adds new student to roster
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree) {
    int daysSpent[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };
    for (int i = 0; i < rosterArraySize; i++) {
        if (classRosterArray[i] == nullptr) {
            if (degree == NETWORK) {
                classRosterArray[i] = new NetworkStudent(studentID, firstName, lastName, emailAddress, age, daysSpent, degree);
            }
            else if (degree == SECURITY) {
                classRosterArray[i] = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, daysSpent, degree);
            }
            else if (degree == SOFTWARE) {
                classRosterArray[i] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, daysSpent, degree);
            }
            else {
                classRosterArray[i] = new Student(studentID, firstName, lastName, emailAddress, age, daysSpent, degree);
            }
            break;
        }
    }
}

// Remove Student by StudentID
void Roster::remove(string studentID) {
    bool found = false;
    for (int i = 0; i < rosterArraySize; ++i) {
        if (classRosterArray[i] != nullptr && studentID == classRosterArray[i]->getStudentId()) {
            found = true;
            delete classRosterArray[i];
            classRosterArray[i] = nullptr;
            cout << "The student ID " << studentID << " has been removed.\n\n";
            break;
        }
    }
    if (!found) {
        cout << "The student ID '" << studentID << "' does not exist" << endl;
    }
}

// Print average days spent in a course for a given student ID
void Roster::printAverageDaysInCourse(string studentID) {
    for (int i = 0; i < rosterArraySize; i++) {
        if (classRosterArray[i] != nullptr && classRosterArray[i]->getStudentId() == studentID) {
            int* daysInCourse = classRosterArray[i]->getDaysInCourse();
            float average = (daysInCourse[0] + daysInCourse[1] + daysInCourse[2]) / 3.0;
            cout << "Student ID " << studentID << ": Average number of days spent on a course is " << average << "\n";
            break;
        }
    }
}

// Print students by degree program
void Roster::printByDegreeProgram(int degree) {
    for (int i = 0; i < rosterArraySize; i++) {
        if (classRosterArray[i] != nullptr && classRosterArray[i]->getDegreeProgram() == degree) {
            classRosterArray[i]->print();
        }
    }
}

// Print all students
void Roster::printAll() {
    for (int i = 0; i < rosterArraySize; i++) {
        if (classRosterArray[i] != nullptr) {
            classRosterArray[i]->print();
        }
    }
}

// Print students with invalid emails
void Roster::printInvalidEmails() {
    cout << "Invalid Emails:\n";
    for (int i = 0; i < rosterArraySize; i++) {
        if (classRosterArray[i] != nullptr) {
            string email = classRosterArray[i]->getEmailAddress();
            if ((email.find("@") == string::npos) || (email.find(".") == string::npos) || (email.find(' ') != string::npos)) {
                cout << email << " is invalid\n";
            }
        }
    }
}

int main() {
    Roster classRoster;

  
    return 0;
}

