/* 4.1
Write a single sum function that returns the sum of two integers. Also write the equivalent
function for taking the sum of two doubles.
*/

// To make the prorgram output the sum of 2 integer uncomment lines 11 through 28
// For the sum of 2 doubles leave lines 30 to 44 uncommented.  Both use the same header lines 8 to 10.
#include <iostream>

using namespace std;
/*
int sum(const int x, const int y)
{
    return (x + y);
}


int main()
{
    int num1, num2;
    cout << "Enter the first integer";
    cin >> num1;
    cout << "Enter the second integer";
    cin >> num2;
    cout << "The sum is " << sum(num1, num2);
    return 0;
}
*/

double sum(const double x, const double y)
{
    return (x + y);
}

int main()
{
    double num1, num2;
    cout << "Enter the first double";
    cin >> num1;
    cout << "Enter the second double";
    cin >> num2;
    cout << "The sum is " << sum(num1, num2);
    return 0;
}
