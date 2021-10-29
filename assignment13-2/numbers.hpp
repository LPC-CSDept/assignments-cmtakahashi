#ifndef 	NUMBERS_H
#define 	NUMBERS_H

#include <iostream>
#include <cstdlib>
using namespace std;

class Numbers
{
private:
	int 	size;
	int 	*head;
public:
	Numbers();
	Numbers(int) ;
	int getSize() const;
	int getElement(int) const;
	int getSum() const;
	int getAvg() const;
	void setElement(int, int);
	void setElement();
	void printOut (int) const;
    void clear();
    void bubbleSort(int);

};


#endif 