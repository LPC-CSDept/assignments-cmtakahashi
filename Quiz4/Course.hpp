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
    Course(){
        cname = "";
        credits = 0;
        semester = "";
        NUM_COURSES = 0;
    };
    Course(std::string n, int c, std::string s, std::vector<Student> student){
        cname = n;
        credits = c;
        semester = s;
        student = student;
        NUM_COURSES = 0;
    };
    
    std::string getName(){
        return cname;
    };
    int getCredits(){
        return credits;
    };
    std::string getSemester(){
        return semester;
    };
    std::vector<Student> getStudent(){
        return student;
    };
   

    void setName(std::string n){
        cname = n;
    };
    void setCredits(int c){

    };
    void setSemester(std::string s){
        semester = s;
    };
    void setStudent(std::vector<Student> student){
        student = student;
    };
    void setCourse(std::string n, int c, std::string s, std::vector<Student> student){
        cname = n;
        credits = c;
        semester = s;
        student = student;
        NUM_COURSES = 0;
    };

    void addStudent(Student &s){
        student.push_back(s);
    };
    void printCourse();

    static int getNumCourses(){
        return NUM_COURSES;
    };

    friend std::istream &operator >> (std::istream &is, Course &c);
    friend std::ostream &operator << (std::ostream &os, Course &c);

    







};
#endif