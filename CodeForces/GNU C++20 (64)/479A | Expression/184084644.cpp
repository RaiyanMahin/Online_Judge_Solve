#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
     vector <ll > rm;
     ll a,b,c; cin >> a >> b >> c;
     ll A = a + (b * c); rm.push_back(A); ll B = a * (b + c) ; rm.push_back(B);
     ll C = a * b * c; rm.push_back(C); ll D = (a + b) * c; rm.push_back(D); ll E = a + b + c; rm.push_back(E);
     sort(rm.rbegin(),rm.rend()); cout << rm[0] << '\n';
 
}