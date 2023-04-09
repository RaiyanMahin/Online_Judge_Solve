/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100];
    int w ; cin >> w;
    cout << a[w] << '\n';
    a[w]++;
    cout << a[w] << ' ' << w << '\n';
} */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll > rm;
vector<ll > r;
int  main()
{
    int T; cin >> T;
    while(T--)
    {
        ll n; cin >> n; ll a[n + 56];
        for(ll i = 1; i <= n; i++)
        {
            cin >> a[i];
            if(a[i] % 2 == 1)
            {
                rm.push_back(i);
 
            }
            if(a[i] % 2 == 0)
            {
               r.push_back(i);
 
            }
        }
        if(r.size() != 0)
        {
            cout << r.size() << '\n';
            for(ll i = 0 ; i < r.size(); i++)
            {
                cout << r[i] << ' ';
            }
        }
        if(r.size() == 0)
        {
            if(rm.size() == 1)
            {
                cout << -1 << '\n';
 
            }
            if(rm.size() > 1)
            {
                if(rm.size() % 2 == 0)
                {
                    cout << rm.size() << '\n';
                    for(ll i = 0; i < rm.size() ; i++)
                    {
                        cout << rm[i] << ' ';
                    }
                }
                if(rm.size() % 2 == 1)
                {
                    cout << rm.size() - 1 << '\n';
                    for(ll i = 0; i < rm.size() - 1 ; i++)
                    {
                        cout << rm[i] << ' ';
                    }
 
                }
            }
 
        }
        rm.clear();
        r.clear();
 
 
    }
}