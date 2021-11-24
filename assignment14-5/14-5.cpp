#include <iostream>


class Numbers{
    private:
        int size;
        int *numbers;
    public:
        Numbers(){
            size = 10;
            numbers = nullptr;
        };
        Numbers(int s){
            size = s;
            numbers = new int [s];
            for (int i = 0; i < size; i++){
                numbers[i] = i*10;
            }
        };
        Numbers(const Numbers &p){
            this ->size = p.size;
            this ->numbers = new int[size];
            for (int i =0; i < size; i++){
                this ->numbers[i] = p.numbers[i];
            }
        };
        ~Numbers(){
            std::cout << std::endl <<  "Destructor activated..." << std::endl;
            delete [] numbers;
        };
        int getMax() const{
            int max = numbers[0];
            for (int i = 0 ; i < size; i++){
                if (numbers[i] > max){
                    max = numbers[i];
                }
            }
            return max;
        };
        friend void printNumbers(Numbers numberSet);
        int getSize(){
            return size;
        };

        int operator>(const Numbers &n){
            int nums1 = 0;
            int nums2 = 0;
            for (int i =0; i < size; i++){
                nums1+=numbers[i];
            }
            for (int i =0; i < n.size; i++){
                nums2+=n.numbers[i];
            }
            
            if (nums1 > nums2){
                return 1;
            }
            else   
                return 0;
            
        };

        Numbers operator=(const Numbers &n){
            Numbers n1;
            n1.size = n.size;
            for(int i = 0; i < size; i++){
                 n1.numbers[i] = n.numbers[i];
            }
        
            return n1; // ?

        };
        Numbers operator+(const Numbers &n){
            Numbers newNums;
            newNums.size = size + newNums.size;
            newNums.numbers=new int[newNums.size];

            for (int i=0; i<size; i++) {
                newNums.numbers[i] = numbers[i];
            }
            for (int i=size; i<newNums.size; i++) {
                newNums.numbers[i] = n.numbers[i];
            }
            return newNums;
        };
        


};

void printNumbers(Numbers numberSet){
    std::cout << "The numbers in your set are: ";
    for (int i =0; i < numberSet.getSize(); i++){
        std::cout << numberSet.numbers[i] << " ";
    }

}

int main(){

    Numbers n1(10);
    Numbers n2(n1);

    std::cout << "The numbers in the first set are: ";
    printNumbers(n1);

    std::cout << "The numbers in the second set are: ";
    printNumbers(n2);
    
    if (n1 > n2){
       std::cout << "The bigger set is: n1" << std::endl;
    }
    else
        std::cout << "The bigger set is: n2" <<  std:: endl;
 
    Numbers n3=n1+n2;
    // is this correct? or the line above?    Numbers n3(n1+n2); 
    std::cout << "The numbers in the third set are: ";
    printNumbers(n3);

}
