#include <iostream>
#include <fstream>

using namespace std;

struct Student { //create struct to define the data
  int id;
  string sname;
  double score[2];
  double sum;
  double avg;
};

int main()
{
  ifstream ifs;
	Student s[10];
	ifs.open("students.txt");

	for( int i=0;i<10; i++) //reads each line in the file
	{
		ifs >> s[i].id;
		ifs >> s[i].sname;
		ifs >> s[i].score[0];
		ifs >> s[i].score[1];
		s[i].sum = s[i].score[0] + s[i].score[1];
		s[i].avg = s[i].sum / 2;
	}

	for( int i=0;i<10; i++) //outputs each line in the file to the console
	{
		cout << s[i].id << "\t" ;
		cout << s[i].sname << "\t";
		cout << s[i].score[0] << " " << s[i].score[1] << "\t";
		cout << s[i].sum << " " << s[i].avg << endl;
	}


}
