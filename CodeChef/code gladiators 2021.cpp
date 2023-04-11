
1.

susbsequence

2.

range e prime max diff






#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
#define FIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
int main()
{
   string s; cin >> s; int x = (int)s.size();
   int n; cin >> n;
   while(n--)
   {
       string t; cin >> t; int sz = (int)t.size();
       int c = 0, indx = 0;
       for(int i = 0; i < x; i++)
       {
           if(t[indx] == s[i])
           {
               indx++;
           }
       }
       //cout << indx << endl;
       if(indx == sz)
       {
           cout << "POSITIVE\n";
       }
       else
       {
           cout << "NEGATIVE\n";
       }

   }
}

///////////////
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll baal(ll n)
{
    for(ll i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            return -1;
        }
    }
    return 1;
}

int main()
{
   ll t; cin >> t;
   while(t--)
   {
       ll L , R; cin >> L >> R;
       ll ch1 = 0, ch2 = 0;
       ll mn = 0, mx = 0;
       for(ll i = L ; i <= R ; i++)
       {
           ll bo = baal(i);
           if(bo == 1)
           {
               ch1 = 1;
               mn = i;
               break;


           }
       }
       for(ll i = R ; i >= L ; i--)
       {
           ll bo = baal(i);
           if(bo == 1)
           {
               ch2++;
               mx = i;
               break;


           }
       }
       if(!ch1 and !ch2)
       {
           cout << "-1\n";
       }
       if(ch1 or ch2)
       {
           cout << mx - mn << endl;
       }

   }
}

