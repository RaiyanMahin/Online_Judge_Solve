#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    vector<char >rm;
    string s; cin >> s; ll d = s.size();
    if(d == 1)
    {
        cout << s;
    }
    else {
    for(ll i = 0 ; i < d; i++)
    {
        if(s[i] != '+')
        {
            rm.push_back(s[i]);
        }
    }
    ll q = rm.size();
    sort(rm.begin(),rm.end());
    for(ll i = 0 ; i < (q - 1); i++)
    {
        cout << rm[i] << "+";
    }
    cout << rm[q - 1];
  }
 
}