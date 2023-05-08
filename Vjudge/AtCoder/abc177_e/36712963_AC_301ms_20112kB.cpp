///Bismillahir Rahmanir Rahim
#include "bits/stdc++.h"

#define                           ll                          long long
#define                           int                         ll
#define                           fi                          first
#define                           si                          second
#define                           mp                          make_pair
#define                           pb                          push_back
#define                           pi                          pair<ll,ll>
#define                           clr(x)                      memset(x,0,sizeof(x));
#define                           f(i,l,r)                    for(int i=l;i<=r;i++)
#define                           rf(i,r,l)                   for(int i=r;i>=l;i--)
#define                           done(i)                     cout<<"done = "<<i<<endl;
#define                           show(x,y)                   cout<<x<<" : ";for(auto z:y)cout<<z<<" ";cout<<endl;
#define                           fast                        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int M=1000005;
int a[M],n;
bool vis[M];
int spf[M+7];
vector<int>prime;
void sieve()
{
    spf[1]=1;
    f(i,1,M)spf[i]=i;
    for(int i=4;i<=M;i=i+2)
    {
        spf[i]=2;
    }
    for(int i=3;i*i<=M;i=i+2)
    {
        if(spf[i]==i)
        {
           for(int j=i*i;j<=M;j=j+i)
           {
               if(spf[j]==j)
               {
                   spf[j]=i;
               }
           }
        }
    }
}
void prime_factorization(int val)
{
    while(val!=1)
    {
        int p=spf[val],cnt=0;
        prime.pb(p);
        while(val%p==0)val=val/p,cnt++;
    }
}
 main()

{
    fast
    int g=0;
    sieve();
    cin>>n;
    f(i,1,n)
    {
        cin>>a[i];
        g=__gcd(g,a[i]);
    }
    bool yo=true;
    rf(i,n,1)
    {
        prime.clear();
        prime_factorization(a[i]);
        bool flag=0;
        for(auto x:prime)
        {
            if(vis[x]==1)flag=1;
            vis[x]=1;
        }
       if(flag==1)
       {
           yo=false;
       }
    }
    if(yo==true)
    {
        cout<<"pairwise coprime\n";
    }
    else
    {
        if(g==1)
        {
            cout<<"setwise coprime\n";
        }
        else
        {
            cout<<"not coprime\n";
        }
    }
    return 0;

}



































