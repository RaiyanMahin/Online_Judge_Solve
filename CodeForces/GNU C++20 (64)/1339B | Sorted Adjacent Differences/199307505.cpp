#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        vector <ll > rm(n);
        for(ll i = 0; i < n; i++)
            cin >> rm[i];
        sort(rm.begin(),rm.end());
        vector < ll > a(rm.begin(), rm.begin() + n / 2);
        vector < ll > b(rm.begin() + n / 2, rm.end());
        reverse(a.begin(), a.end());
        for(ll i = 0; i < a.size(); i++)
        {
            cout << b[i] << ' ' << a[i] << ' ';
        }
        //cout << '\n';
        if(n & 1)
            cout << b.back();
        cout << '\n';
        rm.clear();
        a.clear();
        b.clear();
 
 
    }
}