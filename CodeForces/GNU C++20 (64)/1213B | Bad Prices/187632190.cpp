#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
 
void baal()
{
    ll n; cin >> n; vector < ll > a(n , 0);
    for(auto &i : a)
        cin >> i;
    if(n == 1)
    {
        cout << "0\n"; return;
    }
    ll mn = a[n - 1], c = 0;
    for(ll i = n - 2; i >= 0; i--)
    {
        if(a[i] > mn)
        {
            c++;
        }
        if(a[i] < mn)
        {
            mn = a[i];
        }
 
 
    }
    cout << c << endl;
    return;
 
}
 
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        baal();
    }
}
 