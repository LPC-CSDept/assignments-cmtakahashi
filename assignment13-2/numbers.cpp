#include "numbers.hpp"
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <stdio.h>
using namespace std;

    Numbers::Numbers(){
        size=10;
        head = new int[10];
    }
	Numbers::Numbers(int s) 
	{
		size = s;
		head = new int[size];
	}

	int Numbers::getSize() const 
    { 
        return size;
    }
	int Numbers::getElement(int i) const 
    { 
        return *(head+i); 
    }
	int Numbers::getSum() const 
	{
		int sum=0;
		for(int i=0;i<size; i++)
			sum += *(head+i);
		return sum;
	}
	int Numbers::getAvg() const
	{
		int sum=0;
		for(int i=0;i<size; i++)
			sum += *(head+i);
		return sum / size; 
	}
	void Numbers::setElement(int i, int v)
	{
		*(head+i) = v ;
	}
	void Numbers::setElement()
	{
		for(int i=0;i<size; i++)
			*(head+i) = rand() % 100; 
	}
	void Numbers::printOut (int numdesc) const 
	{
        if (numdesc==0){
        for (int i=0; i<size; i++){
            cout << head[i] << endl;
        }
    }
        else{
            for (int i=size-1; i>=0; i--){
                cout << head[i] << endl;
            }
        }
	}
    void Numbers::clear(){
        delete[] head;
    }
    void Numbers::bubbleSort(int numdesc)
    {
        if (numdesc==0)
        {
            int i, j;
            for (i = 0; i < size-1; i++)

            for (j = 0; j < size-i-1; j++)
                if (head[j] > head[j+1])
                    swap(head[j], head[j+1]);
        }
        else
        {
            int i, j;
            for (i = 0; i < size-1; i++)

            for (j = 0; j < size-i-1; j++)
                if (head[j] < head[j+1])
                    swap(head[j], head[j+1]);
        }
    }


