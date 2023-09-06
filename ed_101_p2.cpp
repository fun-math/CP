#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	int n,m;
	while(t--){
		cin>>n;
		int a[n];
		int sa=0,ma=0,sb=0,mb=0;
		for(int i=0;i<n;i++){cin>>a[i];sa+=a[i];ma=max(ma,sa);}
		cin>>m;
		int b[m];
		for(int i=0;i<m;i++){cin>>b[i];sb+=b[i];mb=max(mb,sb);}
		cout<<ma+mb<<"\n";			
	}
}
