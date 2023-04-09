#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector < ll > a;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        a.clear();
        ll n, k ; cin >> n >> k;
        for(ll i = 1; i <= n; i++)
        {
            a.push_back(i);
        }
        ll op = (n - 1);
        if(k > ( op / 2) or ( k and n < 3  ))
        {
            cout << "-1\n";
        }
        if(k <= (op / 2))
        {
            for(ll i = 1; i < a.size() - 1 and k; i += 2)
            {
                if(k)
                {
                    swap(a[i] , a[i + 1]);
                    k--;
                }
            }
 
        for(ll i : a)
            cout << i << ' ';
        cout << endl;
        }
 
 
    }
}