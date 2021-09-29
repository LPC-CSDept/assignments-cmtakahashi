#include <iostream>
using namespace std;

int main()
{

  const int N = 10;
	double 	numbers[N] = {10.0, 15.2, 21.2, 10.5, 11.3, 12.5, 13.8, 14.7, 19.8, 20.0};
	double 	* ptr;


  // for (int i =0; i < 5; i++)
  //   cout << num[i] << "\t";
  //   cout << endl;

  ptr = numbers;
  // cout << "The address of the first element is: " << ptr << endl; //ptr is set to num, which is the equivalent of num[0]
  // cout << "The address of the first element is: " << &num[0] << endl; // print num[0] to confirm the address is the same

    
  for (int i =0; i < N; i++)
  // to denote the ith element, (ptr + i )
  // to denote the value at the ith element *(ptr + i)
  cout << *(ptr + i) << "\t"; // prints the value at the ith element
  cout << endl;


}