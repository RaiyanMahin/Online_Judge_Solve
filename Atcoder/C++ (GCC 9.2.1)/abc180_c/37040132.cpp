#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
void printDivisors(ll  n)
{
    ll cnt = 0;
    for (ll i = 1; i*i < n; i++) {
        if (n % i == 0)
        {
            cnt++;
            printf("%lld\n", i);
        }
    }
    for (ll i = sqrt(n); i >= 1; i--) {
        if (n % i == 0)
        {
            cnt++;
            printf("%lld\n", n / i);
        }
    }
    //return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n; cin >> n;
    printDivisors(n);
    return 0;




}
