//(|||.()(||||||)
 //.(|||.()(||||||)
      #include<bits/stdc++.h>
    #define FiO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
    #define PB push_back

    //using ll = long long;

    using namespace std;
    int main()
    {
        int n; cin>>n;
        char s[n+1]; cin>>s;
        int d =strlen(s);
        int cnt=0;
        for(int i=0;i<d;i++){
            if(s[i]!=s[i+1]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }

