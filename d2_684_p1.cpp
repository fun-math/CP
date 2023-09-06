#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,n,c0,c1,h;
	string s;
	cin>>t;
	while(t--){
		//cin>>n;
		cin>>n>>c0>>c1>>h;
		cin>>s;
		int f=0;
		for(int i=0;i<n;i++)if(s[i]=='0')f++;
		if(h<(c0-c1))cout<<n*c1+f*h;
		else if(h<(c1-c0))cout<<n*c0+(n-f)*h;
		else cout<<(f*c0+(n-f)*c1);
		cout<<"\n";
	}
}