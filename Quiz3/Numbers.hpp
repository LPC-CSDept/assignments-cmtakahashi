#ifndef Numbers_H
#define Numbers_H
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Numbers{
  private:
  int ID;
  vector<int> numbers;

  public: 
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

};

#endif