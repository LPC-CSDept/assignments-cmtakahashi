#include <iostream>
using namespace std;

int findMin(int [], int, int);
void printArray(int [], int);

int main()
{
	const int N = 10;
	int numbers[N] = {25, 10, 15, 30, 35, 40, 45, 55,20,50};
	int minidx;

	printArray(numbers, N);

	for(int i=0;i<N-1;i++)
    {
        minidx= findMin(numbers, N, i); // Find the i_th smallest number
		swap(numbers[i], numbers[minidx]); // swaps the current number with the returned minimum value within the next iteration's scope
	}

	printArray(numbers, N);

}

int findMin(int numbers[], int N, int ith)
{
	int min, minidx = ith, i;
	min = numbers[ith]; // initializes the variable min to the array value at the ith position
	// minidx should be set to ith value
	// because if the condition of line 33 would not be satisfied, the uninitialized minidx may be returned at line 39.
    for(i=ith ;i<N;i++)
	{
		if ( min > numbers[i] )
		{
			min = numbers[i];
			minidx = i;
		}
	}
	return minidx; // returns the index
}

void printArray(int a[], int x)
{
	for(int i = 0; i < x; i++){  //loops through all elements, printing them in order
    cout << a[i] << "\t";
  }
  cout << "\n";
}
