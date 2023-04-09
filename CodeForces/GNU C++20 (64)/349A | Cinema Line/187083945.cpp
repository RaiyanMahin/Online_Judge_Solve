#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector < ll > a;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n; cin >> n;
    ll a[n + 1] = {0};
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(a[0] > 25)
        return cout << "NO\n" , 0;
//    ll sum = a[0];
//    ll ache = a[0];
    ll breaK = 0;
    ll t_25 = 1, t_50 = 0, t_100 = 0;
    for(ll i = 1; i < n; i++)
    {
        if(a[i] == 25)
        {
            t_25++;
        }
        if(a[i] == 50)
        {
            t_50++;
            if(!t_25)
            {
                breaK = -1;
                break;
            }
            else if(t_25)
            {
                t_25--;
            }
        }
        if(a[i] == 100)
        {
            t_100++;
            if ( (!t_50 and !t_25) or  (t_50 and !t_25) )
            {
                breaK = -1;
                break;
            }
            else if(t_25 and t_50)
            {
                t_50--;
                t_25--;
            }
            else if(t_25 < 3  and !t_50)
            {
                breaK = -1;
                break;
 
            }
            else if(!t_50 and t_25 >= 3)
            {
                t_25 -= 3;
            }
 
            //cout << " 25 " << t_25 << ' ' << " 50 " << t_50 << '\n';
 
        }
 
 
 
    }
    return cout << (breaK == 0 ? "YES\n" : "NO\n" ) , 0;
}
 