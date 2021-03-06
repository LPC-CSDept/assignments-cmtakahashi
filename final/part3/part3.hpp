#include <iostream>
#include <fstream>
#include <iomanip>

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

        void setName(string n){
            name = n;
        }

        void setNumber(int num){
            number = num;
        }

        void setHireDate(string hDate){
            hireDate = hDate;
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

        void setShift(int s){
            shift = s;
        }

        void setPay(double p){
            pay = p;
        }

        friend double getHighestPay(ProductionWorker w[], int N){
            double highestPay = 0;
            for (int i =0; i < N; i++){
                if(w[i].getPay() > highestPay){
                    highestPay = w[i].getPay();
                }
            }
            return highestPay;

        }
        friend bool operator > (ProductionWorker &w1, ProductionWorker &w2){
            if(w1.getPay() > w2.getPay()){
                return true;
            }
            else 
                return false;
        };
        

        
};
        


void printAllInfo(ProductionWorker w[], int N){
    for(int i = 0; i < N; i++){
        cout << w[i].getName() << "\t";
        cout << w[i].getNumber() << "\t";
        cout << w[i].getHireDate() << "\t";
        cout << w[i].getShift() << "\t";
        cout << w[i].getPay() << endl;
    }

}

void printRichestEmployee(ProductionWorker w[], int N){
            double highestPay = 0;
            int index =0;
            for (int i =0; i < N; i++){
                if(w[i].getPay() > highestPay){
                    highestPay = w[i].getPay();
                    index = i;
                }
            }
            cout << "Here's the employee with the highest pay: " << endl;
            cout << w[index].getName() << "\t";
            cout << w[index].getNumber() << "\t";
            cout << w[index].getHireDate() << "\t";
            cout << w[index].getShift() << "\t";
            cout << w[index].getPay() << endl;


        }