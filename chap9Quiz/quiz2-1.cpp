#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int fillupArray(int *, int );
void printNumbers(int * const ptr, int N);
void deleteNumbers(int * ptr);

int main()
{
    const 	int N=10;
    int     *ptr= new int[N];

    fillupArray(ptr, N); 
    std::cout << "\nYour Values: \n";
    std::cout << "-------------------------\n";
    printNumbers(ptr, N);
    deleteNumbers(ptr);
}

int fillupArray(int *  ptr , int N)
{
    srand(time(0));
    for(int i=0; i<N; i++){
        *(ptr+i) =rand() % 100 ; // sets the dereferenced ptr to a value between 0 and 99
    }
    return *ptr;	
}

void printNumbers(int *  ptr, int N)
{
    for(int i=0; i<N; i++){
        std::cout << "Value " << i+1 << ": " <<*(ptr+i) << std::endl;
    }	 
}

void deleteNumbers(int * ptr)
{
    delete ptr;
}
