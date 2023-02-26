#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    int n[3];

    int i;

    for(i = 0; i<3; i++)
    {
        cin>>n[i];
    }
    for(i=0; i<3; i++)
    {
        cout<<" ",n[i];
    }

    return 0;
}
