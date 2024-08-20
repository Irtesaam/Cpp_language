#include<iostream>
using namespace std;

int main()
{
    //   Loops in C++ : while, do-while, for
    // 1) While loop :
    int index = 0;
    // while (index < 41)
    // {
    //     cout << "We are at index no. " << index << endl;
    //     index += 1;
    // }

    // 2) do-while loop :
    do // do-while loop will run atleast once unlike while loop which will only run when the condition is true.
    {
        cout << "We are at index no. " << index << endl;
        index += 1;
    } while (index > 20); // will execute do atleast once but not further as the condition is false
    //  while (index < 41); // will print normally like while loop above

    // 3) for loop :
    for (int i = 1; i < 41; i++) // for *variable declaration*; *variable condition*; *increment/decrement using i++*
    {
        cout << "The value of i is : " << i << endl;
    }
    return 0;
}
