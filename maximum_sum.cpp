#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
#define pb push_back
#define pf push_front
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll m=n*n;
        ll mx=0;

        if(n==1)mx=1;
        if(n==2)mx=m+m-1+m-2;

        else{
        ll ans1=(m-(2*n)-1)+(m-1)+(m-n)+(m-n-1)+(m-n-2);
        ll ans2=(m-n-1)+m+(m-1)+(m-2);
        ll ans3=m+(m-1)+(m-n);
        mx=max(ans1,max(ans2,ans3));

        }


        cout<<mx<<endl;




    }

}

