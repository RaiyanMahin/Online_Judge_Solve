#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;

vector < ll > pos, neg;

void baal()
{
    pos.clear(); neg.clear();
    ll n, k; cin >> n >> k; vector < ll > a(n , 0);

    for(auto &i : a)
    {
        cin >> i;
        if(i >= 0)
        {
            pos.push_back(i);

        }
        else
        {
            neg.push_back(i);
        }

    }
    ll sum1 = accumulate(pos.begin(), pos.end(), 0LL);

    sort(neg.begin(), neg.end());

    ll s2 = 0;
    for(ll i = 0; i < neg.size() and k ; i++)
    {
        if(k)
        {
            s2 += abs(neg[i]);
            //debug(s2)
            k--;
        }
    }
    cout << sum1 + s2 << endl; return;










































    return;

}

int main()
{
    ll t; scanf("%lld", &t);
    while(t--)
        baal();
}

