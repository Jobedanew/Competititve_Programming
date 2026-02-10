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

    ll p;
    cin>>p;
    
    
    vector<pair<int,int>> a(n);  

    for(int i=0 ; i<n ; i++){
        int var;
        cin>>var;
        a[i]={var,i};
    }

    sort(a.begin(),a.end());

    int flag=0;

    for(int i=0 ; i<n ; i++){
        
        int l=i+1 ,r=n-1;
        while(l<r){

            ll sum = a[i].first + a[l].first + a[r].first;

            if(sum > p) r--;
            else if(sum < p) l++;
            else{
                flag=1;
                break;
            }

        }

        if(flag==1){
            cout<<a[i].second+1<<" "<<a[l].second+1<<" "<< a[r].second+1<<endl;
            break;
        }
    }

    if(flag != 1) cout<<"IMPOSSIBLE"<<endl;

}
