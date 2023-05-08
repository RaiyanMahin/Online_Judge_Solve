#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll ch(ll n)
{
    ll ans = 0;
    for(ll i = 3; i * i <= n; i += 2)
    {
        if(n % i == 0)
        {
            ans = 1;
            return -1;
        }
    }
    if(!ans)
        return 1;
}

vector < ll > baal(ll n)
{
    vector < ll > vv;
    for(ll i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            ll x = (n / i) , y = i;
            // age x
            if(x == 2)
            {
                vv.push_back(2);

            }
            if(y == 2)
            {
                vv.push_back(2);

            }
            if(x & 1 and x > 1)
            {
                if(ch(x) == 1)
                    vv.push_back(x);


            }
            if(y & 1 and y > 1)
            {
                if(ch(y) == 1)
                    vv.push_back(y);


            }

        }
    }
    return vv;
}


int main()
{
    ll n; cin >> n;
    ll ans = 0;
    for(ll i = 1; i <= n; i++)
    {
        vector < ll > vec = baal(i);
        set < ll > st(vec.begin(), vec.end());
        if(st.size() == 2)
            ans++;

    }
    cout << ans << endl;



}
