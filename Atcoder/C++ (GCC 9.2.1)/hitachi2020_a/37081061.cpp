#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pi acos(-1)
//#define e 2.7182818284590452354
int main()
{
    string s,s1; cin >> s;
    ll d = s.size();
    for(ll i = 0 ; i < d / 2; i++)
    {
        s1 += "hi";
    }
    if(s1 == s)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';

//    ll d = count(s.begin() , s.end() , 'h');
//    ll e = count(s.begin() , s.end() , 'i');
//    if(d == e)
//        cout << "Yes" << '\n';
//    else
//        cout << "No" << '\n';
//    d = 0, e = 0;

}
