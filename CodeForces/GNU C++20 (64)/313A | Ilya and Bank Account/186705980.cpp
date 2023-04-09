#include <bits/stdc++.h>
using ll = int;
//ll M = 1e9;
using namespace std;
int main()
{
    vector<ll > rm;
    vector<ll >:: iterator it;
   ll n; cin >> n;
   if(n > 0 || n == 0)
   {
       cout << n << '\n';
       return 0;
   }
   if(n < 0)
   {
       ll s = abs(n);
         while (s != 0)
        {
            ll f = s % 10;
 
                rm.push_back(f);
                s /= 10;
 
 
 
 
        }
        //reverse(rm.begin(),rm.end());
        if(rm.size() == 2)
        {
            sort(rm.begin(),rm.end());
            if(rm[0] > 0)
            {
                cout << "-" << rm[0] << '\n';
            }
            if(rm[0] == 0)
            {
                cout << 0 << '\n';
            }
        }
        if(rm.size() > 2) {
            cout << "-" ;
         reverse(rm.begin(),rm.end());
          if(rm[rm.size()- 1] < rm[rm.size()-2])
                swap(  rm[rm.size()- 1] , rm[rm.size()-2] );
            for(int i = 0; i < rm.size() - 1 ; i++)
            {
                cout << rm[i];
            }
 
        }
        rm.clear();
 
   }
 
}