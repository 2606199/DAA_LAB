#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> adj[100];
    int n,m,u,v;
    cout<<"Enter number of vertices and edges: ";
    cin>>n>>m;
    cout<<"Enter the edges(u and v): "<<endl;
    for(int i=0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1;i<=n;i++){
        for(auto it: adj[i])
            cout<<i<<"->"<<it<<endl;
    }
}