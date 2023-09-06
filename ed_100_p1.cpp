#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,a,b,c;
	cin>>t;

	while(t--){
		cin>>a>>b>>c;
		int m=min(a,min(b,c));
		int ans=a+b+c-3*m;
		if(ans%3!=0)cout<<"No\n";
		else {

			int temp=ans/6;
			if(ans==0)temp+=3;
			if(ans%6!=0)temp+=2;
			if(temp<=m && (m-temp)%3==0)cout<<"YES\n";
			else cout<<"NO\n";
			//cout<<ans<<" "<<m<<"\n";
		}
	}
}