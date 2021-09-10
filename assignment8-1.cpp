#include <iostream>
#include <algorithm> // needed to use the sort function.
using namespace std;

int main()
{
	const int N = 10;
	int numbers[N] = {10, 25, 30, 35, 40, 45, 55, 60, 65, 70 };
	int target = 35;
    int first, last, mid;
    bool found = false;

    first = 0;
    last = N-1; 
    mid = (first+last)/2;  
  


  while (first <= last)
  {
    mid = (first+last)/2;

    if (numbers[mid] == target){
      cout << "Found at index: " << mid << endl; 
      found = true;
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
    cout << "The target was not found in the values"; 
  

}