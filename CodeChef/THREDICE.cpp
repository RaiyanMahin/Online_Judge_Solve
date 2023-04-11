#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;
void baal()
{
    ll a ,b; cin >> a >> b; ll s = (a + b);
    if(s >= 6)
    {
        cout << "0\n"; return;
    }
    ll baki = (6 - s);
    double ff = (baki * 1.0) / 6.0;
    cout << fixed << setprecision(10) << ff << endl;







}

int main()
{
    ll t; cin >> t;

    while(t--)

    {

        baal();
    }




}



