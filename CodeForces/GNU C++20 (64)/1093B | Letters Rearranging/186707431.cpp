#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll n; cin >> n ;
    string s;
    while(n--)
    {
        cin >> s;
        if(s.size() == 1)
        {
            cout << -1 << '\n';
 
        }
        if(s.size() == 2)
        {
            char a = s[0] , b = s[1];
            if(a != b)
            {
                cout << s << '\n';
            }
            else
                cout << -1 << '\n';
        }
        if(s.size() > 2)
        {
            string a = s; reverse(a.begin() , a.end());
            if(a != s)
            {
                cout << s << '\n';
            }
            if(a == s)
            {
                set < char > rm;
                for(ll i = 0 ; i < s.size() ; i++)
                {
                    rm.insert(s[i]);
 
                }
                if(rm.size() == 1)
                {
                    cout << -1 << '\n';
                }
                if(rm.size() > 1)
                {
                    sort(s.begin () , s.end());
                    cout << s << '\n';
                }
                rm.clear();
 
 
            }
 
        }
    }
}