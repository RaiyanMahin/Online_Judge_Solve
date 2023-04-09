#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
priority_queue < ll > a , b;
int main()
{
    // CF 81A
    // CF 1091A
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n; cin >> n;
    for(ll i = 0; i < n; i++)
    {
        ll x; cin >> x;
        a.push(x);
    }
    for(ll i = 0; i < n; i++)
    {
        ll x; cin >> x;
        b.push(x);
    }
    ll kar = 0, a_ = 0, b_ = 0;
    while(1)
    {
        if(a.empty() and b.empty())
        {
            break;
        }
        // A nibe
        if(kar % 2 == 0)
        {
            kar++;
            if(b.empty())
            {
                a_ += a.top();
                a.pop();
            }
            else if(a.empty())
            {
                b.pop();
            }
 
            else if(!a.empty() and !b.empty())
            {
                ll u = a.top() , v = b.top();
            if(u >= v)
            {
                a_ += u;
                //cout << " a_ now " << a_ << endl;
                a.pop();
 
            }
            else if(u < v)
            {
                b.pop();
            }
            }
 
        }
        // B nibe
        else if(kar % 2)
        {
            kar++;
            if(a.empty())
            {
                b_ += b.top();
                b.pop();
            }
            else if(b.empty())
            {
                a.pop();
            }
 
            else if(!a.empty() and !b.empty())
            {
                ll u = a.top() , v = b.top();
            if(v >= u)
            {
                b_ += v;
                //cout << " b_ now " << b_ << endl;
                b.pop();
            }
            else if(v < u)
            {
                a.pop();
            }
            }
 
 
        }
 
    }
    cout << a_ - b_ << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}