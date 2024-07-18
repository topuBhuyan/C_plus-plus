#include<bits/stdc++.h>
using namespace std;

string get_userName();

int main()
{
    string userName = get_userName();
    cout <<"Hello, " <<userName;

    return 0;
}
string get_userName()
{
    string name;
    cout <<"Enter your user name\n";
    cin >> name;

    return name;
}
