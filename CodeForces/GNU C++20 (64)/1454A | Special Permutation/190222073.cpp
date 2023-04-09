#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        if(n == 2)
        {
            cout << "2 1\n";
        }
        if(n > 2)
        {
 
 
        vector < ll > a;
        for(ll i = n;  i >= 1; i--)
        {
            a.push_back(i);
        }
        swap(a[0], a[n / 2]);
        for(ll i : a)
            cout << i << ' ';
        cout << endl;
        }
 
 
 
    }
 
 
 
}
 
 
 