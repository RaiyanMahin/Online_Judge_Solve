#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n, ans = 0; cin >> n; string s, s1 = ""; cin >> s; s1 = s; sort(s1.begin(), s1.end());
    ll ix = 0, ixx = 0;
    if(s1 != s)
    {
        ans = 1;
 
        for(ll i = 0; i < s.size() - 1; i++)
        {
            if(s[i] > s[i + 1])
            {
                ix = i + 1, ixx = i + 2;
                swap(s[i] , s[i + 1]);
                break;
 
            }
        }
    }
    if(ans)
    {
        cout << "YES" << endl << ix << ' ' << ixx << endl;
        return 0;
    }
    cout << "NO\n";
 
}