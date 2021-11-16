#include "14-3.hpp"
#include<iostream>
using namespace std; 

int main(){
    Square square1;
    Rectangle rectangle1;

    square1.setWidth(20);

    rectangle1 = rectangle1.makeRectanglewithSquare(square1);

    cout << "The width of the rectangle is: " << rectangle1.getWidth() << endl;
    cout << "The height of the rectangle is: " << rectangle1.getHeight() << endl;

}

        