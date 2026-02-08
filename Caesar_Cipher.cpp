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

    string s;
    while(getline(cin,s)){

        
        int j=1;
        while(j<=26){

        string ss=s;

        for(int i=0 ; i<ss.length() ; i++){

        if(ss[i] >='a' && ss[i] <='z') ss[i] = (ss[i]-'a' + (26-j))%26 +'a';

        }

        string chk="";
        int flag=0;

        for(int i=0 ; i<ss.length() ; i++){

            if(ss[i] != ' ' && ss[i] != '.'){
                chk+=ss[i];
                continue;
            }

            if(chk=="the" || chk=="this" || chk=="that"){
                flag=1;
                break;
            }

            chk="";    

        }

        if(chk=="the" || chk=="this" || chk=="that"){
                flag=1;
                
        }

        if(flag==1){
            cout<<ss<<endl;
            cout<<'t'-'a';
            break;
        }

        j++;

       }



    }


}









