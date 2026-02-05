#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
#define pb push_back
#define pf push_front
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// bitmask example to find extact two unique element

int main()
{
    optimize();
    int t;
    cin>>t;
    
    while(t--){
        
        int n;
        cin>>n;

        int a[n],xr=0;

        for(int i=0 ; i < n ; i++){
            cin>>a[i];
            xr^=a[i];
        }

        int chk=xr,index=0;

        while(chk>0){

            if(chk&1) break;
            index++;
            chk=chk>>1;
        }
        int mask = 1<<index ;
        vector<int> temp;
        for(int i=0 ; i<n ; i++){
            if(a[i] & mask){
                temp.pb(a[i]);
            }
        }
        int ansA=0,ansB=0;

        for(auto & v:temp){
            ansA^=v;
        }

        ansB=ansA^xr;



        cout<<ansA<<" "<<ansB<<endl;


   } 


}
