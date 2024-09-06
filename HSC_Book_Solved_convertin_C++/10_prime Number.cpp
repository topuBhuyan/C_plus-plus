#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n, i, m=0, flag = 0;
   cout <<"Enter the number of check prime: ";
   cin >> n;

   m = n/2;

   for(i = 2; i<= m; i++) {
    if(n % i == 0) {

        cout <<"Number is not prime" <<'\n';
        flag = 1;
        break;
    }
   }
   if(flag == 0)
    cout <<"Number is Prime" <<'\n';

    return 0;
}
