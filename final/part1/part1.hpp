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

void printCourseInfo(Course c[], int N){
    cout << endl;
    cout << "ID\t" << "Couse\t" << "Credits\t"  << endl;
    cout << "====================================" << endl;

    for (int i =0; i < N; i++){
        cout << c[i].getID() << "\t" << c[i].getName() << "\t" << c[i].getCredit() << endl;
        
    }
}
