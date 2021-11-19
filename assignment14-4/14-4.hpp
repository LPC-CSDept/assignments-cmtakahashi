#include <iostream>


class Numbers{
    private:
        int size;
        int *numbers;
    public:
        Numbers(){
            
            numbers = nullptr;
            size = 10;
        };
        Numbers(int s){
            size = s;
            numbers = new int [s];
            for (int i = 0; i < size; i++){
                numbers[i] = i*10;
            }
        };
        Numbers(const Numbers &p){
            this->size = p.size;
            this->numbers = new int[size];
            for (int i =0; i < size; i++){
                this->numbers[i] = p.numbers[i];
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
};

void printNumbers(Numbers numberSet){
    std::cout << "The numbers in your set are: ";
    for (int i =0; i < numberSet.getSize(); i++){
        std::cout << numberSet.numbers[i] << " ";
    }

}
