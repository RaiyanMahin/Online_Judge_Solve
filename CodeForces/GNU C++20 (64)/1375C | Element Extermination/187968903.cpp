#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
 
void baal()
{
    ll n; cin >> n; vector < ll > a(n , 0);
  
    for(auto &i : a)
    {
        cin >> i; //mn = min(mn , i); mx = max(mx, i);
 
    }
    if(a[0] < a[n - 1])
    {
        cout << "YES\n";
        return;
    }
    else
        cout << "NO\n";
 
    return;
 
 
 
 
 
 
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll t; cin >> t;
    while(t--)
    {
        baal();
 
 
 
 
 
 
 
 
    }
 
 
 
 
 
 
 
 
 
 
}