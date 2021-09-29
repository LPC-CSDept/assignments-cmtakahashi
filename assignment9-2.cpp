 #include <iostream>
using namespace std;

void printArray(double * const, int );
int main()
{
  const int N = 10;
	double 	numbers[N] = {10.0, 15.2, 21.2, 10.5, 11.3, 12.5, 13.8, 14.7, 19.8, 20.0};
	double 	* ptr;

	// array name can be used as a pointer
		// 1) did not initialize with the address 
		// 2) This pointer ( array nanme) can not be assigned with other address values
		// 	    int i;  num = &i; // error
		// Array name points to the address of the first element.
		
	printArray(numbers, N);

}

void printArray(double * const ptr, int N)
{

	for(int i=0; i<N; i++)
		cout << *(ptr+i) << "\t";
	cout << endl;
}

 //What is the differance between the *(num +i) and num[i]?
 // *(num + i) iterates through an array of pointers
 // num[i] iterates through a regular array 