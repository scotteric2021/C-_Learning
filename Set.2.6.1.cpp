#include <iostream>

using namespace std;


void printArray(const int array[], const int arrayLen)
{
    for(int i = 0; i < arrayLen; i++)
    {
        cout << array[i];
        if (i < arrayLen - 1)
        {
            cout << ", ";
        }
    }
    
}

void reverseArray(int array[], const int arrayLen)
{
    int tempArray[] = {0};
    for (int i = 0; i < arrayLen / 2; ++i)
    {
        tempArray[i]= array[i];
        array[i] = tempArray[arrayLen - i];
    }
}
int main()
{
    printArray(fibArray, 7);
    reverseArray(fibArray, 7);
    return 0;
}