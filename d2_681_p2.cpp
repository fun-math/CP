#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,n,b[1000];
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++)cin>>b[i];
		sort(b,b+n);
		bool e=true;
		for(int i=1;i<n;i++){
			if(b[i]==b[i-1]){e=false;break;}
		}
		if(!e)cout<<"YES\n";
		else cout<<"NO\n";
	}
}