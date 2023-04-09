/// yo mama.. VECTOR <PAIR < >  >  sesh e ekhn MAP
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll n,m; cin >> n >> m;
    unordered_map < string , string > mp;
    while(n--)
    {
        string name, ip; cin >> name >> ip;
        ip += ";";
        mp[ip] = name;
    }
    while(m--)
    {
        string ss = "";
        string name2, ip2; cin >> name2 >> ip2;
        for(auto x : mp)
        {
            if(x.first == ip2)
            {
                ss = x.second;
                break;
            }
        }
        cout << name2 << ' ' << ip2 << ' ' << "#" << ss << '\n';
        ss.clear();
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   /* ll n,m; cin >> n >> m;
    vector < pair < string , string > > vp;
    while(n--)
    {
        string name, ip; cin >> name >> ip;
        ip += ";";
        ///vp.push_back({name, ip});
        vp.push_back(make_pair(name, ip));
    }
    while(m--)
    {
        
        string name2, ip2; cin >> name2 >> ip2;
        cout << name2 << ' ' << "#";
        for(ll i = 0; i < vp.size(); i++)
        {
            if(ip2 == vp[i].second)
            {
                cout << vp[i].first << '\n';
                break;
                
 
            }
        }
        
    } */
}