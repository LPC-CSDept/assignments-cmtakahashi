#include <iostream>
#include <fstream>
#include "Student.hpp"
#include "Course.hpp"

using namespace std;

int main(){

    ifstream ifs;
    ifs.open("coursestudents.txt");

    int N = 4; // number of courses in the file
    Course courses[N];

    for (int i =0; i < N; i++){
        ifs >> courses[i];
        cout << courses[i] << endl;
    }
    ifs.close();


    ifs.open("addstudents.txt");
    string course_id;
    while (ifs >> course_id){
        course_id = ""; //find the course id to add the student
        for (int i =0; i < Course::getNumCourses(); i++){

        }

        int numStudents;
        ifs >> numStudents;
        for (int i=0; i < numStudents; i++){
            int ID;
            string sname;
            char grade;
            double scores;
            ifs >> ID >> sname, grade, scores;
            Student s;
            s.setStudent(ID, sname, grade, scores);
            courses[course_id].addStudent(s);


        }
    

        cout << "Updated Students list for the Course"  << endl;
        cout << courses[course_id] << endl;
    }
    
   
    ifs.close();


}