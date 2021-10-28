#include "Students.hpp"
#include<iostream>
using namespace std; 


int Student::getSid() const
{
	return sid; 
}

string Student :: getSname() const{
  return sname;
}

double Student :: getScores(int i) const
{
  return score[i];
}
double Student :: getSum() const{
    return (score[0] + score[1] + score[2]);
}
double Student :: getAvg() const{
  return (score[0] + score[1] + score[2]) / 3;
}

void Student::setSid(int x) 
{
    sid = x;

}

void Student::setSname(string s)
{
	sname = s;
}
void Student::setScores(int idx,int value)
{
	score[idx] = value; 
}