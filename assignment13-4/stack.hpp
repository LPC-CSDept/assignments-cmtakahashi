#ifndef STACK_H
#define STACK_H

#include <vector>
#include <iostream>
using namespace std;

template<class T> 
class Stack
{
    private:
		vector<T> pool;
    public:
		Stack()
		{
			pool.reserve(0);
		}
		Stack(T s)
		{
			pool.reserve(s);
		}
		T isEmpty()
		{
			return pool.empty();
		}
		void clear()
		{
			pool.clear();
		}
		void push(T el)
		{
			pool.push_back(el);
		}
		T pop() 
		{
			T value = pool.back();
			pool.pop_back();
			return value;
		}
		T topEl() 
		{
			return pool.back();
		}
		T getSize()
		{
			return pool.size();
		}
		void printAll() 
		{
			for(int i=0; i<pool.size(); i++)
				cout << pool[i] << "\t";
			cout <<endl;
		}
};

#endif