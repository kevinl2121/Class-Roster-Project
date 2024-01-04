#pragma once
#include <string>
#include "student.h"

class Roster {
private:
    int rosterSize;
    int capacity;
    Student** classRosterArray;

public:
  //constructor 
    Roster();

   // destructor for rosters of the platform
    ~Roster();

 //functions 
    void add(string studentID,string firstName,string lastName,string emailAddress, int age, int daysInCourse[3], DegreeProgram degreeProgram);

    void remove(string studentID);

    void printAll();

    void printAverageDaysInCourse(string studentID);

    void printInvalidEmails();

    void printByDegreeProgram(DegreeProgram degreeProgram);
};

