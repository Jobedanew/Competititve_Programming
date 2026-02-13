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

    ll x;
    cin>>x;

    vector<pair<ll,int>> v(n);
    for(int i=0 ; i<n ; i++){
        ll var;
        cin>>var;
        v[i].first=var;
        v[i].second=i+1;
    }

    sort(v.begin(),v.end());
    int flag=0;

    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){

            int l=j+1,r=n-1;

            while(l<r){

                ll sum=v[i].first+v[j].first+v[l].first+v[r].first;
                if(sum<x)l++;
                else if(sum>x)r--;
                else{
                    flag=1;
                    cout<<v[i].second<<" "<<v[j].second<<" "<<v[l].second<<" "<<v[r].second<<endl;
                    break;
                }

            }
            if(flag==1)break;
       }

       if(flag==1)break;
    }

    if(flag==0) cout<<"IMPOSSIBLE"<<endl;



}
