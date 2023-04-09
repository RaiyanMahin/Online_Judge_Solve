#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n; string s; cin >> s; ll a = 0, b = 0, ans = 0;
        for(char i : s)
        {
            if(b > a)
            {
                ans += (b - a); a = 0, b = 0;
 
            }
            if(i == '(')
                a++;
            else if(i == ')')
                b++;
        }
        cout << ans << endl;
 
 
    }
}