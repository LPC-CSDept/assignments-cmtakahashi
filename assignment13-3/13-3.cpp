#include "student.hpp"
#include <iostream>
#include <fstream>
using namespace std;

void printStudent(Student &s);
int main()
{
	ifstream ifs;
	const int N = 10;
	string sname;
	int idnum, month, day;
	DOB date;
	Student s[10];

	ifs.open("studentsDOB.txt");
	if (ifs.fail())
	{
		cerr << " File not open\n";
		exit(0);
	}
	int i = 0;
	while (ifs >> sname >> idnum >> month >> day)
	{
		date.setDOB(month, day);
		s[i].setSname(sname);
		s[i].setID(idnum);
		s[i].setDOB(date);
		i++;
	}

	for (int i = 0; i < N; i++)
	{
		printStudent(s[i]);
	}
}

void printStudent(Student &s)
{
	DOB date;
	cout << "Student Name: " << s.getSname() << endl;
	cout << "Student ID: " << s.getID() << endl;
	date = s.getDOB();
	date.printDate();
}