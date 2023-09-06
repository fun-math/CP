#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<n<<"\n";
		for(int i=0;i<n;i++){
			cout<<i+1<<" ";
		}
		cout<<"\n";
	}
}