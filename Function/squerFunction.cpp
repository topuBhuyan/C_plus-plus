#include<iostream>
using namespace std;

int square(int x)
{
    int y;
    y = x*x;
    return y;
}

int main()
{
    int a , squ;

    cout<<"Enter any number = ";
    cin>>a;

    squ = square(a);
    cout<<"The number of :"<<squ;

    return 0;
}
