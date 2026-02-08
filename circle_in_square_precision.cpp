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
    int t;
    cin>>t;
    int c=1;

    while(t--){

        long double r, pi= 2.0l*acos(0.0l); 
        cin>>r;

        long double sqr = 4.0l*r*r;
        long double circle = pi*r*r;

        long long temp = llround((sqr-circle)*100.0l);
        long double ans=temp/100.0l;

        cout<<"Case "<<c<<": "<<fixed<<setprecision(2)<<ans<<endl;

        c++;



    }



    

}
