#include <bits/stdc++.h>
using namespace std;
#define ll long long
map < ll, ll > mp;
vector < ll > b;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        mp.clear(); b.clear();
        ll n; cin >> n; vector < ll > a(n , 0);
 
        for(auto &i : a)
            cin >> i;
        sort(a.begin(), a.end());
        for(auto &i : a)
        {
            if(!mp[i])
            {
                cout << i << ' ';
                mp[i]++;
 
            }
            else
            {
                b.push_back(i);
 
            }
 
        }
        sort(b.rbegin(), b.rend());
        for(ll i : b)
            cout << i << ' ';
        cout << endl;
 
 
        
 
 
 
    }
}