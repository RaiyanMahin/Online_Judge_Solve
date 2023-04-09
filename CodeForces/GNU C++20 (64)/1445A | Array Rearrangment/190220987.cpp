#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector < ll > a , b;
int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        a.clear();  b.clear();
        ll n, k; cin >> n >> k;
 
 
        for(ll i = 0; i < n; i++)
        {
            ll o; cin >> o; a.push_back(o);
 
 
        }
        for(ll i = 0; i < n; i++)
        {
            ll o; cin >> o; b.push_back(o);
 
        }
        reverse(b.begin(), b.end());
        ll O = -1;
        for(ll i = 0; i < a.size(); i++)
        {
            if(a[i] + b[i] > k)
            {
                O = 0;
                break;
            }
        }
        if(!O)
            cout << "No\n";
        else
            cout << "Yes\n";
 
 
    }
 
 
}