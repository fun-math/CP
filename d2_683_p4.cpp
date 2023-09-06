#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string a,b;
	int n,m;
	cin>>n>>m;
	//cout<<1<<endl;
	cin>>a>>b;
	vector<vector<int>> mi(n+1,vector<int> (m+1,0)),lcs(n+1,vector<int> (m+1,0));

	int s=0;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			//cout<<i<<" "<<j<<endl;
			if(i==0 || j==0){
				lcs[i][j]=0;
				mi[i][j]=-max(i,j);
			}
			else if(a[i-1]==b[j-1]){
				lcs[i][j]=lcs[i-1][j-1]+4;
			}
			else {
				lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
			}
			if(i>0 && j>0)mi[i][j]=min(mi[i-1][j],min(mi[i][j-1],lcs[i][j]-i-j));
			//if(s>lcs[i][j]-i-j)cout<<i<<" "<<j<<endl;
			s=max(s,lcs[i][j]-i-j-mi[i][j]);

		}

	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			cout<<lcs[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			cout<<mi[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<s<<"\n";

}