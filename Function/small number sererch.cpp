#include<iostream>
using namespace std;

int main()
{
    int a,b,smaller=0;
    cout<<"Enter tow number = ";
    cin>>a>>b;

    if(a<b){
        smaller = a;
    }else{
        smaller = b;
    }
    cout<< " the smaller number is: "<<smaller;
    return 0;
}
