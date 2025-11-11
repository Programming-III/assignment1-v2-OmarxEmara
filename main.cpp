#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================

Person::Person(string name, int id){
    this->name = name;
    this->id = id;
}
void Person::display(){
    cout << "Name: " << name << ", ID: " << id << endl;
}

void Person::setName(string name){
    this->name = name;
        }
void Person::setId(int id){
    this->id= id;
}

string Person::getName(){
    return name;
    
}

int Person::getid(){
    return id;
}
// ==================== Student Class Implementation ====================

Student::Student(string name, int id, int yearlevel, string major) : Person(name, id) {
    this->yearlevel = yearlevel;
    this->major = major;
}

void Student::setYearLevel(int yearlevel){
            this->yearlevel = yearlevel;
        }
void Student::setMajor(string major){
            this->major = major;
        }
int Student::getYearLevel(){
            return yearlevel;

}
string Student::getMajor(){
            return major;
}

void Student::display(){
    Person::display();
    cout << "Student name: " << getName() << ", ID: " << getid() << endl;
    cout << "Year Level: " << getYearLevel() << ", Major: " << getMajor() << endl;
}

// ==================== Instructor Class Implementation ====================

Instructor::Instructor(string name, int id, string department, float experienceYears) : Person(name, id) {
    this->department = department;
    this->experienceYears = experienceYears;
}

void Instructor::setDepartment(string department){
            this->department = department;
        }
void Instructor::setExperienceYears(float experienceYears){
            this->experienceYears = experienceYears;
        }
string Instructor::getDepartment(){
            return department;
}
float Instructor::getExperienceYears(){
            return experienceYears;
}

void Instructor::display(){
    Person::display();
    cout << "Instructor name: " << getName() << ", ID: " << getid() << endl;
    cout << "Department: " << getDepartment() << ", Experience Years: " << getExperienceYears() << endl;
}

// ==================== Course Class Implementation ====================

Course::Course(string courseCode, string courseName, int maxStudents, Student *students, int currentStudents){
    this->courseCode = courseCode;
    this->courseName= courseName;
    this->maxStudents = maxStudents;
    this->students = students;
    this->currentStudents = currentStudents;

}

void Course::addStudent(const Student& s){
    if(currentStudents < maxStudents){
        students[currentStudents] = s;
        currentStudents++;
    } else {
        cout << "Cannot add student. Course is full." << endl;
    }
}

void Course::displayCourseInfo(){
    cout << "Course: " << courseCode << endl;
    cout << "Course Name: " << courseName << endl;
    cout << "Max Students: " << maxStudents << endl;
    cout << "Current Students: " << currentStudents << endl;

    cout << "Enrolled Students: " << endl;
    for(int i = 0; i < currentStudents; i++){
        students[i].display();
    }
    cout << "course code:" << courseCode << " course name:" << courseName << " max students:" << maxStudents << " current students:" << currentStudents << endl;
}









// ==================== Main Function ====================
int main() {
   Student s1("omar", 1, 2, "Computer Science");
   Student s2("sherif", 2, 3, "Mathematics");
   Student s3("emara", 3, 1, "Physics");

   Course course("CS101", "Introduction to Computer Science", 3, new Student[3], 0);
   course.addStudent(s1);
   course.addStudent(s2);
   course.addStudent(s3);

   course.displayCourseInfo();

   return 0;
}
