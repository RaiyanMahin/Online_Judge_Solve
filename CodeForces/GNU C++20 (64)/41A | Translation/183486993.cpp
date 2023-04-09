#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000],b[1000];
    cin>>a>>b;
    strrev(a);
    int q=strcmp(a,b);
    if(q==0)
    {
        cout<<"YES"<<endl;
    }
    if(q!=0)
    {
        cout<<"NO"<<endl;
    }
}