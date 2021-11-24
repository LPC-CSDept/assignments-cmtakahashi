#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <vector>

class Student{
    
    private:
    int ID;
    std::string sname;
    char grade;
    double scores;

    public:
    Student(){
        ID = 0;
        sname = "";
        grade = '\0';
        scores = 0;

    };
    Student(int id, std::string n, char g, double s){
        ID = id;
        sname = n;
        grade = g;
        scores = s;
    };

    int getId(){
        return ID;
    };
    std::string getName(){
        return sname;
    };
    char getGrade(){
        return grade;
    };
    double getScores(){
        return scores;
    };

    void setId(int id){
        ID = id;
    };
    void setName(std::string n){
        sname = n;
    }
    ;
    void setGrade(char g){
        grade = g;
    };
    void setScores(double s){
        scores = s;
    };
    void setStudent(int id, std::string n, char g, double s){
        ID = id;
        sname = n;
        grade = g;
        scores = s;
    };

};

#endif