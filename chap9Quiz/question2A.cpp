#include <iostream>
#include <fstream>

using namespace std;

// defines a structure for students to store the contents of a text file
struct Student {
  int id;
  char sname[20];
  double score[3];
};

int main()
{
    ifstream ifs;
	ofstream ofs;
    Student     *s = new Student; //creates a new student that's referenced by pointer "s"

	ifs.open("students.txt"); // opens the file
    ofs.open("students.bin" ); // opens a binary file to write to
  
	// stores the data in the struct
	ifs >> s->id;
	ifs >> s->sname;
	ifs >> s->score[0];
	ifs >> s->score[1];
	ifs >> s->score[2];

	//writes the struct contents to the binary file
	ofs.write( (char *)&(*s), sizeof(*s));


}