#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int getASCII[94];   //initialize an array for the decimal values of the ascii characters

    for(int i = 0; i < 94; i++)     //adjusted numbers from original "92" in both for loops
    {
        getASCII[i] = i + 33;       //store values in the array from 33 to 126
    }

    cout << "Decimal" << setw(13) << "ASCII" << endl;
    for(int j = 0; j < 94; j++)
    {
        cout << getASCII[j] << setw(13) << static_cast<char>(getASCII[j]) << endl;  //display both the decimal value in the array and the associated ASCII character
    }
    return 0;
}