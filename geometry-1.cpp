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
    int r;
    cin>>r;

    float areaCircle1= (3.1416*(float)r*r)/4;
    float square=((float)r*r);
    float ans = square-((square - areaCircle1)*2);
    cout<< ans;


}
