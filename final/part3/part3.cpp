#include "part3.hpp"
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    const int N = 10;
    ProductionWorker workers[N];

    ifstream data_file("workers.txt");
    if(data_file.fail()){
        cout << "Error encountered when attempting to open the file!" << endl;
        return 1;
    }

    string name, date;
    int number, shift;
    double pay;
    int n =0;

    while (!data_file.eof() && n<N){
        data_file >> name;
        data_file >> number;
        data_file >> date;
        data_file >> shift;
        data_file >> pay;

        ProductionWorker w;
        w.setName(name);
        w.setNumber(number);
        w.setHireDate(date);
        w.setShift(shift);
        w.setPay(pay);

        workers[n] = w;
        n++;
    };

    printAllInfo(workers, N);

    cout << "The greatest salary among all workers is: " << getHighestPay(workers, N);
}