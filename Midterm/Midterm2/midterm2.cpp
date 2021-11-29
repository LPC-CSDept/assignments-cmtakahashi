/*
Make your program code and Elaborate on your code implementation
Test your program correctly with various input data.
    In this question, we will design the class Students to manage the scores. There are N(=10) students. Each student has a student’s ID, name, and 3 scores. 
    
    In this program, you need to print out all students with the descending order of total scores. 
    
    Also, you need to provide a function to find the student who has a certain ID(this value will be asked to the user).    
    
    In this search function, you should use the binary search algorithm to find the student. 
    
    Design and implement the class Student including the member data and functions, and main functions to drive the 
    Student object in order to print and get some information.
    
    To test the program easily, you may use a text file to input to Student objects.

*/
#include "Students.hpp"
#include <iostream>
#include <fstream>

int main(){

    const int N =2;
    Student s[N];
    int id; 
    string name;
    double score[3];

    for (int i =0; i < N; i++){
        cout << "Enter ID: ";
        cin >> id;
        s[i].setSid(id);


        cout << "Enter Student Name: ";
        cin >> name;
        s[i].setSname(name);
        for (int j =0; j < 3; j++){
            cout << "Enter score" << j+1 << ": ";
            cin >> score[j];
            s[i].setScores(i,j);
        }
        cout << "===================" << endl;
        cout << "Student Information \n";
        cout << "ID : " << s[i].getSid() << endl;
        cout << "Name : " << s[i].getSname() << endl;
        cout << "Total Score: " << s[i].getSum() << endl;

    }
   

   
 


}

    

