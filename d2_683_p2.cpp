#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,n,m;
	int a[10][10];
	cin>>t;
	while(t--){
		cin>>n>>m;
		int sum=0,mini=1000;
		bool e=true;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
				if(a[i][j]>=0){sum+=a[i][j];mini=min(mini,a[i][j]);}
				else {sum-=a[i][j];
				mini=min(mini,-a[i][j]);
				e=!e;}
			}
		}

		if(e)cout<<sum<<"\n";
		else cout<<sum-2*mini<<"\n";
	}
}