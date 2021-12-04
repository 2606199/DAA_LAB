#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>adj[100];
    int n,m,u,v;
    cout<<"Enter number of vertices and edges: "<<endl;
    cin>>n>>m;
    bool visited[100];
    for(int i=1;i<=n;i++){
        visited[i]=false;
    }
    cout<<"Enter edges(u and v): "<<endl;
     for(int i=1;i<=m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    queue<int> q;
    q.push(1);
    visited[1]=true;
    //exploration
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<"\n"<<node<<endl;
        vector<int> :: iterator it;
        //traverse of node
        for(it=adj[node].begin();it!=adj[node].end();it++){
            if(!visited[*it]){
                visited[*it]=true;
                q.push(*it);
            }
        }
    }
}