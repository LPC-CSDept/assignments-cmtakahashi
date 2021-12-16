#include <iostream>

using namespace std;

class Course{
    private:
        int ID;
        string name;
        int credit;

    public:

       void setID(int x){
           ID = x;
       };
       void setName(string n){
           name = n;
       };
       void setCredit(int c){
           credit = c;
       };

       int getID(){
           return ID;
       };
       string getName(){
           return name;
       };
       int getCredit(){
           return credit;
       };

};
