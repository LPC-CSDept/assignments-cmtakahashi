#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void makeArray(int [], int);
void printArray(int [], int);
int linearSearch(int [], int , int );
int binarySearch(int [], int , int );
int findMin(int [], int, int);
void sortArray (int [], int );


int main()
{
	const int TRY = 10000;
	const int N = 64;
	int array[N];
	int target;
	int total_linear = 0;
    int total_binary = 0;
    //int minidx;

	srand(time(0)); // sets the seed number to random value
	makeArray(array, N);
	printArray(array, N);

	for(int i=0; i<TRY; i++){
		target = array[rand() % N];
		total_linear += linearSearch(array, N, target);
	}
	cout << "The average comparison number for linear search: " << total_linear / TRY << endl;

	// Sort array
    sortArray(array, N);


    printArray(array, N);

	for(int i=0; i<TRY; i++){
		target = array[rand() % N];
		total_binary += binarySearch(array, N, target);
	}
  	cout << "The average comparison number for binary search: " << total_binary / TRY << endl;

}


int linearSearch(int array[], int N, int target)
{
    for(int i=0; i<N; i++)
        if ( array[i] == target)
            return i+1;
    return N;
}

void makeArray(int array[], int N)
{
	for(int i=0; i<N; i++)
		array[i] = rand() % 100 +1 ;  // sets array [i] to a number between 1 to 100

}

void printArray(int array[], int N)
{
    for(int i=0; i<N; i++)
    {
        cout << array[i]  << "\t" ; 
        if (i % 8 == 7 ) cout << endl;
    }
}


int binarySearch(int array[], int N, int target)
{
    int first, last, mid;
    int cmp = 0;

    first = 0;
    last = N-1;
    while ( first <= last) 
    {
        cmp +=1;
        mid = (first + last) / 2;
        if ( array[mid] == target)
            return cmp;
        if ( array[mid] > target)
            last = mid - 1;
        else 
            first = mid + 1;
    }
    return cmp;
}


void sortArray (int array [], int N)
{
    int minidx;
    for(int i=0;i<N-1;i++)
    {
        minidx= findMin(array, N, i); // Find the i_th smallest number
        swap(array[i], array[minidx]); // swaps the current number with the returned minimum value within the next iteration's scope
    }

}

int findMin(int array[], int N, int ith)
{
	int min, minidx = ith, i;
	min = array[ith]; // initializes the variable min to the array value at the ith position
    for(i=ith ;i<N;i++)
	{
		if ( min > array[i] )
		{
			min = array[i];
			minidx = i;
		}
	}
	return minidx; // returns the index

}