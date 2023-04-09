#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
void baal()
{
    vector < ll > ans;
 
    ll n , k; cin >> n >> k;
    if(n > k)
    {
        for(ll i = k + 1; i <= n; i++)
        {
            ans.push_back(i);
        }
        ll ar[1000] = {0};
 
        ll op = 0;
        for(ll i = k - 1; i > (k / 2); i--)
        {
 
                op = k - i;
                ar[op] = 1;
 
 
        }
        for(ll i = 1; i < k; i++)
        {
            if(ar[i] == 0)
                ans.push_back(i);
        }
        cout << ans.size() << endl;
        for(ll i : ans)
            cout << i << ' ';
        cout << endl;
        ans.clear();
        return;
    }
    else if(n == k)
    {
        vector < ll > vv;
        vector < ll > arr(1000 , 0);
 
        ll op = 0;
        for(ll i = k - 1; i > (k / 2); i--)
        {
 
                op = k - i;
                arr[op] = 1;
 
 
        }
        for(ll i = 1; i < k ; i++)
        {
            if(arr[i] == 0)
                vv.push_back(i);
        }
        cout << vv.size() << endl;
        for(ll i : vv)
            cout << i << ' ';
        cout << endl;
        vv.clear();
        return;
 
 
 
 
    }
 
 
 
    return;
}
 
int main()
{
 
    ll t; cin >> t;
    while(t--)
    {
        baal();
 
 
    }
 
}
 