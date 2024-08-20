#include <iostream>  // preprocessor command
using namespace std; // we can use names for objects and variables from the standard library

int main()
{
       cout<<"Hello World"<<endl; // cout : console output

    Variables :
    int a,A,_Aa; // variables are case sensitive & starts with letters or underscore
    a=9;
    A=17;
    _Aa=24;
    cout<<A<<endl;
    cout<<a<<endl;
    cout<<_Aa<<endl;

    // camelcase notation : useful for calling large variable names. Just type mIP to call variable
        int marksInPhy=94;
        cout<<"The marks in Physics is : "<<marksInPhy;
    return 0;
}
