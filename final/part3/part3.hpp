#include <iostream>
#include <fstream>

using namespace std;

class Employee{
    private: 
        string name;
        int number;
        string hireDate;

    public:
        Employee(){
            name = "";
            number = 0;
            hireDate = "";
        }
        
        Employee(string name, int number, string hireDate);

        string getName(){
            return name;
        }

        int getNumber(){
            return number;
        }

        string getHireDate(){
            return hireDate;
        }

};
