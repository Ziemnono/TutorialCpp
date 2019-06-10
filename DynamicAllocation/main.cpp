#include <iostream>
#include <string>
#include <utility>

void sortArray(std::string *array, int length)
{
    // Step through each element of the array
    // (except the last, because by the time we get there, the array will be sorted)
    for (int startIndex = 0; startIndex < length-1; ++startIndex)
    {
        // smallestIndex is the index of the smallest element we've encountered so far.
        int smallestIndex = startIndex;

        // Look for smallest element remaining in the array (starting at startIndex+1)
        for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
        {
            // If the current element is smaller than our previously found smallest
            if (array[currentIndex] < array[smallestIndex])
                // This is the new smallest number for this iteration
                smallestIndex = currentIndex;
        }

        // Swap our start element with our smallest element
        std::swap(array[startIndex], array[smallestIndex]);
    }
}
using namespace std;

int askNames(){
    int x;
    std::cout<<"How many names would you like to enter ? ";
    std::cin>>x;
    return x;
}
int main()
{
    int len = askNames();
    std::string *names = new std::string[len];
    for(int i=0;i<len;i++){
        std::cout<<"Enter a name : ";
        std::cin>>names[i];
    }
    sortArray(names,len);
    std::cout<<"\nHere is your sorted list : \n";
    for(int i=0;i<len;i++){
        std::cout<<"Name #"<<i<<" : "<<names[i]<<"\n";
    }
}
