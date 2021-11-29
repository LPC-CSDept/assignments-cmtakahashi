#ifndef NUMBERS_H
#define NUMBERS_H

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

    int operator>(const Numbers &n){
        int nums1 = 0;
        int nums2 = 0;
        for (int i =0; i < values.size(); i++){
            nums1+=values[i];
        }
        for (int i =0; i < n.values.size(); i++){
            nums2+=n.values[i];
        }
        
        return nums1 > nums2;

        
    };
    

};

int Numbers::NumofObjects = 0;

void printNumbers(Numbers n){
    cout << "The numbers in your set are: ";
    for (int i =0; i < n.values.size(); i++){
        cout << n.values[i] << " ";
    }
    cout << endl;
}

#endif