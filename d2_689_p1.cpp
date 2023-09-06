#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,n,k;
	cin>>t;

	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			if(i%3==0)cout<<'a';
			else if(i%3==1)cout<<'b';
			else cout<<'c';
		}
		cout<<"\n";
	}
}