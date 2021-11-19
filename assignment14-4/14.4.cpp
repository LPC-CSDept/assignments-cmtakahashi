#include "14-4.hpp"
#include <iostream>

int main(){
    Numbers n1(10);
    Numbers n2(n1);

    std::cout << "The numbers in the first set are: ";
    printNumbers(n1);
    std::cout << "The biggest number in the first set is: " << n1.getMax() << std::endl << std::endl;

    std::cout << "The numbers in the second set are: ";
    printNumbers(n2);
    std::cout << "The biggest number in the second set is: " << n2.getMax() << std::endl;
}