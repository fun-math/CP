#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,q;
	long long INF=1LL<<61;
	cin>>n>>m>>q;

	vector<vector<int>> adj(n,vector<int>(n,0));

	int a,b,c;

	vector<vector<long long>> dist(n,vector<long long>(n,INF));

	for(int i=0;i<m;i++){
		cin>>a>>b>>c;
		a--;b--;
		if(adj[a][b]==0 || adj[a][b]>c){
			adj[a][b]=c;
			adj[b][a]=c;
			dist[a][b]=c;
			dist[b][a]=c;
		}
	}

	for (int i = 0; i < n; i++) {
		dist[i][i]=0;
	}

	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
				dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
				dist[j][i]=dist[i][j];
			}
		}
	}

	for(int i=0;i<q;i++){
		cin>>a>>b;
		a--;b--;
		if(dist[a][b]<INF)cout<<dist[a][b];
		else cout<<-1;
		cout<<"\n";
	}

}