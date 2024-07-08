#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, best = 0;

    for(int a = 0; a <n; a++){
        for(int b = a; b <n; b++){
            int sum = 0;
            for(int k = a; k <= b; k++){
                sum += k;
            }
            best = max(best, sum);
        }
    }
    cout << best <<endl;
}
