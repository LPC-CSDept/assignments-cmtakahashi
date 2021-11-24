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
            
            return nums1 > nums2;

            
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
        friend std::ostream &operator << (std::ostream & os, const Numbers &n){
            os << n.size << std::endl;
            for (int i=0; i<n.size; i++){
                os << n.numbers[i] << " ";
            }
            return os;
        }
        friend std::istream &operator >> (std::istream & is, const Numbers &n){
            for (int i=0; i<n.size; i++){
                is >> n.numbers[i];
            }
            return is;
        }


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

    std::cout << "======================================================" << std::endl;
    std::cout << "Here's what'sin the n1 set: " << std::endl;
    std::cout << n1 << std:: endl;
    std::cout << "Enter your values: ";
    std::cin >> n1;
    std::cout << std::endl << "The set now consists of: " << std::endl;
    std::cout << n1 << std::endl;

}
