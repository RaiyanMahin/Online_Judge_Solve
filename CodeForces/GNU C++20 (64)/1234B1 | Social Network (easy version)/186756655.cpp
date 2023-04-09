#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
deque < ll > dq;
int main()
{
    ll n , k; cin >> n >> k; ll m = n;
    while(n--)
    {
        ll x; cin >> x;
 
        ll aa = 0;
        for(auto it = dq.begin(); it != dq.end(); it++)
        {
            if(*it == x)
            {
                aa = 1;
 
 
            }
        }
        if(aa == 0)
        {
            dq.push_front(x);
        }
        if(dq.size() > k)
        {
            dq.pop_back();
        }
    }
    cout << dq.size() << endl;
    while(!dq.empty())
    {
        cout << dq.front() << ' ';
        dq.pop_front();
    }
}