#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
map < string , ll > mp1, mp2;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n; cin >> n;
    while(n--)
    {
        string s; cin >> s;
        if(s[0] != '!')
        {
            mp1[s]++;

        }
        else if(s[0] == '!')
        {
            mp2[s]++;
        }

    }
    string AA = "";
    for(auto i : mp1)
    {
        string S = i.first;
        S = '!' + S;
        if(mp2[S])
        {
            AA = S;
            break;

        }
    }
    if(AA == "")
        return cout << "satisfiable" , 0;
    if(AA != "")
    {
        for(ll i = 1; i < AA.size(); i++)
        cout << AA[i];
    }
















}
