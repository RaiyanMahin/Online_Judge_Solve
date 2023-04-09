#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
map < ll, ll > mp;
set < ll > st;
vector < ll > a;
 vector <ll > pp;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        mp.clear();
        st.clear();
        a.clear();
        pp.clear();
        ll n; cin >> n;
 
        for(ll i = 0; i < n; i++)
        {
            ll x; cin >> x; a.push_back(x); st.insert(x);
            mp[x]++;
        }
       //cout << " fff " << mp_min << endl;
        ll X = *min_element(a.begin(), a.end());
        if(n == 1)
        {
            cout << "1\n";
        }
        else if(st.size() == 1 and n > 1)
        {
            cout << "-1\n";
        }
        else if(st.size() == n)
        {
            ll ans = 0;
            for(ll i = 0; i < n; i++)
            {
                if(X == a[i])
                {
                    ans = i + 1;
                    break;
 
                }
            }
            cout << ans << endl;
 
 
 
        }
        else if(st.size() > 1 and st.size() != n)
        {
 
            for( auto i : mp)
            {
                pp.push_back(i.second);
            }
            sort(pp.begin(), pp.end());
 
            if(pp[0] > 1)
            {
                cout << "-1\n";
            }
            if(pp[0] == 1)
            {
                ll oppp = 0;
                for( auto i : mp)
            {
                if(pp[0] == i.second)
                {
                    oppp = i.first;
                    break;
 
                }
            }
            ll hj = 0;
              for(ll i = 0; i < n; i++)
            {
                if(oppp == a[i])
                {
                    hj = i + 1;
                    break;
 
                }
            }
            cout << hj << endl;
 
 
 
            }
 
        }
 
 
 
    }
 
 
 
}
 
 
 