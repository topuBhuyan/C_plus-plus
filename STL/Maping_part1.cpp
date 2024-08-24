#include<bits/stdc++.h>
using namespace std;


int main(){

    vector<int> v = {2, 3, 6, 8, 9};

    for (int i = 0; i < 5; i++) {
            cont[v[i]]++;
    }
_______________________________________
    // usign string and integer.

    map<string , int > id;

    id["topu"] = 1;
    id["rohim"] = 2;
    id["korim"] = 3;

    cout << id["korim"] <<'\n';
_______________________________________

    // using string

    map < string , string > gender;

    gender["topu"] = "Male";
    gender["akhi"] = "Female";

    cout <<gender["topu"] << ' ' << gender["akhi"] <<'\n';

    vector < long long > v = {1, 294734324, 21342142, 23423432};

    map <long long, int> cnt;

    for (int i=0; i<v.size(); i++) {
        cnt[v[i]]++;
    }
    cout << cnt[294734324] <<'\n';
_______________________________________

    // using for each

  vector < long long > v = {1, 294734324, 21342142, 23423432};

    map <long long, int> cnt;

    for( auto u : v) cnt[u]++;

    for(auto u : cnt){
        cout << u.first <<" " << u.second <<'\n';
    }
_______________________________________

    // string and value

    map <string, int> id;

    id["topu"] = 3;
    id["rudra"] = 8;
    id["alif"] = 6;
    id["rohim"] = 2;
    id["korim"] = 5;

    for(auto u : id) {
        cout << u.first <<' ' << u.second <<'\n';
    }
_______________________________________

    // using bool

    map<int, bool> vis;

    vector<int> v = {2, 2, 1, 1, 3};

    for(auto u : v) vis[u] = 1;

    for(auto u : vis)
        cout << u.first << ' '  << u.second << '\n';

    return 0;
}
