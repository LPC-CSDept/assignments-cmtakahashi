#ifndef STUDENTS_H
#define STUDENTS_H

#include <string>
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

#endif
