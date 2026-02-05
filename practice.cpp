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

    vector<int> v(n);

    for(int i=0 ; i<n ; i++) cin>>v[i];

    stack<pair<int,int>> st;
    
    for(int i=0 ; i<n ; i++){

        while(!st.empty() && st.top().second>=v[i]) st.pop();

        if(!st.empty()) cout<<st.top().first<<" ";
        else cout<<0<<" ";

        st.push({i+1,v[i]});
    }


}
