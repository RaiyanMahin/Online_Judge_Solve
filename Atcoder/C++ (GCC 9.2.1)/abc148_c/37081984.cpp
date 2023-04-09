/* #include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define md 1000000007
int main()
{
    int n; cin >> n;
    char s[100000]; cin >> s; ll d = strlen(s);
    for(int i = 0; i < d;i++)
    {
        if(s[i] + n <= 'Z')
        {
            s[i] = s[i] + n;
        }
       else  if(s[i] + n >'Z')
        {
            s[i] = s[i] - 26;
            s[i] = s[i] + n;
        }

    }
    cout << s ;
} */
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

#define md 1000000007
ll gcd (ll a, ll b)
{
    return b == 0 ? a : gcd(b,a % b);
}
int main()
{
    ll n,m; cin >> n >> m;
    ll d = gcd(n,m);
    ll f = m * n;
    cout << f /d;

}
















