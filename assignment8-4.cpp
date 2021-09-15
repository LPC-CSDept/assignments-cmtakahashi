#include <iostream>
using namespace std;

int findMin(int [], int, int);
void printArray(int [], int);

int main()
{
	const int N = 10;
	int numbers[N] = {25, 10, 15, 30, 35, 40, 45, 55,20,50};
  
  for (int i = 0; i < N-1; i++)
  {
    for (int j=0; j < N-1; j++) { 
      if (numbers[j] > numbers[j+1])
      {
        swap(numbers[j], numbers[j+1]);
      }
    }

  }
  printArray(numbers, N);

}

void printArray(int a[], int x)
{
	for(int i = 0; i < x; i++){  //loops through all elements, printing them in order
    cout << a[i] << "\t";
  }
  cout << "\n";
}