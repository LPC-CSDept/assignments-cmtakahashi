#include "numbers.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
    srand(time(0));
    
	Numbers n1;

	n1.setElement();
    n1.setElement(5,0);
    n1.bubbleSort(1);
    n1.printOut(0);
	cout << "Size of n1: " << n1.getSize() << endl;
	cout << "Sum of n1: " << n1.getSum() << endl;
    cout << "The element at index 0 for n1: " << n1.getElement(0) << endl;
    cout << "The sum of all elements for n1: " << n1.getSum() << endl;
    cout << "The average of all elements for n1: " << n1.getAvg() << endl;

    n1.clear();


    
}
