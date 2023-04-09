#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define md 1000000007
int main()
{
    int n; cin >> n;
    char s[100000]; cin >> s; ll d = strlen(s);
    for(int i = 0; i < d;i++)
    {
        if(s[i] + n <= 'Z')
        {
            s[i] = s[i] + n;
        }
       else  if(s[i] + n >'Z')
        {
            s[i] = s[i] - 26;
            s[i] = s[i] + n;
        }

    }
    cout << s ;
}
