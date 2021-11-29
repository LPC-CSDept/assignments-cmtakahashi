#include <iostream>
#include <vector>

using namespace std;

class Numbers{
    private:
    int ID;
    vector<int> values;
    static int NumofObjects;

    public:
    Numbers(){
        ID = 0;
        NumofObjects++;
    }

    Numbers(int i, int n){
        ID = i;
        for (int j = 0; j < n; j++){
            values.push_back(rand()%100);
        }
        NumofObjects++;
    };

    int getID(){
        return ID;
    }

    static int getNumObjects(){
        return NumofObjects;
    }

   friend void printNumbers(Numbers n);



};

int Numbers::NumofObjects = 0;

void printNumbers(Numbers n){
    cout << "The numbers in your set are: ";
    for (int i =0; i < n.values.size(); i++){
        cout << n.values[i] << " ";
    }
    cout << endl;
}