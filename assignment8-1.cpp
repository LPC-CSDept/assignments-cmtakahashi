#include <iostream>
#include <algorithm> // needed to use the sort function.
using namespace std;


int binarySearch(int [], int, int);
// 1st parameter : Integer Array
// 2nd Parameter : Size of the array N
// 3rd Parameter : Taget Value
// Return value and type : the index of the array if the target is in the array. -1 if not found.


int main()
{
	const int N = 10;
	int numbers[N] = {10, 25, 30, 35, 40, 45, 55, 60, 65, 70 };
	int target = 35;
	int index;


	index = binarySearch(numbers, N, target );
	if ( index == -1)
		cout << "Target not found \n";
	else
		cout << "Target found at index : " << index << endl;
}

int binarySearch(int numbers[], int N, int target)
{
	int first, last, mid;
  bool found = false;
  first = 0;
  last = N-1;
  mid = (first+last)/2;

  while (first <= last)
  {
      mid = (first+last)/2;

      if (numbers[mid] == target){
        found = true;
        return mid;
        break;
      }

      else if (numbers[mid] < target) {
        first = mid + 1;
      }
    
      else {
        last = mid-1;
      }
     
  }
  if (!found)
	  return -1;  
}