#pragma once
#include <string>
#include "degree.h"
#include <iostream>

using namespaces std;
//private class
class Student {
private:

    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysInCourse[3];
    DegreeProgram degreeProgram;
    // puplic class
public:
    // Constructor
    Student();
    Student(string studentID,string firstName,string lastName, string emailAddress, int age, int daysInCourse[3], DegreeProgram degreeProgram);


   
    // getters for code
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    int getAge();
    int* getDaysInCourse();
    DegreeProgram getDegreeProgram();

    // setters for code
    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmailAddress(string emailAddress);
    void setAge(int age);
    void setDaysInCourse(int daysInCourse[3]);
    void setDegreeProgram(DegreeProgram degreeProgram);

    virtual void print() = 0;
};
