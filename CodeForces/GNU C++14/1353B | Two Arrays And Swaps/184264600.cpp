#include <bits/stdc++.h>
using namespace std;
using ll =  long long;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n, k; cin >> n >> k;
        vector < ll > a(n);
        vector < ll > b(n);
        for(ll i = 0; i < n; i++)
            cin >> a[i];
        for(ll i = 0; i < n; i++)
            cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin() ,b.end());
       ll i = 0, j = n - 1;
       if(k > 0)
       {
 
 
                for(; i < n; j >= 0, i++, j--)
                {
                    if(a[i] < b[j])
                    {
                        swap(a[i],b[j]);
                        k--;
                        if(k == 0)
                            break;
                    }
                }
       }
 
 
 
            cout << accumulate(a.begin(), a.end(),0LL) << '\n';
 
            a.clear();
            b.clear();
 
 
        }
 
 
 
 
    }
 
 