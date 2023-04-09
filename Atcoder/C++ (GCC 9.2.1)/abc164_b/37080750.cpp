#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
   ll a,b,c,d;
   cin >> a >> b >> c >> d;
   ll a1 = 0 , a2 = 0;
   while(a > 0)
   {
       a -= d;
       a1++;
       if(a <= 0)
       {
           break;
       }
   }
   while(c > 0)
   {
       c -= b;
       a2++;
       if(c <= 0)
       {
           break;
       }
   }
   if ( a1 < a2 )
   {
       cout << "No\n";
   }
   if(a1 >= a2)
   {
       cout << "Yes\n";
   }

}

