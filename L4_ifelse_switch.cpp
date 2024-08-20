#include<iostream>
using namespace std;

int main()
{
      // if-else conditional statement
    int age;
    cout << "Enter your age : " << endl;
    cin >> age;
    if (age <= 0 or age >= 150) // this is necessary condition to check so put it above all. if this condition is wrong then only it will proceed to the next one
    {
        cout << "Invalid ! Please enter a valid age";
    }
    else if (age >= 18)
    {
        cout << "You can vote !"<<endl;
    }
    else
    {
        cout << "You still have " << 18 - age << " years left for you to be eligible to vote"<<endl;
    }

    // switch statement : It is the best alternative to the lengthy if statements that are used to compare a variable to different integral values
    int day;
    cout << "Enter a day number (1-7): ";
    cin >> day;

    switch (day) // compare this var to different integral values
    {
    default: // If someone enters any number apart from those in cases, then this statement will be excuted
        cout << "Not a valid weekday." << endl;
        break; // if break is not used, then it will continue to check conditions and iterate
    case 1:
        cout << "It's Monday!" << endl;
        break;
    case 2:
        cout << "It's Tuesday!" << endl;
        break;
    case 3:
        cout << "It's Wednesday!" << endl;
        break;
    case 4:
        cout << "It's Thursday!" << endl;
        break;
    case 5:
        cout << "It's Friday!" << endl;
        break;
    case 6:
        cout << "It's Saturday!" << endl;
        break;
    case 7:
        cout << "It's Sunday!" << endl;
        break;
    }
    return 0;
}
