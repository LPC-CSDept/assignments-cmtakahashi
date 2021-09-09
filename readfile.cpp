#include <iostream>
#include <fstream>

using namespace std;

// defines a structure for students to store the contents of a text file
struct Student {
  int id;
  char sname[20];
  double score[2];
  double sum;
  double avg;
};

int main()
{
  ifstream ifs;
	ofstream ofs;
  Student s[10];


	ifs.open("students.txt"); // opens the file
    ofs.open("students.bin" ); // opens a binary file to write to

  // get and print the number of lines in the file
  int line_count = 0;
    std::string line;
    std::ifstream myfile("students.txt");

    while (std::getline(myfile, line))
        ++line_count;
    std::cout << "Number of lines in the file: " << line_count << "\n";

  
	// stores the data in the struct
	for( int i=0; i < line_count; i++)
	{
		ifs >> s[i].id;
		ifs >> s[i].sname;
		ifs >> s[i].score[0];
		ifs >> s[i].score[1];
		s[i].sum = s[i].score[0] + s[i].score[1];
		s[i].avg = s[i].sum / 2;
	}

	// prints the stored data
	for( int i=0;i< line_count; i++)
	{
		cout << s[i].id << "\t" ;
		cout << s[i].sname << "\t";
		cout << s[i].score[0] << " " << s[i].score[1] << "\t";
		cout << s[i].sum << " " << s[i].avg << endl;
	}

	//writes the struct contents to the binary file

	for( int i=0;i< line_count; i++)
		ofs.write( (char *)&s, sizeof(s));


}