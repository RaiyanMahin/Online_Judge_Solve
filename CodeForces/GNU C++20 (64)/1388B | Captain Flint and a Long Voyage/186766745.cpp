#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
       ll n; cin >> n;
       string s = "";
       ll k = n / 4;
       for(ll i = 0; i < k; i++)
       {
           s += '8';
       }
       if(n % 4)
       {
           s += '8';
       }
       ll p = n - s.size();
       for(ll i = 0; i < p; i++)
       {
           s += '9';
       }
       for(ll i = s.size() - 1; i >= 0; i--)
       {
           cout << s[i];
       }
       cout << '\n';
    }
 
}