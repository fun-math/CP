#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,n,m;
	cin>>t;

	while(t--){
		cin>>n>>m;
		int a[n][m];
		for(int i=0;i<n;i++){
			string s;
			cin>>s;
			for(int j=0;j<m;j++){
				if(s[j]=='*')a[i][j]=1;
				else a[i][j]=0;
			}
		}

			for(int i=n-1;i>0;i--){
				for(int j=1;j<m-1;j++){
					if(a[i-1][j]>0)a[i-1][j]+=min(a[i][j-1],min(a[i][j],a[i][j+1]));
				}
			}
			long long sum=0;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					sum+=a[i][j];
				}
			}
			cout<<sum<<"\n";
		
	}
}