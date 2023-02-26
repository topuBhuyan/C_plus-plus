#include<iostream>
using namespace std;

int minimum(int a, int b)
{
    int temp ;

    if(a<b){
        temp = a;
    }else {
        temp = b;
    }
    return temp;
}

int main()
{
    int a,b,c,t1,t2;
    cout<<"Enter three number = ";
    cin>>a>>b>>c;

    t1 = minimum(a,b);
    t2 = minimum(b,t1);
    cout<<"The number of : "<<t2;

    return 0;
}
