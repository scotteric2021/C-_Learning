/*This is the assignments code for MIT Opencourseware 6.096 Problem Set 2
Each assignment is labelled in the comments and commented in blocks so that
the individual assignment code can be uncommented, compiled and run.
*/

/* 3.1 code given
# include <iostream>

int main () {
    printNum (35) ;
    return 0;

}
void printNum (int number ) { std :: cout << number ; }
*/

// 3.1 assignment code
/*
#include <iostream>

using namespace std;    //First change the code to use the cleaner namespace declaration because I think it looks cleaner



void printNum (int number)  //The funtion needs to be defined before it is called
{
    cout << number ;    //Also make the output of the function easier to read
    }

int main () 
{
    

printNum (35);  //Then call the function and make it act right

return 0;

}
*/

/* 3.2 code given
# include <iostream>

void printNum () { std :: cout << number ; };

int main () {

    int number = 35;
    printNum ( number );
    return 0;

}
*/

//3.2 assignment code

/*
#include <iostream>

void printNum(int number)   //the data type must be defined in the function definition
{
    std :: cout << number;  //make the function output easier to read

} //There was a semicolon here that was unnecessary

int main()
{
    int number = 35;
    printNum(number);
    return 0;
}
*/

/* 3.3 code given
# include < iostream >

void doubleNumber (int num ) {num = num * 2;}

int main () {
    int num = 35;
    doubleNumber (num ) ;
    std :: cout << num ; // Should print 70
    return 0;
}
*/

//3.3 assignment code
/*
#include <iostream>

void doubleNumber(int &num) //Adding & makes num pass by reference which allows the funtion to store the new
                            //value in the variable so that after the function is called the correct value 
                            //is then stored in that address.
{
    num = num * 2;
}
int main()
{
    int num = 35;
    doubleNumber(num);
    std :: cout << num; //Should print 70
    return 0;
}
*/

/* 3.4 code given
# include < iostream >
# include < cstdlib > // contains some math functions

int difference ( const int x , const int y) {

    int diff = abs ( x - y ) ; // abs ( n) returns absolute value of n

}

int main () {

    std :: cout << difference (24 , 1238) ;
    return 0;
}
*/

//3.4 assignment code
/*
#include <iostream>
#include <cstdlib>

int difference(const int x, const int y)
{
    int diff = abs(x-y);    //abs(n) returns the absolute value of n
    return diff;    //The function returned no value as previously defined.  
}

int main()
{
    std :: cout << difference(24, 1238);    //Without the return diff statement running the difference function
                                            //would return no value and therefore do nothing.
    return 0;
}
*/

/* 3.5 code given

# include < iostream >

int sum ( const int x, const int y ) {
    return x + y ;
}

int main () {
    std :: cout << sum (1, 2, 3); // Should print 6
    return 0;
1}
*/

// 3.5 assignment code
/*
#include <iostream>

int sum(const int x, const int y, const int z)
{
    return x + y + z;
}

int main()
{
    //int z = sum(1, 2);      //Added additional sum step to combine the first 2 numbers
    //std :: cout << sum(z, 3);    //Should print 6

    //or the funtion could be redefined to add 3 numbers instead of just 2
    std :: cout << sum(1, 2, 3);
    return 0;
}
*/

// 3.6 code given
/*
# include < iostream >

const int ARRAY_LEN = 10;

int main () {

    int arr [ ARRAY_LEN ] = {10}; // Note implicit initialization of
                                // other elements

    int * xPtr = arr , yPtr = arr + ARRAY_LEN - 1;
    std :: cout << * xPtr << ’ ’ << * yPtr ; // Should output 10 0
    return 0;
}
*/

//3.6 assignment code

# include <iostream>

const int ARRAY_LEN = 10;

int main () {

    int arr [ ARRAY_LEN ] = {10}; // Note implicit initialization of
                                    // other elements

    int *xPtr = arr , *yPtr = arr + ARRAY_LEN - 1; //missing astrisk for yPtr to define it as a pointer to the array
    std :: cout << * xPtr << " " << *yPtr ; // Should output 10 0 
                                            //Changed single quotes to double quotes to output space as a string literal
    return 0;

}
