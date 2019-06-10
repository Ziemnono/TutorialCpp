#include <iostream>
#include <random> // for std::mt19937
#include <ctime> // for std::time

namespace MyRandom
{
    // Initialize our mersenne twister with a random seed based on the clock (once at system startup)
    std::mt19937 mersenne(static_cast<std::mt19937::result_type>(std::time(nullptr)));
}

int getRandomNumber(int min, int max)
{
    std::uniform_int_distribution<> die(min, max); // we can create a distribution in any function that needs it
    return die(MyRandom::mersenne); // and then generate a random number from our global generator
}
int getNumber(int ite){
    int x;
    std::cout<<"Guess "<<ite<<": ";
    std::cin>>x;
    return x;
}
int compare(int x, int ref){
    if (x>ref){
        std::cout<<"Your guess is too high \n";
        return 1;
        }
    else if (x<ref){
        std::cout<<"Your guess is too low \n";
        return 1;
        }
    else {
        std::cout<<"Correct you win \n";
        return 0;
    }

}
void game(){
    std::cout<<"Let's play a game.  I'm thinking of a number.  You have 7 tries to guess what it is \n";
    int number{getRandomNumber(0,100)};
    for(int count{1};count<8;++count){
        int num;
        int res;
        num = getNumber(count);
        res = compare(num,number);
        if(res==0) break;
    }
}
bool again(){
    char replay;
    do{
        std::cout<<"Would you like to play again (y/n)? \n";
        std::cin>>replay;
        }while(replay!='n' && replay!='y');
    return (replay == 'y');
}
int main()
{do{
    game();
    }while(again());
    return 0;
}
