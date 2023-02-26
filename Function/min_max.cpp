#include<iostream>
using namespace std;

int minimum(int a, int b)
{
    int temp;

    if(a<b){
        temp = a;
    }else{
        temp = b;
    }
    return temp;
}
int main()
{
    int a,b,smaller=0;

    cout<<"Enter two number = ";
    cin>>a>>b;

    smaller = minimum(a,b);
    {
        cout<<"smaller number is: "<<smaller;
    }

    return 0;
}
