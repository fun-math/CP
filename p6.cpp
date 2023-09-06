#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,n,k;
	cin>>t;

	while(t--){
		cin>>n;
		vector<int> p(n);
		for(int i=0;i<n;i++)cin>>p[i];
		vector<int> res(n,0);
		res[0]=2;
		int i=1;
		int l=0,r=p[0]+1;
		bool doable=false;
		while(true){
			if(l>=n){doable=true;break;}
			if(i>=n){doable=false;break;}
			if(p[i]>=i-l){
				res[i]=1;
				for(int k=l+1;k<i;k++){
					res[k]=2;
					if(r<=k+p[k])r=k+p[k]+1;
					
				}
				r=max(i,r);
				l=min(i,r);
				i=l;
			}
			else {
				res[i]=2;
				r=max(r,p[i]+i+1);
			}
			i++;
		}
		if(doable)cout<<"YES\n";
		else cout<<"NO\n";

	}

}