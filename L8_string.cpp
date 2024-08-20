#include<iostream>
#include<string> // allow the use of some functions of string
using namespace std;

int main()
{
    string name = "Erwin Smith"; // String is another data type in C++
    cout<<"My name is "<<name<<", 13th commander of Survey Corps."<<endl;
    cout<<"The length of the string is : "<<name.length()<<endl;
    cout<<"It prints the substring of the string : "<<name.substr(0,5)<<endl; // prints till 5-1 indexation
    return 0;
}
