#include <iostream>
using namespace std;


int main()
{
//   Arrays :
    // 1) 1D Array :
    int arr[4] = {91, 12, 52, 34};
    cout <<"Third element in this array is : "<< arr[2]<<endl; // prints nuumber at 3rd index

    int marks[6];
    for (int i = 0; i < 6; i++)
    {
        cout<<"Enter the marks of "<<i<<"th student : ";
        cin>>marks[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cout<<"The marks of "<<i<<"th student is : "<<marks[i]<<endl;
    }

    int markss[6];
    for (int i = 1; i < 7; i++)
    {
        cout<<"Enter the marks of "<<i<<"th student : "<<endl;
        cin>>markss[i];
    }
    for (int i = 1; i < 7; i++)
    {
        cout<<"The marks of "<<i<<"th student is : "<<markss[i]<<endl;
    }

    // 2) 2D Array :
    int _2dmatrix[3][3] = {   // This is just like a matrix
        {1,2,3},
        {4,5,6},    // index will always start from 0. Keep that in mind while running for loop
        {7,8,9}
    };
    for (int i = 0; i < 3; i++) // will print all combination of j with i=0 before proceeding to i=1
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"The value of array at "<<i<<","<<j<<" is : "<<_2dmatrix[i][j]<<endl;
        }

    }

 return 0;
}
