#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of vertices and edges"<<endl;
    cin>>n>>m;
    int adj[100][100]={0};
    cout<<"Enter edges(u and v)"<<endl;
    int u,v;
    for(int i=0;i<m;i++){
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

}