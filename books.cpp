#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
#define pb push_back
#define pf push_front
#define MOD 1000000007
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {

    int n; cin>>n;
    ll t; cin>>t;

    vector<int> v(n);
    for(int i=0 ; i<n ; i++) cin>>v[i];

    int ans=0,r=0;
    ll sum=0;

    for(int l=0 ; l<n ; l++){

        while(r<n && sum+v[r] <= t){
            sum+=v[r];
            r++;
            
        }

        ans=max(ans,r-l);
        sum-=v[l];
        
    }

    cout<<ans<<endl;


}

