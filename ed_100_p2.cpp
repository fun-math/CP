#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,n;
	cin>>t;

	while(t--){
		cin>>n;
		int a[n];
		long long sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		for(int i=0;i<n;i++){
			cout<<(1<<int(log2(a[i])))<<" ";
		}
		cout<<"\n";
		
	}
}