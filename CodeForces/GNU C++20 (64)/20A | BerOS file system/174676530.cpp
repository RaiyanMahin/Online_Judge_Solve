#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
#define p_case(r) cout << "Case " << r++ << ": "
#define debug(x) cerr << # x << ' ' << x << endl;
 
queue < string > q;
 
void baal()
{
    string s, ss = ""; cin >> s;
    ll g = 0;
 
    for(ll i = 0; i < (ll)s.size(); i++)
    {
        //string ss = "";
        if(s[i] != '/')
        {
            ss += s[i]; g = 1;
        }
        else if(s[i] == '/')
        {
            if((ll)ss.size() > 0)
            {
                q.push(ss);
                //debug(ss)
                ss = "";
            }
        }
 
    }
    q.push(ss);
    string ans = "";
    while(!q.empty())
    {
        string D = q.front();
        q.pop();
        ans += "/"; ans += D;
 
//        cout << "/";
//        cout << D;
//        cout << q.front();
//        q.pop();
    }
    if(g)
    {
        while( ans[(ll)ans.size() - 1] == '/'  ) ans.pop_back();
 
 
    }
    cout << ans << endl; return;
}
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t = 1; //cin >> t; ll r = 1;
    while(t--)
    {
       // p_case(r);
        baal();
    }
}