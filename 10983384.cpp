#include <iostream>

using namespace std;

int main()
{
    //KEVIN JONES LAMPTEY - 10983384//
    int a, b, c, x, y, avg;
    y = 2;
    cout << "Enter the prime numbers between 1 and 6 to find their Average" << endl;
    cout << "Enter the first prime number: " << endl ;
    cin >> a ;
    cout << "Enter the second prime number: " <<endl ;
    cin >> b;
    cout << "Enter the third prime number: " <<endl ;
    cin >> c;
    x = a + b + c;
    avg = x/y;

    cout << "The average of the primes numbers are: " << avg ;

    return 0;
}
