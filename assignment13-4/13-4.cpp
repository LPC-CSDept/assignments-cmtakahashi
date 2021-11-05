#include "Stack.hpp"
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	Stack<int>	s(10);

	for( int i=0; i < 10; i++)
		s.push(numbers[i]);
	s.printAll();
	for( int i=0; i < 10; i++)
		numbers[i] = s.pop(); 
		
	for( int i=0; i < 10; i++)
		cout << numbers[i] << endl;



	double dvalue[] = {12.34, 45.12, 22, 11.0, 22.0};
	Stack<double>	stack_double(10);
	for( int i=0; i < 5; i++)
		stack_double.push(dvalue[i]);
	stack_double.printAll();


	char cvalue[] = "Programming"; 
	Stack<char>	stack_char(strlen(cvalue));
	for( int i=0; i < strlen(cvalue); i++)
		stack_char.push(cvalue[i]);
	stack_char.printAll();


}