 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
     int s,v1,v2,t1,t2; cin >> s >> v1 >> v2 >> t1 >> t2;
     ll A = s * v1 + 2 * t1; ll B = s * v2 + 2 * t2; 
     if(A == B) cout << "Friendship" << '\n';
     if(A < B) cout << "First" << '\n';
     if(A > B) cout << "Second" << '\n';
}