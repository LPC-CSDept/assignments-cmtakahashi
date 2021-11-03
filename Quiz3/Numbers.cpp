#include "Numbers.hpp"
#include<iostream>
using namespace std; 

  Numbers();
  Numbers(int, int);
  ~Numbers();
  int getID() const;
  int getSize() const;
  int getElm(int i) const;
  int getMax() const;
  int getMin() const;
  int getSum() const;
  void deleteElm(int d);
  void addElm(int a);
  void printAll() const;
