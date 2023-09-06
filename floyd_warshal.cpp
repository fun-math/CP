#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,q;
	long long INF=1LL<<62;
	cin>>n>>m>>q;

	vector<vector<pair<int,int>>> adj(n);
	vector<bool> visited(n,false);
	vector<long long> dist(n,INF);

	int a,b,c;
	
	for(int i=0;i<m;i++){
		cin>>a>>b>>c;
		adj[--a].push_back({--b,c});
	}

	int dist[n][n];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j) dist[i][j] = 0;
			else if (adj[i][j]) dist[i][j] = adj[i][j];
			else dist[i][j] = INF;
		}
	}

	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
				dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
				dist[j][i]=dist[i][j];
			}
		}
	}

}