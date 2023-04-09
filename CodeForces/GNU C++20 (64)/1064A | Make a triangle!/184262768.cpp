#include <bits/stdc++.h>
using namespace std;
using ll = long long;
//typedef push_back pb;
int main()
{
 
    vector <int >rm;
    set <int >:: iterator it;
 
    int a,b,c; cin >> a >> b >> c; rm.push_back(a); rm.push_back(b); rm.push_back(c); sort(rm.begin(),rm.end());
    //it = rm.begin();
    //cout << *it << *it++;
    if(rm[0] + rm[1] > rm[2]) cout << 0 ;
    else{
        ll d = rm[0] + rm[1] ;
        cout << rm[2] - d + 1 << '\n';
    }
 
 
 
}