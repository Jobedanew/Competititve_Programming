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

    int n,m,k;
    cin>>n>>m>>k;

    ll a[n],b[m];
    for(int i=0 ; i<n ; i++) cin>>a[i];
    for(int i=0 ; i<m ; i++) cin>>b[i];

    sort(a,a+n);
    sort(b,b+m);
    int p=0,flag=0,ans=0;


    for(int i=0 ; i<n ; i++){

        ll x=a[i]-k;
        ll y=a[i]+k;

        while(b[p]<x && p<m){
            p++;
        }

        if(b[p]<=y && p<m){
            ans++;
            p++;
        }


    }

    cout<<ans<<endl;


}
