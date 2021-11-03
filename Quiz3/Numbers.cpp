#include "Numbers.hpp"
#include<iostream>
using namespace std; 

  Numbers:: Numbers(){
      ID = -1;

  }
  Numbers:: Numbers(int, int);
  Numbers::  ~Numbers();
  int Numbers::getID() const{
      return ID;
  }
  int Numbers::getSize() const{
      return numbers.size();
  }
  int Numbers::getElm(int i) const;
  int Numbers::getMax() const;
  int Numbers::getMin() const;
  int Numbers::getSum() const;
  void Numbers::deleteElm(int d);
  void Numbers::addElm(int a);
  void Numbers::printAll() const{
      for(int i =0; i < numbers.size()-1; i++)
      {
          cout << numbers[i] << "\t";
      }
      cout << endl;
  }
