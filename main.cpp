#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================


Person:: Person(string name, int id){
this->name=name;
this->id=id;
}
Person:: Person(){
    name="Omar Nabil";
    id="2202";
}
Person:: void display(){
cout<<"name: "<<name<<endl;
cout<<"id: "<<id<<endl;

}
 Person::string getName(){
 return name;
 }         
Person:: string getId(){
return id;
}







// ==================== Student Class Implementation ====================

Person:: Class(int yearLevel, string major){
this->yearLevel=yearLevel;
this->major=major;
}
Person:: Class(){
    yearLevel="2";
    major="Informatics";
}
Class:: void display(){
cout<<"yearLevel: "<<yearLevel<<endl;
cout<<"major: "<<major<<endl;
}
Class::int getYearLevel(){
    return yearLevel;
}
Class::string major(){
    return major;
}




// ==================== Instructor Class Implementation ====================


Person:: Instructor(string department, int exprienceYears){
this->department=department;
this->exprienceYears=exprienceYears;
}
Person:: Instructor



// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
