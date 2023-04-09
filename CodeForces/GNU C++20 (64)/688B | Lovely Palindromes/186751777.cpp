 
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
typedef long long ll;
//const int MAX=2e5+7;
using namespace std;
int main()
{
    FIO;
    string s;  getline(cin,s);
    cout<<s;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}