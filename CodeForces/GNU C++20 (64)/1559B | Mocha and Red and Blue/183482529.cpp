#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;
 
ll ass(string s)
{
    ll ans = 0, sz = (ll)s.size();
    for(ll i = 0; i < sz - 1; i++)
    {
        if(s[i] == s[i + 1])
        {
            ans++;
        }
    }
    return ans;
}
 
void baal()
{
    ll n; cin >> n; string s; cin >> s;
    string ans1 = "", ans2 = "";
    ll cnt = 0;
    char b = 'B', r = 'R';
    for(ll i = 0; i < n; i++)
    {
        //debug(ans1); debug(ans2);
 
        if(s[i] != '?')
        {
            ans1 += s[i];
            ans2 += s[i];
        }
        else if(s[i] == '?')
        {
            cnt++;
            if(cnt == 1)
            {
                ans1 += 'B';
                ans2 += 'R';
            }
            if(cnt > 1)
            {
                char a1 = ans1.back(), a2 = ans2.back();
 
                if(a1 == 'B')
                {
                    ans1 += 'R';
                }
                if(a2 == 'R')
                {
                    ans2 += 'B';
 
                }
                if(a1 == 'R')
                {
                    ans1 += 'B';
                }
                if(a2 == 'B' )
                {
                    ans2 += 'R';
                }
            }
 
 
        }
 
    }
    ll mn1 = ass(ans1), mn2 = ass(ans2);
    ll MN = min(mn1, mn2);
    if(MN == mn1)
    {
        cout << ans1 << endl; return;
    }
    cout << ans2 << endl; return;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return;
 
}
 
 
 
int main()
{
    ll t; cin >> t;
    while(t--)
        baal();
}