#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;
 
void baal()
{
    ll n , a, b; cin >> n >> a >> b;
    string ans = ""; char cc = 'a'; ll cnt = 0;
    while(1 == 1)
    {
        if(ans.size() == n)
        {
            cout << ans << endl; return;
            break;
        }
        else
        {
            ans += cc;
            cc++;
            cnt++;
            if(cnt == b)
            {
                cc = 'a';
                cnt = 0;
            }
        }
    }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return;
 
}
 
 
 
int main()
{
    ll t; cin >> t;
    while(t--)
        baal();
}