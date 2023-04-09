#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t; cin >> t; ll f = 0, w = 0;
    while(t--)
    {
        ll n; cin >> n; string s; cin >> s;
        if(s.size() < 11)
        {
            cout << "NO\n";
        }
        if(s.size() == 11)
        {
            if(s[0] != '8') cout << "NO\n";
            if(s[0] == '8') cout << "YES\n";
        }
        if(s.size() > 11)
        {
            for(auto x : s)
            {
                if(x == '8')
                {
                    f = 1;
                    break;
                }
            }
            if(!f)
                cout << "NO\n";
            if(f)
            {
                ll e = s.size() - 11;
                for(ll i = 0; i < s.size() ; i++)
                {
                    if(s[i] == '8')
                    {
                        ll z = i;
                        if(z <= e)
                        {
                            cout << "YES\n";
                            w = 1;
                            break;
                        }
 
                    }
                }
                if(!w)
                {
                    cout << "NO\n";
                }
            }
        }
        f = 0 , w = 0;
 
    }
}
//int main()
//{
//    ll n; cin >> n; ll a[n + 10]; ll f = 0;
//    for(ll i = 0 ; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    sort(a, a + n);
//    for(ll i = 0; i < n - 2; i++)
//    {
//      if(a[i] + a[i + 1] > a[i + 2])
//      {
//          f = 1;
//          break;
//      }
//    }
//    if(f) cout << "Yes\n";
//    else cout << "No\n";
//
//}