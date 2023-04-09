#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
ll ch(string s)
{
    ll n = s.size();
    for(ll i = 0; i < (n / 2); i++)
    {
        if(s[i] != s[n - i - 1])
            return -1;
    }
    return 1;
}
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        string t = s, baal = s; t = 'a' + t; baal.push_back('a');
        ll baal5 = 0;
        ll BAAL = ch(t);
        if(BAAL == -1)
        {
            cout << "YES\n" << 'a' << s << endl;
            baal5++;
 
 
        }
        BAAL = ch(baal);
        if(BAAL == -1 and !baal5)
        {
            cout << "YES\n" << s << 'a' << endl;
            baal5++;
 
 
        }
        else if(!baal5)
            cout << "NO\n";
    }
 
}