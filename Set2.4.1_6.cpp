/* 4.1
Write a single sum function that returns the sum of two integers. Also write the equivalent
function for taking the sum of two doubles.
*/

// To make the prorgram output the sum of 2 integer uncomment lines 11 through 28
// For the sum of 2 doubles leave lines 30 to 44 uncommented.  Both use the same header lines 8 to 10.
#include <iostream>

using namespace std;

int sum3(const int, const int, const int);
int sum4(const int, const int, const int, const int);

int sum(const int x, const int y)
{
    return (x + y);
}


int main()
{
    int num1, num2, num3, num4;
    cout << "This program will sum the values of 2 to 4 integers.\n" << "Enter 0 to terminate sequence.\n";
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    cout << "Enter the third integer: ";
    cin >> num3;
    if (num3 > 0)
    {
        cout << "Enter the fourth integer: ";
        cin >> num4;
        if (num4 > 0)
        {
            cout << "The sum is " << sum4(num1, num2, num3, num4);
        }
        else
        {
            cout << "The sum is " << sum3(num1, num2, num3);
        }
    }
    else
    {
        cout << "The sum is " << sum(num1, num2);
    }
    
    return 0;
}

/*
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
*/
/*4.2
Explain why, given your functions from part 1, sum(1, 10.0) is a syntax error. (Hint: Think
about promotion and demotion – the conversion of arguments between types in a function
call. Remember that the compiler converts between numerical types for you if necessary.) [1
point] 
*/

/* sum(1, 10.0) would be a syntax error in the above functions because the first number given is an integer,
while the second is a floating point number.  The compiler would promote the integer to a float to match the second
unless it was defined as a double.  My program has a way around this by defining both inputs as doubles.
If the integer version was used then the output would only show the truncated integer version of the addition.
*/

/* 4.3
Write 2 more functions such that you can find the sum of anywhere between 2 and 4 integers
by writing sum(num1, num2, ...).
*/

int sum3 (const int x, const int y, const int z)
{
    return (x + y + z);
}

int sum4 (const int x, const int y, const int z, const int a)
{
    return (x + y + z + a);
}

/* 4.4
Now write just one function that, using default arguments, allows you to take the sum of
anywhere between 2 and 4 integers. What would happen if you put both this definition and
your 3-argument function from part 3 into the same file, and called sum(3, 5, 7)? Why?

int sum(const int x, const int y, const int z = 0, const int a = 0)
{
    return (x + y + z + a);
}

The compiler would be confused by the call to multiple funtions named "sum".  The names of the individual
funtions must be differentiated.  Hence "sum", "sum3" and "sum4"
*/

/*
Write a single sum function capable of handling an arbitrary number of integers. It should
take two arguments, include a loop, and return an integer. (Hint: What data types can you
use to represent an arbitrarily large set of integers in two arguments?)
*/

