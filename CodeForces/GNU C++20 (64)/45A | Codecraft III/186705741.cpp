#include <bits/stdc++.h>
using ll = long long;
using namespace std;
unordered_map < string,ll > mp;
void init_work()
{
    mp.insert({ "January", 1 });
    mp.insert( { "February", 2 } );
    mp.insert( { "March" , 3 } );
    mp.insert( { "April" , 4 } );
    mp.insert( { "May" , 5 } );
    mp.insert( { "June", 6 } );
    mp.insert(  { "July" , 7 } );
    mp.insert( { "August" , 8 } );
    mp.insert( { "September" , 9 } );
    mp.insert( { "October", 10 } );
    mp.insert( { "November" , 11 } );
    mp.insert( { "December", 12 } );
 
 
}
int main()
{
    init_work();
    string s,s1 = ""; cin >> s;
    ll n, m; cin >> n;
    for(auto x : mp)
    {
        if(x.first == s)
        {
            m = x.second;
            break;
 
        }
    }
    ll M = n + m;
    ll re = M % 12;
    if(re == 0)
    {
        return cout << "December\n",0;
    }
    else
    {
 
 
    for(auto x : mp)
    {
        if(x.second == re)
        {
            s1 = x.first;
            break;
        }
    }
    cout << s1 << '\n';
    }
 
 
 
}