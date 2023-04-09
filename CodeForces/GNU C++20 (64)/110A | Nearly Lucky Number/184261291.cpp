#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll > rm;
int main()
 
{
    vector<ll > rm;
    ll n; cin >> n; ll cnt = 0;
    while(n != 0)
    {
        ll d = n % 10;
        //cnt++;
        if(d == 4 || d == 7)
        {
            cnt++;
 
        }
        //rm.push_back(d);
        n /= 10;
 
    }
    //cout << cnt;
//    for(ll i  = 0; i < rm.size(); i++)
//    {
//        cout << rm[i] << ' ' ;
//    }
 
    if(cnt == 4 || cnt == 7 )
 
    {
        cout << "YES" << '\n';
    }
    if(cnt != 4 && cnt != 7)
    {
        cout << "NO" << '\n';
 
    }
    //rm.clear();
 
 
 
}