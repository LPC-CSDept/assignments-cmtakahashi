#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

const int 	MAX_LEN = 20;
const int 	NUM_SCORES = 3;
struct Students {
	int 	sid;
	char 	sname[MAX_LEN];
	double 	scores[NUM_SCORES];
};

void printStudents(Students [], int);
void makeStudents(Students [], int);
void sortStudents(Students [], int );
int binarySearch(Students [], int , int );

int main()
{
	const int N = 10;
	Students s[N];

	makeStudents(s, N); // To read the student information from the file
	cout << "\n";
	cout << "Initial File Contents: \n";
	cout << "---------------------------------\n";
	printStudents(s, N); 


	// 1) Sort by ID
	sortStudents(s, N);
	cout << "Students Sorted by ID: \n";
	cout << "---------------------------------\n";
	printStudents(s, N); 
	// 2) Search the certain student information by the ID (or any other fields)
	// binary search

	int target = 10005566;

	int result = binarySearch(s, N, target);
	if (result!= -1)
	{
		cout << "The first student found with ID: " << target << "\n";
        cout << "ID: " << s[result].sid << endl;
        cout << "Name: " << s[result].sname << endl;
        for(int j=0;j<NUM_SCORES; j++)
		{
            cout << "Score " << j+1 << ": " << s[result].scores[j] << endl;
		}
		cout << "Array Index: " <<  result << endl << endl;
	}
		
	else	
		cout << "No student found with ID " << target << endl << endl;
}




void sortStudents(Students s[], int N)
{
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<N-1; j++)
		{
			if (s[j].sid > s[j+1].sid)	
			// if ( strcmp(s[j].sname, s[j+1].sname) > 0 )	
				swap(s[j], s[j+1]);
		}
	}

}

void makeStudents(Students s[], int N)
{
	ifstream ifs;
	ifs.open("students86.txt");

	if ( ifs.fail()){
		cout << "File not foudn\n";
		exit(0);
	}

	for(int i=0;i<N;i++)
	{
		ifs >> s[i].sid >> s[i].sname;
		for(int j=0;j<NUM_SCORES; j++)
			ifs >> s[i].scores[j];
	}
}

void printStudents(Students s[], int N)
{
	for(int i=0;i<N;i++)
	{
		cout << s[i].sid << "\t" << s[i].sname << "\t";
		for(int j=0; j<NUM_SCORES; j++)
			cout <<  s[i].scores[j] << "\t";
		cout << endl;
	}
	cout << "==== End of Record === \n\n";
}



int binarySearch(Students array[], int N, int target)
{
    int first, last, mid;
    int cmp = 0;

    first = 0;
    last = N-1;
    while ( first <= last) 
    {
        mid = (first + last) / 2;
        if ( array[mid].sid == target)
            return mid;
        if ( array[mid].sid > target)
            last = mid - 1;
        else 
            first = mid + 1;
    }
    return -1;
}