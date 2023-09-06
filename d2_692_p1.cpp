#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	string s;
	while(t--){
		
		int m;
		cin>>m;
		int n=0;
		cin>>s;
		for(n=s.size()-1;n>=0;n--){
			if(s[n]!=')')break;
		}
		if(2*(s.size()-1-n)>s.size())cout<<"Yes\n";
		else cout<<"No\n";
	}
}
