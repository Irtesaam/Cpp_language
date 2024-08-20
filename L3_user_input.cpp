// Take user input
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter 1st number :" << endl;
    cin >> a;
    cout << "Enter 2nd number :" << endl; // endl for newline
    cin >> b;
    cout << "The sum of " << a << " and " << b << " is : " << a + b << endl;
    cout << "The difference of " << a << " and " << b << " is : " << a - b << endl;
    cout << "The product of " << a << " and " << b << " is : " << a * b << endl;
    cout << "The division of " << a << " by " << b << " is : " << (float)a / b << endl; // adding (float) is called typecasting and is used to convert int to float for that specific operation
    // There are many types of operators like : logical, bitwise, etc

    // Typecasting
    float c=74.865;
    cout<<"The floating number "<<c<< " is converted to int : "<<(int) c<<" using typecasting ";
    return 0;
}
