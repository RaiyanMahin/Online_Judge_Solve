#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;

void baal()
{
   ll x, y; cin >> x >> y;
   if(x % 2 == y % 2 and x % 2 == 0)
   {
       cout << "0\n"; return;
   }
   if( x % 2 != y % 2 )
   {
       ll p = __gcd(x, y);
       if(p > 1)
       {
           cout << "0\n"; return;
       }
       if(p == 1)
       {
           cout << "1\n"; return;
       }
   }
   if(x % 2 == y % 2 and x % 2 == 1)
   {
       ll p = __gcd(x, y);
       if(p > 1)
       {
           cout << "0\n"; return;
       }
       if(p == 1)
       {
           ll x1 = x + 1, y1 = y + 1;
       ll v1 = __gcd(x, y1);
       if(v1 > 1)
       {
           cout << "1\n"; return;

       }
       if(v1 == 1)
       {
           ll v2 = __gcd(x1, y);
           if(v2 > 1)
           {
               cout << "1\n"; return;
           }
           if(v2 == 1)
           {
               cout << "2\n"; return;
           }

       }

       }
   }


}

int main()
{
    ll t; cin >> t;
    while(t--)

    {

        baal();
    }




}

