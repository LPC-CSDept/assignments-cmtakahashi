#ifndef PART2_H
#define PART2_H
#include <iostream>

using namespace std;

class Course{
    private:
        int ID;
        string name;
        int credit;

    public:

       void setID(int x){
           ID = x;
       };
       void setName(string n){
           name = n;
       };
       void setCredit(int c){
           credit = c;
       };

       int getID(){
           return ID;
       };
       string getName(){
           return name;
       };
       int getCredit(){
           return credit;
       };

};

void bubbleSort (Course c[], int N){
    for (int i=0; i < N; i++){
        for (int j =0; j < N; j++){
            if (c[i].getID() < c[j].getID()){
                swap(c[j], c[i]);
            }
        }
    }
}

void printCourseInfo(Course c[], int N){
    cout << endl;
    cout << "ID\t" << "Couse\t" << "Credits\t"  << endl;
    cout << "====================================" << endl;

    for (int i =0; i < N; i++){
        cout << c[i].getID() << "\t" << c[i].getName() << "\t" << c[i].getCredit() << endl;
        
    }
}


int binarySearch(Course c[], int N, int target){
    int first, last, mid;
    bool found = false;
    first = 0;
    last = N-1;
    mid = (first+last/2);

    while (first <= last){
        
        mid = (first+last)/2;

        if (c[mid].getID() == target){
            found = true;
            return mid;
        }

        else if(c[mid].getID() < target){
            first = mid + 1;
        }

        else {
            last = mid-1;
        }
    }
    if (!found)
        return -1;
    else  
        return mid;
}






#endif