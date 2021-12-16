#include "part2.hpp"
#include <iostream>
#include <fstream>

using namespace std;


int main(){
     // test data from file 
     // 10 courses
     // sort courses based on id
     // create binary seach function to search by ID

    ifstream data_file("courses.txt");
    if(data_file.fail()){
        cout << "Error encountered when attempting to open the file!" << endl;
        return 1;
    }

    const int N = 10;
    int ID;
    string name;
    int credit;
    Course courses[N];
    int n = 0;
    int target;

    while (!data_file.eof() && n<N){
        data_file >> ID;
        data_file >> name;
        data_file >> credit;

        Course c;
        c.setID(ID);
        c.setName(name);
        c.setCredit(credit);

        courses[n] = c;
        n++;
    }

    data_file.close();
    
    //print the initial course info to confirm correct processing
    cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl << "List of Courses: " << endl;
    printCourseInfo(courses, N);

    quickSort(courses, 0, n-1);
    
    cout << endl;
    cout << "Sorting courses by ID..." << endl;
    cout << "List of sorted courses: " << endl;

    printCourseInfo(courses, N);
    
    
}