#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Student{};
class Course{

    private:
    std::string cname;
    int credits;
    std::string semester;
    std::vector<Student> student;
    static int NUM_COURSES;

    public:
    Course();
    Course(std::string, int, std::string, std::vector<Student>);
    
    void addStudent(Student &s);
    void setCourse();
    void setStudent();
    void printCourse();

    static int getNumCourses();

    friend std::istream &operator >> (std::istream &is, Course &c);
    friend std::ostream &operator << (std::ostream &os, Course &c);

    







};
#endif