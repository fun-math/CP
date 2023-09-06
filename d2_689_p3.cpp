#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,n,m;
	cin>>t;

	while(t--){
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		int k;
		for(k=n-1;k>=0;k--)if(a[k]!=k+1)break;
		int r;
		double p=0,q=1,pi;
		for(int i=0;i<m;i++){
			cin>>r>>pi;
			if(r>k){
				p+=q*pi;
				q=q*(1-pi);
			}
		}
		if(p>1)cout<<1;
		else if(k==-1)cout<<1;
		else cout<<p;
		cout<<"\n";
	}
}