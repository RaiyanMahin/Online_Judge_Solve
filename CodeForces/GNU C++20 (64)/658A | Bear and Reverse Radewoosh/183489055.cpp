#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, c; cin >> n >> c;
    ll a[n] , t[n];
    for(ll i = 0; i < n; i++)
        cin >> a[i];
    for(ll i = 0; i < n; i++)
        cin >> t[i];
    //limak
    ll s = 0, t_s = 0 , aa = 0, dd = 0;
    for(ll i = 0; i < n; i++)
    {
        t_s += t[i];
        dd = a[i] - c * t_s;
        aa = max(aa , dd);
 
        s += aa;
        aa = 0;
    }
    //cout << s << '\n';
    // rad
    ll s2 = 0, t_ss = 0, a2 = 0, d1 = 0;
    for(ll i = n - 1; i >= 0; i--)
    {
        t_ss += t[i];
        d1 = a[i] - c * t_ss;
        a2 = max(a2, d1);
        //cout << "eta a2 " << a2 << '\n';
        s2 += a2;
        a2 = 0;
    }
   //cout << s2 << '\n';
    if(s2 == s)
        cout << "Tie\n";
    if(s > s2)
        cout << "Limak\n";
    if(s < s2)
        cout << "Radewoosh\n";
}