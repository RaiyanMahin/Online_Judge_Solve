 
#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;
int main()
{
    ll n; cin >> n;
    if(n % 3 == 0) {
        cout << 1 << ' ' << 1 << ' ' << n - 2 << '\n';
    }
    else {
        cout << 1 << ' ' << 2 << ' ' << n -3 << '\n';
    }
}