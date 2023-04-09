#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
set < char > st;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        st.clear(); string s, ss = ""; cin >> s; ll x = s.size();
        for(ll i = 0; i < x ; i++)
        {
            if(s[i] != s[i + 1])
            {
                st.insert(s[i]);
            }
            else if(s[i] == s[i + 1])
            {
                i++;
            }
 
        }
        for(auto i : st)
            cout << i;
        cout << endl;
 
 
 
    }
}