#include <iostream>
#include <fstream>
using namespace std;

struct Student { //creates a parallel struct student to store the input information
  int id;
  char sname[20];
  double score[2];
  double sum;
  double avg;
};

int main()
{
	ifstream ifs;
	Student s;

	ifs.open("students.bin"); //opens the binary file

	ifs.read( (char *)&s, sizeof(s) ); //reads the information in the input file for the first student

	//output the properties of Student s
	cout << "ID " << s.id << "\t";
	cout << "Name " << s.sname << "\t";
	cout << "Score1 " << s.score[0] << "\t";
	cout << "Score2 " << s.score[1] << "\t";
	cout << "Sum " << s.sum << "\t";
	cout << "Avg " << s.avg << "\n";

}
