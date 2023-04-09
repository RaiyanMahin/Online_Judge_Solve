 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n; string s; cin >> s; ll ans = 0;
        string s1 = s.substr(0 , 4); string s2 = s; reverse(s2.begin(), s2.end());
        string s3 = s2.substr(0 , 4);
        if(s1 == "2020" or s3 == "0202")
        {
            ans = 1;
        }
        else if( s[0] == '2' and s[1] == '0' and s[n - 1] == '0' and s[n - 2] == '2'  )
        {
            ans = 1;
        }
        else if( s[0] == '2' and s[1] == '0' and s[2] == '2' and s[n - 1] == '0'  )
        {
            ans = 1;
        }
        else if( s[0] == '2' and s[n - 1] == '0' and s[n - 2] == '2' and s[n - 3] == '0'  )
        {
            ans = 1;
        }
        cout << (ans ? "YES" : "NO") << endl;
 
 
    }
 
 
 
}