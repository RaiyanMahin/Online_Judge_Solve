    
    #include<bits/stdc++.h>
    using namespace std;
    #define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
    typedef long long int  ll;
    int main()
    {
        FIO;
        int t; cin>>t;
        for(int i=1;i<=t;i++)
        {
            ll n,s=0,q; cin >>n;  ll a[n];
            for(int j=0;j<n;j++){
     
                cin>>a[j];
                s+=a[j];
            }
            
            if(s%n==0){
                q=s/n;
                cout<<q<<endl;
            }
            if(s%n!=0){
                q=(s/n)+1;
                cout<<q<<endl;
            }
            s=0;
     
        }
    }