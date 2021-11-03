#include "Numbers.hpp"
#include<iostream>
using namespace std; 

  Numbers:: Numbers(){
      ID = -1;

  }
  Numbers:: Numbers(int groupID, int size ){
      ID = groupID; 
  }
  Numbers::  ~Numbers(){

  }
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
    return max;
  }

  int Numbers::getMin() const{
    int min = numbers[0];
    for (int i = 0;  i < numbers.size(); i++)
    {
        if (min > numbers[i]){
            min = numbers[i]; 
        }
    }
    return min;
  }

  int Numbers::getSum() const{
      int sum = 0;
      for (int i = 0; i < numbers.size() - 1; i++){
          sum += numbers[i];
      }
      return sum;
  }
  void Numbers::deleteElm(int d){
      vector <int>::iterator iter; 
      for (iter = numbers.begin(); iter < numbers.end(); iter++)
      {
          if (*iter ==d){
            numbers.erase(iter);
          }

      }
  }
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
