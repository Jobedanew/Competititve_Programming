#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
#define pb push_back
#define pf push_front
#define MOD 1000000007
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    optimize();

    int n;
    cin>>n;

    map<ll,ll> mp;
    ll ans=0,cnt=0,start=0;

    for(int i=0 ; i<n ; i++){

        ll var;
        cin>>var;

        if(mp.find(var)==mp.end()){
            mp[var]=i+1;
            cnt++;
            
        }
        else{

            ans = max(cnt,ans);
            start = max(start,mp[var]);
            cnt=i+1-start;                   
            mp[var]=i+1;
            
                      
        }

        
    }

    ans = max(cnt,ans);
    cout<<ans<<endl;

    
   

}
