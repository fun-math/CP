#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<pair<int,int>>> adj;
vector<bool> visited;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	cin>>n>>m;
	vector<long long int> dist(n,1LL<<60);

	adj.resize(n);
	visited.resize(n,0);
	
	int a,b,c;
	
	for(int i=0;i<m;i++){
		cin>>a>>b>>c;
		adj[--a].push_back({--b,c});
	}

	dist[0]=0;
	priority_queue<pair<long long,int>> q;
	q.push({0,0});

	while(!q.empty()){
		a=q.top().second;
		q.pop();
		if(visited[a])continue;
		visited[a]=true;

		for(auto u : adj[a]){
			b=u.first;c=u.second;
			if(dist[a]+c < dist[b]){
				dist[b]=dist[a]+c;
				q.push({-dist[b],b});
			}
		}
	}

	for(int i=0;i<n;i++)cout<<dist[i]<<" ";
}