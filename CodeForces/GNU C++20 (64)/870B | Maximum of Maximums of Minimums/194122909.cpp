#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector < int > a;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n , k ; cin >> n >> k; ll M = n;
    ll mn = 1e9 , mx = -1e9;
    while(M--)
    {
        ll x; cin >> x;
        a.push_back(x);
        mn = min(mn , x);
        mx = max(mx, x);
        
    }
    
    //sort(a.begin(), a.end());
    // why can't sort ?? -_-
    if(k == 1)
    {
        return cout << mn , 0;
    }
    if(k == 2)
    {
        return cout << max(a[0], a[n - 1]), 0;
        // cz say array is { 1,2 ,3,4,5 }
       // if i choose 2 then 3 are { (2) , (1) ,(3,4,5) };
        // if i didn't choose  a[0] or a[n - 1] then subsegment will be > 2        
    }
    if(k > 2)
    {
        return cout << mx ,0;
    
        
        
        
        
    }
 
    
 
 
}