#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	int n,k;
	while(t--){
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		int ma=0,mi=0;
		mi=a[0];
		ma=a[0];
		bool e=true;
		for(int i=1;i<n;i++){
			mi=max(mi-k+1,a[i]);
			ma=min(ma+k-1,a[i]+k-1);
			if(mi>ma)e=false;
		}
		if(mi!=a[n-1])e=false;
		if(e)cout<<"YES\n";
		else cout<<"NO\n";
	}
}
