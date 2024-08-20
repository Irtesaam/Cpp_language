#include<iostream>
using namespace std;

int sum(int a, int b) // function declaration outside of main acts as global function
{
    int c;
    c = a + b;
    return c;
}

int main()
{
      // Functions :
    int a, b;
    cout << "Enter 1st number : " << endl;
    cin >> a;
    cout << "Enter 2nd number : " << endl;
    cin >> b;
    cout << "The sum of the number using functions is : " << sum(a, b);
    return 0;
}
