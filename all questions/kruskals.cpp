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
    vector<pair<int,pair<int,int>>> kr;
    cout<<"Enter vertices and edges: "<<endl;
    int n,m;
    cin>>n>>m;
    cout<<"Enter weight,source,destination: "<<endl;
    int w1,s1,d1;
    for(int i=0;i<m;i++){
        cin>>w1>>s1>>d1;
        kr.push_back(make_pair(w1,make_pair(s1,d1)));
    }
    sort(kr.begin(),kr.end());
    int cost=0;
    int parent[10];
    for(int i=0;i<n;i++)
        parent[i]=-1;
    
    int w,s,d;
    for(auto i: kr)
    {
        w=i.first;
        s=i.second.first;
        d=i.second.second;
        if(find(s,parent)==find(d,parent))
            continue;
        else{
            cout<<"\n"<<s<<"->"<<d<<endl;
            unionbywieght(s,d,parent);
            cost+=w;
        }
        
    }
    cout<<"Minimum weight: "<<cost;
     
 }