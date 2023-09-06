#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,n,k;
	cin>>t;
	while(t--){
		//cin>>n;
		cin>>n>>k;
		int a[n*k];
		for(int i=0;i<n*k;i++)cin>>a[i];
		long long sum=0;
		{
			for(int i=n*k-(n/2+1);i>=n*k-(n/2+1)*k;i-=(n/2+1)){
				sum+=a[i];
			}
			cout<<sum<<"\n";
		}
	}
}