#include<bits/stdc++.h>
using namespace std;

int main()
{
//    pair<string, vector<int> >p;
//
//    p.first = "Topu";
//    p.second = {1, 2, 3};
//    cout << p.first << '\n';
//
//    for ( auto u : p.second )
//        cout<< u << " " <<'\n';

//
//    pair<int, int> p;
//
//    p = make_pair(2,3);
//
//    p.first++;
//
//    cout <<p.first <<" " << p.second <<'\n';
//
//     pair <string, vector<int> > p;
//
//     p = { "topu", {1, 5, 6, 9} };
//
//     cout << p.first << '\n' << p.second.size() <<'\n';


//      pair<int, int> p1,p2;
//
//      p1 = {2,3};
//      p2 = {1,2};
//
//      if(p1 < p2) cout << "YES\n";
//      else cout << "NO\n";

    /// max elements
//
//    pair <int, int> p1, p2;
//
//    p1 = {5, 4};
//    p2 = {1, 10};
//
//    pair<int, int> p = max(p1, p2);
//
//    cout << p.first <<" " <<p.second <<'\n';

    /// min elements

//    pair <int, int> p1, p2;
//
//    p1 = {2, 6};
//    p2 = {5, 7};
//
//    pair<int, int> p =  min(p1, p2);
//
//    cout << p.first <<" " <<p.second;


    /// pair of vetor sorting
    // choto thake vro
//    vector<pair<int, int>> v;
//
//    v.push_back( {2, 3} );
//    v.push_back( {4, 6} );
//    v.push_back( {5, 7} );
//    v.push_back( {8, 1} );
//    v.push_back( {2, 7} );
//
//    sort( v.begin(), v.end() );
//
//    for( auto u : v)
//        cout<< u.first <<" " << u.second <<'\n';

    //vro thake choto
//
//    vector<pair<int, int>> v;
//
//    v.push_back( {2, 3} );
//    v.push_back( {4, 6} );
//    v.push_back( {5, 7} );
//    v.push_back( {8, 1} );
//    v.push_back( {2, 7} );
//
//    sort( v.rbegin(), v.rend() );
//
//    for( auto u: v)
//        cout << u.first << " " << u.second <<'\n';

    /// pair of Array

//    pair <int, int> p[] = { {2,3}, {4,6}, {8,2}, {9,1} };
//
//    sort (p, p+5);
//
//    for(int i = 0; i<5; i++)
//        cout << p[i].first <<" " << p[i].second <<'\n';

    /// pair of string and integer

//    vector< pair<string, int> > v;
//
//    v.push_back( {"topu", 21} );
//    v.push_back( {"Bhuyan", 22} );
//    v.push_back( {"Rohim", 24} );
//    v.push_back( {"Korim", 20} );
//    v.push_back( {"Rudra", 25} );
//
//    sort ( v.begin(), v.end() );
//
//    for( auto u : v)
//        cout << u.first <<" " << u.second <<'\n';


    /// unique pair
//
        vector< pair<string, int> > v;

    v.push_back( {"topu", 21} );
    v.push_back( {"Bhuyan", 22} );
    v.push_back( {"Rohim", 24} );
    v.push_back( {"Korim", 20} );
    v.push_back( {"Rudra", 25} );
    v.push_back( {"topu", 21} );
    v.push_back( {"Rudra", 25} );
    v.push_back( {"Korim", 20} );


    sort ( v.begin(), v.end() );
    int sz = unique( v.begin(), v.end() ) - v.begin();

    for( int i = 0; i< sz; i++)
        cout << v[i].first << " " << v[i].second <<'\n';

    return 0;
}
