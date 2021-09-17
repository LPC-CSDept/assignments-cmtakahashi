#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(vector<int>, int );
void printVector(vector<string>, int );
int findMin(vector<int>, int, int);

int main()
{
	const int N = 5;
    vector<int> ID = {10005, 10004, 10003, 10002, 10001}; // a vector containing the IDs of class participants
	vector<string> Names = {"John", "Greg", "Saul", "Yana", "Lee"}; // a vector containing the names of the class participants
    int minidx;


  	printVector(ID, N); 
  	printVector(Names, N); 
  
    for(int i=0;i<N-1;i++)
      {
          minidx= findMin(ID, N, i); // Find the i_th smallest number
          swap(ID[i], ID[minidx]);
          swap(Names[i], Names[minidx]); // swaps the current number with the returned minimum value within the next iteration's scope
      }

	printVector(ID, N);
  	printVector(Names, N);
}


  

int findMin(vector<int> ID, int N, int ith)
{
	int min, minidx=ith, i;
	min = ID[ith]; // initializes the variable min to the vector value at the ith position
    for(i=ith ;i<N;i++)
	{
		if ( min > ID[i] )
		{
			min = ID[i];
			minidx = i;
		}   
	}
	return minidx; 
}



void printVector(vector<int> ID, int N)
{
    for(int i=0; i<N; i++)
        cout << ID[i] << "\t" ;
    cout << endl;
}
void printVector(vector<string> Names, int N)
{
    for(int i=0; i<N; i++)
        cout << Names[i] << "\t" ;
    cout << endl;
}	
  