#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
//vector<bool> visited;
//vector<int> p;

void check(){
	for(int i=0;i<adj.size();i++){
		cout<<i<<" ";
		for(auto u : adj[i])cout<<u;
		cout<<"\n";
	}
}
void dfs(int s,int &res,vector<bool>& visited,vector<int>& p){
    //process s;
    cout<<s<<" "<<res<<"\n";
    for(auto u:adj[s]){
        if(!visited[u]){
            visited[u]=true;
            p[u]=s;
            dfs(u,res,visited,p);
        }
        else if(p[s]!=u){res++;break;}
    }
    /*if(adj[s].size()==0)return;
    if(visited[adj[s][0]]){if(adj[s][0]!=p[s])res++;return;}
    else {visited[adj[s][0]]=true;p[adj[s][0]]=s;dfs(adj[s][0],res,visited,p);}*/
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//cout<<"\n";
	int t;
	cin>>t;
	int n,m;
	while(t--){
		cin>>n>>m;
		vector<bool> occ(n,false);
		int a[m][2];
		int copy=m;
		for(int i=0;i<copy;i++){
			cin>>a[i][0]>>a[i][1];
			a[i][0]--;a[i][1]--;
			if(a[i][0]==a[i][1])m--;
		}

		adj.resize(m+n);
		vector<bool> visited(m+n,false);
		vector<int> p(m+n,0);
		int res=0;
		int c=0;
		for(int i=0;i<copy;i++){
			//int x,y;
			//cin>>x>>y;
			int x=a[i][0],y=a[i][1];
			if(x==y){continue;}
			//if(x==y)c++;
			//x--;y--;
			adj[c].push_back(m+x);
			adj[c].push_back(m+y);
			adj[m+x].push_back(c);
			adj[m+y].push_back(c);
			c++;
		}

		//visited[0]=true;
		for(int i=0;i<m+n;i++){
			if(!visited[i]){
				visited[i]=true;
				dfs(i,res,visited,p);
				//res++;
			}
		}
		cout<<m+res<<"\n";
		//check();
		//cout<<"\n";
		
	}
	
}
