#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int q;
    //long long s=0;
    cin>>q;
    long long s=0;
    for(int i=1; i<=q;i++){
            long long a,b,c;
        cin>>a>>b>>c;
        s=a+b+c;
        long long  q=s/2;
        cout<<q<<endl;
    }
}