#include<bits/stdc++.h>
using namespace std;
int find(int u,int *parent){
    if(parent[u]<0) return u;
    return find(parent[u],parent);
}
void unionbywieght(int u,int v,int *parent){
    int pu=find(u,parent),pv=find(v,parent);
    if(pu!=pv)
    {
        if(parent[pu]<parent[pv]){
            parent[pu]+=parent[pv];
            parent[pv]=pu;
        }
        else{
            parent[pv]+=parent[pu];
            parent[pu]=pv;
        }
    }
}
int main(){
    vector<int>adj[100];
    int visited[100];
    int n,m,u,v;
    cout<<"Enter number of vertices and edges: ";
    cin>>n>>m;
    cout<<"Enter the edges(u and v): "<<endl;
    for(int i=0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        visited[i]=-1;
    }
    unionbywieght(1,2,visited);
    unionbywieght(3,4,visited);
    unionbywieght(5,6,visited);
    unionbywieght(7,8,visited);
    unionbywieght(2,4,visited);
    unionbywieght(2,5,visited);
    unionbywieght(1,3,visited);
    unionbywieght(6,8,visited);
    unionbywieght(5,7,visited);
}