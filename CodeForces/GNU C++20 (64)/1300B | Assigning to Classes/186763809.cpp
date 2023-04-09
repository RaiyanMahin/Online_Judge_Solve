#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t; cin >> t;
    for(int i = 1; i <= t; i++)
    {
        ll n; cin >> n;  ll m = 2 * n;
        vector <ll > rm(m);
 
        for(ll j = 0; j < m; j++)
        {
            cin >> rm[j];
 
        }
        sort(rm.begin(),rm.end());
        cout << abs(rm[n] - rm[n - 1]) << '\n';
        rm.clear();
 
 
    }
 
}