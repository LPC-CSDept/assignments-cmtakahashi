#include <iostream>

using namespace std;

class Course{
    private:
        int ID;
        string name;
        int credit;

    public:

       void setID();
       void setName();
       void setCredit();

       int getID();
       string getName();
       int getCredit();

};
