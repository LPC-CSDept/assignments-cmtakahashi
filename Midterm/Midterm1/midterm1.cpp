/*
Implement the class Numbers in a file “Numbers.hpp”. To test your header file, compile the given “midterm1.cpp” and then check out the result.
Constructor 
    Numbers()
        ID = 0;
    Numbers(int i, int n);
        1st parameter = ID
        2nd parameter = the number of random numbers 
        create random numbers between 0 and 99 and push them to the vector. All numbers could be duplicated. 
int getID() { return ID};
All other getter/setter functions may be implemented upon your choices.
Static variable and Static Function
    Static NumofObjects
        To maintain the total number of students, we will keep the static variable NumofObjects
        When you create an object instance of Numbers, this static variable should be increased by one.
        Static Function getNumObjects()
            returns  the value of static variable “NumofObjects”
Friend function printNumbers(Numbers n)
    This function is to print out all vector elements.
    It is not a member function of the class Number. It should be implemented outside of the class as a separate function.  You need to only declare this function is a friend of the class Numbers.
Operator Overloading >
    We will overload the greater-than operator “>”
    Let assume that there are two numbers objects, n1 and n2, 
        it will return 1(true) if the summation of n1 is greater than one of n2
        otherwise it will return 0(false)
*/

#include "Numbers.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    
    srand(time(0));
    Numbers n1(100, 2);

    Numbers n2(100, 2);

    cout << "n1: ";
    printNumbers(n1);
    cout << "n2: ";
    printNumbers(n2);

    if (n1 > n2){
        cout << "The numbers in n1 are greater than n2";
    }
    else if (n2 > n1){
        cout << "The numbers in n2 are greater than n1";
    }
    else 
        cout << "They are the same!";


    
}

