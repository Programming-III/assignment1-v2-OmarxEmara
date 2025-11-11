#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;

class Instructor : public Person {
    private:
        string department;
        float experienceYears;
    public:
        Instructor(){};
        Instructor(string name, int id, string department, float experienceYears);
        ~Instructor(){};
        void display();
        void setDepartment(string department){};
        void setExperienceYears(float experienceYears){};
        string getDepartment(){};
        float getExperienceYears(){};
        
};

#endif
