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

class ProductionWorker: public Employee{
    private:
        int shift; // int value represents the shift the employee works (day = 1, night = 2)
        double pay;

    public:
        ProductionWorker() : Employee(){
            shift = 0;
            pay = 0;
        }

        ProductionWorker(string name, int number, string hireDate, int shiftValue, double payRate) : Employee(name, number, hireDate){
            shift = shiftValue;
            pay = payRate;
        }
        
        int getShift(){
            return shift;
        }

        double getPay(){
            return pay;
        }

        void printAllInfo(ProductionWorker w[], int N){
            for(int i = 0; i < N; i++){
                cout << w[i].getName();
                cout << w[i].getNumber();
                cout << w[i].getHireDate();
                cout << w[i].getShift();
                cout << w[i].getPay();
            }

        }


};
