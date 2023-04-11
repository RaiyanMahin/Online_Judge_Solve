#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;

void baal()
{
    ll n, m ,q; cin >> n >> m >> q; ll a[n + 5] = {0};
    ll check = 1, cnt = 0;
    while(q--)
    {
       char c; cin >> c; ll x; cin >> x;
       if(c == '+' and check)
       {
           cnt++;
           a[x]++;
           if(cnt > m)
           {
               check = 0;
           }



       }
       if(c == '-' and check)
       {
           if(a[x] == 0)
           {
               check = 0;
           }
           if(a[x] != 0)
           {
               cnt--;
           }

       }
    }
    cout << (check ? "Consistent" : "Inconsistent") << endl;











































    return;

}

int main()
{
    ll t; scanf("%lld", &t);
    while(t--)
        baal();
}


