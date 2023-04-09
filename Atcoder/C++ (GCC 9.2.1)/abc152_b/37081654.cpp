
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b; cin >> a >> b;
    int d = min(a,b);
    for(int i = 1; i <= max(a,b); i++)
    {
        printf("%d",d);
    }


}
