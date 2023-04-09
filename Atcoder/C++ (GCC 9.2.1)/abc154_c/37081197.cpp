//=n(}*,4e@;;j|)IK&EYzf7BN%w+xK:///RAIYAN_MAHIN
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n; cin >> n; ll a[n + 10];
    set<ll >rm;
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
        rm.insert(a[i]);
    }
       if(rm.size() == n)
       {
            cout << "YES";
           
       }
       else cout << "NO";
       
}