#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
#define pb push_back
#define pf push_front
#define MOD 1000000007
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {

	optimize();
	string s;
	cin>>s;

	deque<char> left;
	deque<char> right;

	for(int i=0 ; i<s.length() ; i++){

		if(s[i]=='L' && !left.empty()){

			right.push_front(left.back());
			left.pop_back();
		}
		else if(s[i]=='R' && !right.empty()){

			left.push_back(right.front());
			right.pop_front();
		}
		else if(s[i]!='R' && s[i]!='L'){

			left.push_back(s[i]);

		}

	}

	for(auto &c : left) cout<<c;
	for(auto &c : right) cout<<c;
	cout<<endl;

}
