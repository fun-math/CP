#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
//vector<bool> visited;
vector<int> state;
vector<int> sorted;
bool exists=true;

void dfs(int s){
    //process s;
    state[s]=1;

    for(auto u:adj[s]){
    	if(state[u]==1){exists=false;break;}
        else if(state[u]==0){
            //visited[u]=true;
            dfs(u);
        }
    }
    state[s]=2;
    sorted.push_back(s);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,n,k;
	//cin>>t;

	//while(t--){
		cin>>n>>k;
		adj.resize(n-k);
		//visited.resize(n-k,false);
		state.resize(n-k,0);
		
		vector<vector<int>> names;
		vector<int> rev(n);
		vector<bool> taken(n,false);
		int p[n];
		int root,r;
		for(int i=0;i<n;i++){
			cin>>p[i];
			if(p[i]==0)root=i;
			p[i]--;
		}

		for(int i=0;i<k;i++){
			int x,y;
			cin>>x>>y;
			x--;y--;
			taken[x]=true;
			taken[y]=true;
			vector<int> temp{x,y};
			rev[x]=names.size();
			rev[y]=names.size();
			names.push_back(temp);
		}
		for(int i=0;i<n;i++){
			if(!taken[i]){
				rev[i]=names.size();
				vector<int> temp{i};
				names.push_back(temp);
			}
		}
		for(int i=0;i<n;i++){
			if(p[i]==-1)r=rev[i];
			else {
				adj[rev[i]].push_back(rev[p[i]]);
			}

		}
		//visited[r]=true;
		dfs(r);
		if(exists){
			for(int i=sorted.size()-1;i>=0;i--){
				for(auto v:names[sorted[i]])cout<<v+1<<" ";
			}
		}
		else cout<<0;
		cout<<"\n";
		
	//}
}