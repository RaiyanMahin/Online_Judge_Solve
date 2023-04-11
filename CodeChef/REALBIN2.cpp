#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;

void baal()
{
    ll a, b; scanf("%lld%lld", &a, &b);
//    if(a % 2 == 0)
//    {
//        cout << "No\n"; return;
//    }
//    if(a & 1)
//    {
        while(b % 2 == 0)
        {
            if(b & 1)
            {
               printf("No\n"); return;
            }
            else
                b >>= 1;
        }
        if(b == 1)
        {
            printf("Yes\n"); return;
        }
        else
            printf("No\n"); return;
    //}
    //cout << "No\n"; return;

}

int main()
{
    ll t; cin >> t;
    while(t--)
    {
        baal();
    }
}


