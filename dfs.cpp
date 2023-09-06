#include<bits/stdc++.h>
using namespace std;

int N,M;
vector<vector<int>> adj;
vector<bool> visited;

void dfs(int s){
    //process s;
    for(auto u:adj[s]){
        if(!visited[u]){
            visited[u]=true;
            dfs(u);
        }
    }
}

int main(){
    cin>>N>>M;
    int c=0,a,b;
    adj.resize(N+1);
    visited.resize(N+1,false);
    for(int i=0;i<M;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=0;i<N;i++){
        if(!visited[i]){
            visited[i]=true;
            dfs(i);
            c++;
        }
    }
    cout<<c;
}
