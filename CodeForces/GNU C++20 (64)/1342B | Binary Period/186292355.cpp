#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll c = 0, c2 = 0;
        string s, s1 = ""; cin >> s;
        ll d =s.size();
        for(auto i : s)
        {
            if(i == '1')
                c++;
            else
                c2++;
 
        }
        if(!c or !c2)
            cout << s << '\n';
        else
        {
           for(ll i = 0; i < (c + c2); i++)
           {
               cout << "10";
           }
           cout << '\n';
        }
 
 
 
 
 
 
 
    }
}