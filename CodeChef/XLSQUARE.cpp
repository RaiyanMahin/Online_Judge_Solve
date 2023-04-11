#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;

void baal()
{
    ll n, siz; cin >> n >> siz;
    ll i = 1, cnt = 0;
    for(i = 1; ; i++)
    {
        if(i * i > n)
            break;
        if(i * i <= n)
        {
            cnt++;
        }
    }
    cout << cnt * siz << endl;









































    return;

}

int main()
{
    ll t; scanf("%lld", &t);
    while(t--)
        baal();
}


