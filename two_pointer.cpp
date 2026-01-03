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
    while(t--){

        int n,x;
        cin>>n>>x;

        int arr[n];

        for(int i=0 ; i<n ; i++) cin>>arr[i];

        sort(arr,arr+n);

        int l=0,r=n-1;
        int ans1=0,ans2=0;

        while(l<=r){

            int chk = arr[l]+arr[r];
            

            if(chk == x){
                ans1 = arr[l];
                ans2 = arr[r];
                l++;
                r--;
                
            }

            else if(chk > x){

                r--;

            }

            else l++;

        }

        cout<<ans1<<" "<<ans2;

    
    }
   
}

// sum of two numbers with minimum index difference.................

// int main()
// {

//     optimize();
//     int t;
//     cin>>t;
//     while(t--){

//         int n,x;
//         cin>>n>>x;

//         int arr[n];

//         for(int i=1 ; i<=n ; i++) cin>>arr[i];

//         map<int,int> mp;

//         int l=1,r=n;
//         int ans1=0,ans2=0;

//         for(int i=1 ; i<=n ; i++){
//            mp[arr[i]]=i;
//         }

//         int dis=INT_MAX;


//         for(auto i:mp){

//             if(i.first >= x){
//                 continue;

//             }

//             int chk = x-i.first;
            

//             if(mp.find(chk) != mp.end()){

//                 int a = mp[chk];
//                 int b = i.second;

//                 int d=abs(a-b);

//                 if(d<dis){

//                 ans1 = chk;
//                 ans2 = i.first;
//                 if(ans1>ans2) swap(ans1,ans2);
//                 dis = d;
                
//                 }
 
//             }


//         }

//        cout<<ans1<<" "<<ans2;

    
//     }
   
// }
