#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;
 
void baal()
{
 
    ll n; cin >> n; string s; cin >> s;
    ll got = 0, val = 0;
    for(ll i = 0; i < n; i++)
    {
        ll op = s[i] - '0';
        if(op == 1 or op == 4 or op == 6 or op == 8 or op == 9)
        {
            got = 1; val = op;
            break;
        }
    }
    if(got)
    {
        cout << "1\n" << val << endl;
        return;
    }
    if(got == 0)
    {
        string ss = "";
    for(ll i = 0; i < s.size(); i++)
    {
        ll k = s[i] - '0';
 
        if( k == 2 or k == 3 or k == 5 or k == 7)
        {
            //se_val = k;
            ss += s[i];
        }
    }
 
 
 
 
        for(ll i = 0; i < ss.size(); i++)
        {
            ll kk = ss[i] - '0';
            if(kk == 2)
            {
                for(ll j = i + 1; j < ss.size(); j++)
                {
                    ll nm = ss[j] - '0';
                    if(nm == 5 or nm == 7 or nm == 2)
                    {
                        cout << "2\n" << 2 << nm << endl;
                        return;
                    }
                }
            }
            else if(kk == 3)
            {
                for(ll j = i + 1; j < ss.size(); j++)
                {
                    ll nm = ss[j] - '0';
                    if(nm == 5 or nm == 3 or nm == 2)
                    {
                        cout << "2\n" << 3 << nm << endl;
                        return;
                    }
                }
            }
            else if(kk == 5)
            {
                for(ll j = i + 1; j < ss.size(); j++)
                {
                    ll nm = ss[j] - '0';
                    if(nm == 2 or nm == 7 or nm == 5)
                    {
                        cout << "2\n" << 5 << nm << endl;
                        return;
                    }
                }
            }
            else if(kk == 7)
            {
                for(ll j = i + 1; j < ss.size(); j++)
                {
                    ll nm = ss[j] - '0';
                    if(nm == 5 or nm == 2 or nm == 7)
                    {
                        cout << "2\n" << 7 << nm << endl;
                        return;
                    }
                }
            }
 
        }
 
    }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return;
 
}
 
int main()
{
    ll t; scanf("%lld", &t);
    while(t--)
        baal();
}