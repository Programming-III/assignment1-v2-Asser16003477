#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here

#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class Course{
private:
string courseCode;
string courseName;
int maxStudents;
Student* students;
int currentStudents;
public:
    Course(string courseCode, string courseName,int maxStudents, Student* students,int currentStudents );
    addstudent(const Student& s);
    void displayCourseInfo();
    
    
};












#endif
