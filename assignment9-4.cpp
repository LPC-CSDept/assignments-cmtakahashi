#include <iostream>
#include <fstream>
#include <cstring>

// using namespace std; 

const int MAX_LEN = 20;
const int NUM_SCORES = 3;

struct Students {
    int sid;
    char sname[MAX_LEN];
    double scores[NUM_SCORES];

};

Students *makeStudents(int );
void printStudents(Students * const, int);
void sortStudents(Students * const, int);

int main()
{

    const int N = 10;
    Students *ptr=nullptr;
    ptr = makeStudents(N);
    std::cout << "\nInital File Contents\n";
    std::cout << "-----------------------------------------\n";
    printStudents(ptr, N);
    sortStudents(ptr, N);
    std::cout << "\nStudents sorted by overall scores(asc):\n";
    std::cout << "-----------------------------------------\n";

    printStudents(ptr, N);
  
}

Students *makeStudents(int N)
{
    Students *ptr = new Students [10];

    std::ifstream ifs;

    ifs.open("students94.txt");
    if (ifs.fail())
    {
        std::cerr << "File open error \n";
        exit(0);
    }
    for (int i = 0; i < N; i++)
    {
        ifs >> (ptr+i)->sid >> (ptr+i)->sname; // saves the line of txt file to id/name
        for (int j = 0; j < NUM_SCORES; j++) // prints all scores in a loop
            ifs >> (ptr+i)->scores[j];

    }

    return ptr;

}

void printStudents(Students *const ptr, int N)
{
    for (int i =0; i < N; i++)
    {
        std::cout << (ptr+i)->sid << "\t" << (ptr+i)->sname << "\t";
        for (int j = 0; j < NUM_SCORES; j++) //
            std::cout << (ptr+i)->scores[j] << "\t";
            std::cout << std::endl;
    }
    std::cout << "======== End of Record ========= \n";
}

void sortStudents(Students *const ptr, int N)
{
    for(int i =0; i<N; i++)
    {
        for (int j =0; j<N-1; j++)
        {
            int sum1 = (ptr+j)->scores[0] + (ptr+j)->scores[1] + (ptr+j)->scores[2];
            int sum2 = (ptr+j+1)->scores[0] + (ptr+j+1)->scores[1] + (ptr+j+1)->scores[2];

            if (sum1 > sum2){
                {
                std::swap((ptr+j)->sid, (ptr+j+1)->sid);
                std::swap((ptr+j)->sname, (ptr+j+1)->sname);
                for (int k = 0; k < NUM_SCORES; k++) //
                    std::swap((ptr+j)->scores[k], (ptr+j+1)->scores[k]);

                }
        
            }

        }
        
    }

}

