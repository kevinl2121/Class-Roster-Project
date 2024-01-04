#include "student.h"
#include <iostream>

//c for code
Student::Student() {
    this->studentId = "";
    this->firstName = "";
    this->lastName = "";
    this->emailAddress = "";
    this->age = -99;
    this->daysInCourse = new int[daysInCourseLength];
    for (int i = 0; i < daysInCourseLength; i++)
        this->daysInCourse[i] = 0;
}

// constructor for code
Student::Student(string studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeProgram) {
    setStudentId(studentId);
    setFirstName(firstName);
    setLastName(lastName);
    setEmailAddress(emailAddress);
    setAge(age);
    setDaysInCourse(daysInCourse);
    setDegreeType(degreeProgram);  
}

// Getters for code
string Student::getStudentId() {
    return studentId;
}

string Student::getFirstName() {
    return firstName;
}

string Student::getLastName() {
    return lastName;
}

string Student::getEmailAddress() {
    return emailAddress;
}

int Student::getAge() {
    return age;
}

int* Student::getDaysInCourse() {
    return daysInCourse;
}

DegreeProgram Student::getDegreeType() {
    return DegreeType;  
}

// Setters for code
void Student::setStudentId(string studentId) {
    this->studentId = studentId;
}

void Student::setFirstName(string firstName) {
    this->firstName = firstName;
}

void Student::setLastName(string lastName) {
    this->lastName = lastName;
}

void Student::setEmailAddress(string emailAddress) {
    this->emailAddress = emailAddress;
}

void Student::setAge(int age) {
    this->age = age;
}

void Student::setDaysInCourse(int daysInCourse[]) {
    for (int i = 0; i < daysInCourseLength; i++) {
        this->daysInCourse[i] = daysInCourse[i];
    }
}

void Student::setDegreeType(DegreeProgram degreeType) {
    DegreeType = degreeType;
}

// Print student data for program
void Student::print() {
    int* daysInCourse = getDaysInCourse();
    cout << getStudentId();
    cout << "\tFirst Name: " << getFirstName();
    cout << "\tLast Name: " << getLastName();
    cout << "\tAge: " << getAge();
    cout << "\tDays in Course: {" << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "} ";
    cout << "\tDegree Program: ";

    switch (getDegreeType()) {
    case SECURITY:
        cout << "Security";
        break;
    case NETWORK:
        cout << "Network";
        break;
    case SOFTWARE:
        cout << "Software";
        break;
    }
    cout << endl;
}
