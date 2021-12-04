#include<bits/stdc++.h>
using namespace std;
#define V 9
int setminvertex(vector<int> & value,vector<bool> & processed){
    int min=INT_MAX;
    int vertex;
    for(int i=0;i<V;i++){
        if(processed[i]==false && value[i]<=min){
            min=value[i];
            vertex=i;
        }
    }
    return vertex;
}
void dijkstra(int graph[V][V]){
    int parent[V];
    vector<int> value(V,INT_MAX);
    vector<bool> processed(V,false);
    value[0]=0;
    for(int i=0;i<V-1;i++){
        int U=setminvertex(value,processed);
        processed[U]=true;
        for(int j=0;j<V;j++ ){
            /* 3 conditions to relax:-
			      1.Edge is present from U to j.
			      2.Vertex j is not included in shortest path graph
			      3.Edge weight is smaller than current edge weight
			*/
            if(graph[U][j]!=0 && processed[j]==false && value[U] != INT_MAX && value[U]+graph[U][j]<value[j]){
                value[j]=value[U]+graph[U][j];
            }
        }
    }
   cout<<"Vertex   Distance from Source"<<endl;
    for (int i = 0; i < V; i++)
       cout<<i<<"\t\t"<<value[i]<<endl;

    
}
 int main(){
	int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

	dijkstra(graph);	
	return 0;
 }