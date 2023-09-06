#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,n,k;
	cin>>t;
	string s;

	while(t--){
		cin>>n>>s;
		vector<int> le(n+1,0),lo(n+1,0),re(n+1,0),ro(n+1,0);

		for(int i=0;i<n;i++){
			if(s[i]=='L')le[i+1]+=lo[i]+1;
			if(s[i]=='R')lo[i+1]+=le[i]+1;
		}

		for(int i=n-1;i>=0;i--){
			if(s[i]=='R')re[i]+=ro[i+1]+1;
			if(s[i]=='L')ro[i]+=re[i+1]+1;
		}

		for(int i=0;i<n+1;i++){
			cout<<(le[i]+re[i]+1)<<" ";
		}
		cout<<"\n";
	}

}