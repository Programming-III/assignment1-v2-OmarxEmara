#include "Person.h"
#ifndef STUDENT_H
#define STUDENT_H
using namespace std;

class Student : public Person {
    private:
        int yearlevel;
        string major;
    public:
        Student(){};
        Student(string name, int id, int yearlevel,string major);
        ~Student(){};
        void display();
        void setYearLevel(int yearlevel);
        void setMajor(string major);
        int getYearLevel(){};
        string getMajor(){};

};

#endif
