#ifndef STUDENTS_H
#define STUDENTS_H

#include <string>
#include <iostream>
using namespace std;

class Student
{
    private:
        int sid;
        string sname;
        double score[3];

    public:
    int getSid() const
    {
        return sid; 
    }
    string getSname() const{
        return sname;
    }
    double getScores(int i) const
    {
        return score[i];
    }
    double getSum() const{
        return (score[0] + score[1] + score[2]);
    }
    void setSid(int x) 
    {
        sid = x;
    }
    void setSname(string s)
    {
        sname = s;
    }
    void setScores(int idx,int value)
    {
        score[idx] = value; 
    }

};

void bubbleSort(Student s[], int N){
    for (int i =0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (s[i].getSum() > s[j].getSum()){
                swap(s[i], s[j]);
            }
        }
    }

}

int binarySearch(Student s[], int N, int target){

    int first, last, mid;
    bool found = false;
    first = 0;
    last = N-1;
    mid = (first+last)/2;

    while (first <= last)
    {
        mid = (first+last)/2;

        if (s[mid].getSid() == target){
            found = true;
            return mid;
        }

        else if (s[mid].getSid() < target) {
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
void printStudents(Student s[], int N){
    for (int i =0; i < N; i++){
        cout << s[i].getSid() << "\t" << s[i].getSname() << "\t" << s[i].getScores(0) <<  "\t" << s[i].getScores(1) << "\t" << s[i].getScores(2)<< endl;
    }
}


#endif
