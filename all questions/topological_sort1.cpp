#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    vector<int> adj[100];
    cout<<"Enter number of vertices and edges: "<<endl;
    cin>>n>>m;
    cout<<"Enter edges(u and v)"<<endl;
    int u,v;
    for(int i=0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
    }
    vector<int> in(n,0);
    vector<int>ans;
    queue<int> q;
    vector<int> :: iterator it;
    for(int i=0;i<n;i++){
      for(auto x: adj[i]){
          in[x]++;
      }
    }
    for(int i=0;i<n;i++){
        if(in[i]==0){
            q.push(i);
        }
    }
    while (!q.empty())
    {
        int node=q.front();
        q.pop();
        ans.push_back(node);
      for(auto x: adj[node]){
          in[x]--;
          if(in[x]==0) q.push(x);
      }
    }
     for(auto i=ans.begin();i!=ans.end();i++){
        cout<<"\n"<<*i<<endl;
    }
    

}