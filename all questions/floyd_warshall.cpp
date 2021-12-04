#include<bits/stdc++.h>
using namespace std;
#define V 4
#define INF 999
void floydwarshall(int graph[][V]){
    int dist[V][V];
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            dist[i][j]=graph[i][j];
        }
    }
    for(int k=0;k<V;k++){
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(dist[i][j]>dist[i][k]+dist[k][j])
                dist[i][j]=dist[i][k]+dist[k][j];
            }
        }
    }

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INF)
                cout << "INF"
                     << "     ";
            else
                cout << dist[i][j] << "     ";
        }
        cout << endl;
    }
}
int main(){
    int graph[V][V]={   {0,5,INF,INF},
                        {50,0,15,5},
                        {30,INF,0,15},
                        {15,INF,5,0}
    
                    };
    floydwarshall(graph);
}