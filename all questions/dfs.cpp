#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
int visited[100];
void dfs(int node){
    visited[node]=1;
    cout<<"\n"<<node<<endl;
    vector<int>::iterator it;
    for(it=adj[node].begin();it!=adj[node].end();it++){
        if(!visited[*it])
         {   dfs(*it); }
    }
}
int main(){
    
    int n,m,u,v;
    cout<<"Enter number of vertices and edges: ";
    cin>>n>>m;
    cout<<"Enter the edges(u and v): "<<endl;
    for(int i=0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
}