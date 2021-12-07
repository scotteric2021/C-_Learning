#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//This program will illustrate how setprecision() will round a quotient

int main() {
    float number1, number2, quotient;
    cout << "Enter a floating point number: ";
    cin >> number1;
    cout << "Enter a floating point divisor: ";
    cin >> number2;

    quotient = number1 / number2;

 /*   for(int i = 0; i < 10; i++)
    {
        cout << setprecision(10 - i) << quotient << endl;
    }
*/

//    cout << setprecision(3) << fixed;   //program output changed to give a fixed precision

    cout << setprecision(3) << showpoint;

    cout << number1 << " divided by " << number2 << " is " << quotient << endl;
return 0;
}