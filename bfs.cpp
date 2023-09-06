#include<bits/stdc++.h>
using namespace std;

int N,M,A,B=2;
vector<vector<int>> adj;
vector<bool> visited;
bool found=false;
queue<int> q;

int main(){
    int a,b,s;
    cin>>N>>M;
    adj.resize(N);
    visited.resize(N);
    for(int i=0;i<M;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int distance[N];
    visited[0]=1;
    distance[0]=0;
    q.push(0);
    while(!q.empty()){
        s=q.front();
        //process s;
        if(s==B){cout<<distance[s];break;}
        q.pop();
        for(auto u:adj[s]){
            if(!visited[u]){
                visited[u]=1;
                distance[u]=distance[s]+1;
                q.push(u);
            }
        }
    }
}
