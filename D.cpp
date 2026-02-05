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


        ll n,m,k;
        cin>>n>>m>>k;

        ll p[n],a[m];

        for(int i=1 ; i<=n ; i++) cin>>p[i];
        for(int i=1 ; i<=m ; i++) cin>>a[i];

        sort(p+1,p+n+1);
        sort(a+1,a+m+1);

        ll ans1=0;       
        for(int i=1 ; i<=n ; i++){

            if(i>m)break;

            ll temp=a[i]+k;     
            if(abs(temp-p[i]) <=k) ans1++;

        } 
        

        ll ans2=0;
        for(int i=1 ; i<=n ; i++){

            if(i>m)break;

            ll temp=abs(a[i]-k);     
            if(abs(temp-p[i]) >=k ) ans2++;

        }  
        
        ll ans3=0;
        for(int i=1 ; i<=n ; i++){

            if(i>m)break;
            if(abs(a[i]-p[i]) == k ) ans3++;

        } 

        cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;

        cout<<max(ans2,max(ans1,ans3))<<endl;






    

}
