#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    int cnt = 0;

    while( n > 0 ) {
        if(n % 2 == 1) cnt++;
        n >>= 1;
    }
    return 0;
}
