#include<bits/stdc++.h>
using namespace std;

int main()
{
    /// Array Declaration
    
    int a[4] = {2,3,4,6};

    for(int i=0; i<4; i++)
    {
        cout <<a[i] <<" ";
    }
_____________________________________

    vector<int> v;

    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    v[2] = 12; /// value resize
    cout <<v[2];
_____________________________________
    
   vector<int> v;

    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    cout <<v.size(); /// element size
_____________________________________
    
    vector<int> v;

    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);

    for(int i=0; i<v.size(); i++)
    {
        cout <<v[i] <<" ";
    }
_____________________________________

    vector<int> v;

    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);

    for(int i=0; i<4; i++)
    {
        cout <<v[i] <<" ";
    }


    vector<int> v={22,3,4,5};

    for(int i=0; i<v.size(); i++)
    {
        cout <<v[i] <<" ";
    }
_____________________________________

    /// Take input from User !!
    int n;
    vector<int> v;

    cin >>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
     cout <<v.size() <<endl;

    for(int i=0; i<v.size(); i++){
        cout <<v[i] <<" ";
    }
    cout <<endl;
_____________________________________
    
    vector<int> v={2,5,6,7,8};

    cout<<v.size()<<endl;

    for(int i=0; i<v.size(); i++)
    {
        cout <<v[i] <<" ";
    }
    cout <<endl;

    /// v.clear()

    vector<int> v={4, 5, 7, 8, 3};
    v.clear();

    cout <<v.size() <<endl;
_____________________________________
    
    /// Empty()

    vector<int> v ={4, 5, 8, 9};

    v.clear();
    v = {2,3};

    cout <<v.empty() <<endl;
_____________________________________
    
    /// Resize

    vector<int> v={5, 4, 3, 7, 9};
    v.resize(10);

    cout <<v.size() <<endl;

    for(int i=0; i<v.size(); i++){
        cout <<v[i] <<" ";
    }
    cout <<endl;
_____________________________________

     vector<int> v(10);

     int n;
     cin >>n;

     for(int i=0; i<n; i++){
        cin >>v[i];
     }
     cout <<v.size() <<endl;

     for(int i=0; i<v.size(); i++){
        cout <<v[i] <<" ";
     }
     cout <<endl;
_____________________________________

        vector<int> v(10, 5);

        for(int i=0; i<v.size(); i++){
            cout <<v[i] <<" ";
        }
        cout <<endl;
_____________________________________

    /// value Copy

    vector<int> v={2,4,6,7,8,9};
    vector<int> tem;

    tem = v;

    cout <<tem.size() <<endl;
    for(int i=0; i<tem.size(); i++){
        cout <<tem[i] <<" ";
    }
    cout <<endl;

    cout <<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout <<v[i] <<" ";
    }
    cout <<endl;
_____________________________________
    
    /// iterator

    vector<int> v={2, 3, 4, 5};

    vector<int>::iterator it;

    for( it = v.begin(); it != v.end(); it++){
        cout << *it <<" ";
    }
    cout <<endl;
_____________________________________
    
    /// For each Loop

    vector<int> v={2, 3, 4, 5};

    for(int u : v){
        cout <<u <<" ";
    }
    cout <<endl;
_____________________________________
    
    /// auto variable = int doule float যাই থাকুক না কেনো সবই অটো করে নিবে

    vector<int> v={2, 3, 4, 6};

    for(auto u : v) {
        cout <<u <<" ";
    }
    cout <<endl;
_____________________________________
/// 0 na powa porjonto input neyoa

    int n;
    vector<int> v;

    while( 1 ){
        cin >>n;
        if(n == 0) break;
        v.push_back( n );
    }
    cout <<v.size() <<endl;

    for(auto u : v){
        cout << u <<" ";
    }
    cout <<endl;
_____________________________________
    /// Sorting

    vector<int> v ={5, 3, 6, 8, 1};

    sort ( v.begin(), v.end() );
//
    for(auto u : v){
        cout << u << " ";
    }
    cout << endl;
_____________________________________
    /// koto projonto sort korbe ta ble daya

    vector<int> v = {5, 3, 6, 7, 9, 10, 1 };

    sort( v.begin()+1, v.begin()+3 );

    for(auto u : v)
    {
        cout << u <<" ";
    }
    cout <<endl;
_____________________________________
    
    /// vro thake choto print. <greater> atr nam comparisom

        vector<int> v = {3, 2, 1, 9, 4, 5 };

    sort( v.begin(), v.end(), greater<int>() );

    for(auto u : v){
        cout << u <<" ";
    }
    cout <<endl;
_____________________________________
    
        /// rbegin and rend used

    vector<int> v = {3, 2, 1, 9, 4, 5 };

    sort( v.rbegin(), v.rend() );

    for(auto u : v){
        cout << u <<" ";
    }
    cout <<endl;
_____________________________________
    /// chto thake vro

    vector<int> v = {3, 2, 1, 9, 4, 5 };

    sort( v.begin(), v.end(), less<int>() );

    for(auto u : v){
        cout << u <<" ";
    }
    cout <<endl;
_____________________________________
    
        /// reverse function

    vector<int> v = {2, 4, 5, 7, 9};

    reverse( v.begin(), v.end() );

    for(auto u : v){
        cout <<u <<" ";
    }
    cout <<endl;

    vector<int> v = {3, 5, 7, 8};

    cout<< v.back() <<endl; /// last element print kore.
    v.pop_back(); /// last element delete.

    cout <<v.back() <<endl;
_____________________________________
    
        ///erase

      vector<int> v = {4, 5, 7, 9};

      v.erase( v.begin()+2 );

      cout <<v.size() <<endl;

      for(auto u : v){
        cout <<u << " ";
      }
      cout <<endl;

     vector<int> v = {4, 5, 7, 9};

     reverse( v.begin(), v.end() );

     while( !v.empty() ) {
        cout <<v.back() << endl;
        v.pop_back();
     }

    return 0;
}
