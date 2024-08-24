#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Unique Element
    vector<int> v = {2, 3, 5, 5, 6, 7, 7, 1};

    sort ( v.begin(), v.end() );

    int Sz = unique ( v.begin(), v.end()) - v.begin();

    cout <<Sz <<endl;

    for(int i=0; i<Sz; i++){
        cout <<v[i] <<" ";
    }
    cout <<endl;
________________________________________
    // Max elements

     vector<int> v = {2, 3, 5, 5, 6, 7, 7, 1};

     vector<int>:: iterator it = max_element (v.begin(), v.end());
     cout << *it <<endl;
________________________________________
    // 0-4 elements max number

    vector<int> v = {2,3,5,6,6,7,7,1};

    vector<int>::iterator it = max_element(v.begin()+1, v.begin()+4);
    cout << *it <<endl;
________________________________________
    // index print

    vector<int> v = {2,3,5,6,6,7,7,1};

    int n = max_element(v.begin(), v.end()) - v.begin();
    cout << n <<endl;

    vector<int> v = {2,3,5,6,6,7,7,1};

    int n = min_element(v.begin(), v.end() - v.begin() );
    cout << n <<endl;
________________________________________
    // 2D Vector
    vector< vector<int> > v;

    vector<int> a1 = {2, 5, 6, 7, 8};
    vector<int> a2 = {5, 9, 3, 5, 1, 4};

    v.push_back (a1);
    v.push_back (a2);

    for(auto u : v)
    {
        for(auto g : u)
            cout << g <<" ";
        cout <<endl;
    }

    return 0;
}
