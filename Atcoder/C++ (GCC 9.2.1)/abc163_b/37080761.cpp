#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1)
using ll = long long;
int main()
{
    ll k, n; cin >> k >> n;
    vector < ll > rm(n);
    for(ll i = 0; i < n; i++)
        cin >> rm[i];
    ll d = accumulate(rm.begin(), rm.end(),0);
    if(k > d)
    {
        cout << k - d;
    }
    if(k == d)
        cout << 0;
    if(k < d)
        cout << -1;
}


