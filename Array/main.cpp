#include <iostream>

using namespace std;
namespace ANIMALS {
enum{
    CHICKEN,
    DOG,
    CAT,
    ELEPHANT,
    DUCK,
    SNAKE,
    MAX_ELEMENTS
};
}

int askValue(){
    int entry;
    do{
        std::cout<<"Pleas enter a value for the array (max = 9) : ";
        std::cin>>entry;
        if (std::cin.fail())
        {
            std::cin.clear(); // reset any error flags
            std::cin.ignore(32767, '\n'); // ignore any characters in the input buffer
        }
    }while(entry < 1 || entry >9);
    return entry;
}
int main()
{
    int max;
    max = askValue();
    int array[] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    for(int i=0;i<max;i++)
        std::cout<<array[i]<<std::endl;
}
