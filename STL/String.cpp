#include<bits/stdc++.h>
using namespace std;
#define ios_base::sync_with_stdio(0); cin.tie(0); cout tie(0); /// for cin and cout fast
#define endl '\n' /// for endl line use korele program slow hy ji ti '\n' use korte hy .. tar poreborte a babe endl use kote hobe


int main()
{
    string s;

    s = s + 'a';
    s = s + 'b';
    s += 'c';
    cout <<s  <<endl;
_____________________________________

    string s = "topubhuyan";
    
    s[0] = 'x';
    cout <<s[0] <<" " <<s[1] <<" " <<s[2] <<" " <<s[3];

_____________________________________

    string s;
    string s1 = "Topu", s2 = "Bhuyan";
    char c = ' ';

    //s1.clear();
    s = s1 + c + s2;
    cout << s <<endl;
    //cout <<s1.empty();

_____________________________________

    /// using iterator

    string s = "Topu bhuyan";

    string ::iterator it;

    for(it = s.begin(); it != s.end(); it++ ){
        cout << *it;
    }
    cout <<endl;
_____________________________________
    
    /// using foreach loop

    string s = "Topu bhuyan";

    for(auto u : s) cout <<u;
        cout <<endl;
_____________________________________

    /// Condition
      string s1 = "Topu", s2 = "Bhuyan";

      if(s1 == s2)
         cout <<"Equals" <<endl;
      else
        cout <<"Not Equals! " <<endl;
_____________________________________
    
    /// Revers

        string s1 = "Topu", s2 = "Bhuyan";

        reverse( s1.begin(), s1.end() );
        cout << s1 <<endl;
_____________________________________
    
    /// plaindrome

        string s = "aabaa";
        string tem = s;

        reverse( tem.begin(), tem.end() );

        if(tem == s) cout <<"Plindrome\n";
        else cout <<"Not Palindrome\n";
_____________________________________

    /// cin and cout k fast kora -> #define optimize() ios_base::sync_with_stido(0); cin.tie(0); cout tie(0);

    string s;
    cin >>s;

    cout <<s <<endl;

    string s;
    cin >> s;   /// spase ar por baki man gula nite parbe na
    cout <<s <<endl;
_____________________________________
    string s;

    getline(cin , s); /// space ar por bki sob man nite parebe
    cout << s <<endl;

    int t;
    cin >> t;

    for(int tc = 1; tc <= t; tc++){
        string s;
        char c;
        cin >> c;

        getline(cin, s);

        s = c + s;

        cout <<"Case " <<tc <<" " <<s <<endl;
    }
_____________________________________
    /// sorting

    string s = "dacbA";
    sort( s.begin(), s.end() );
    cout <<s <<endl;
_____________________________________
    /// revers sorting

//    string s = "dabA";
//    sort( s.rbegin(), s.rend() );
//    cout <<s <<endl;
_____________________________________
    /// unique

    string s = "adcdeAAA";

    sort(s.begin(), s.end());

    int sz = unique (s.begin(), s.end()) - s.begin();
    for(int i=0; i<sz; i++ )
        cout <<s[i];
    cout <<endl;
_____________________________________
    /// max and min

    string s = "adcdeAA";

    cout << *max_element( s.begin(), s.end() ) <<endl;
    cout << *min_element( s.begin(), s.end() ) <<endl;
_____________________________________
    /// erase function

    string s = "adcdeAA";

    s.erase( s.begin()+2 );
    cout << s <<endl;
_____________________________________
    ///  luxorographics

    vector <string> v;

    v.push_back("Topu");
    v.push_back("ali");
    v.push_back("Bhuyan");
    v.push_back("hoshen");
    v.push_back("rohim");
    v.push_back("Korim");
    v.push_back("AAAA");
    v.push_back("AA");

    sort ( v.begin(), v.end() );

    for( auto u : v)
        cout << u <<endl;

    return 0;
}

