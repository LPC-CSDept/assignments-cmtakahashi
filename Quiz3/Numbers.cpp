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

  int Numbers::getElm(int i) const{
      return numbers[i];
  }

  int Numbers::getMax() const{
    int max = numbers[0];
    for (int i = 0;  i < numbers.size(); i++)
    {
        if (max < numbers[i]){
            max = numbers[i]; 
        }
    }
  }

  int Numbers::getMin() const{
    int min = numbers[0];
    for (int i = 0;  i < numbers.size(); i++)
    {
        if (min > numbers[i]){
            min = numbers[i]; 
        }
    }
  }


  int Numbers::getSum() const;
  void Numbers::deleteElm(int d);
  void Numbers::addElm(int a){
      numbers.push_back(a);
  }
  void Numbers::printAll() const{
      for(int i =0; i < numbers.size()-1; i++)
      {
          cout << numbers[i] << "\t";
      }
      cout << endl;
  }
