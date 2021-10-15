#include <iostream>
#include <fstream>
using namespace std;

struct Student {
  int id;
  char sname[20];
  double score[3];
  double sum;
  double avg;
  double memorySize;
};

int main()  
{
	ifstream ifs;
    Student     *s = new Student;
    double sum, avg;

	ifs.open("students.bin"); // opens the binary file

	ifs.read( (char *)&(*s), sizeof(*s) ); // reads the file contents
    
    s->memorySize = sizeof(*s);

    sum = s->score[0] + s->score[1] + s->score[2]; // adds the student's scores 
    avg = sum/3;

    if (avg > 85){
        cout << "\n";
        cout << "The sum of scores is: " << sum << endl;
        cout << "The average score is: " << avg << endl; 
        cout << "Student Name: " << s->sname << endl;
        cout << "Student ID: " << s->id << endl;
        cout << "Score 1: " << s->score[0] << endl;
        cout << "Score 2: " << s->score[1] << endl;
        cout << "Score 3: " << s->score[2] << endl;
        cout << "The amount of memory this record uses is: " << s->memorySize << " bytes." << endl << endl;
    }
    else {
        cout << "The average score for this student was below 85." << endl;
    }
}








