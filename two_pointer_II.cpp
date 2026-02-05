#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
#define pb push_back
#define pf push_front
#define MOD 1000000007
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// sum of two integer with index value 

int main()
{
    optimize();

     ll n,x;
     cin>>n>>x;


     int flag=0;

     map<ll,ll> mp;
     for(ll i=1 ; i<=n ; i++){

        ll var;
        cin>>var;

        if(x <= var) continue;

        ll target = x-var;
        if(mp.find(target) != mp.end()){
            cout<<i<<" "<<mp[target];
            flag=1;
            break;
        }

        mp[var]=i;

     }

   

     if(flag==0) cout<<"IMPOSSIBLE"<<endl;


}
