#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,n,k;
	cin>>t;

	while(t--){
		cin>>n>>k;
		if (k<n){
			if(n%k==0)k=n;
			else k+=(n/k)*k;
		}
		if(k%n==0)cout<<k/n;
		else cout<<k/n+1;
		cout<<"\n";
	}

}