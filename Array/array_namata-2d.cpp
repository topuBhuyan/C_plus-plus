#include<iostream>
using namespace std;

int main()
{
    int table[10][10];

    int i,j,n;

    for(i=1; i<=10; i++){
        for(j=1; j<=10; j++){
            table[i-1][j-1] = i*j;
        }
    }
    cout<<"Enter digit = ";
    cin>>n;

    for(i=1; i<=10; i++){

        cout<<" = " <<n<<i, table[n-1][i-1];
    }
    return 0;
}
