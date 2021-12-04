#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
    return a>b? a : b;
}
int knapsack(int wt[],int val[],int n,int k){
    int sol[n+1][k+1];
    int i,j;
    for(i=0;i<n+1;i++){
        for(j=0;j<k+1;j++){
            if(i==0 || j==0)
                sol[i][j]=0;
            else if(wt[i-1]>j)
                sol[i][j]=sol[i-1][j];
            else{
                sol[i][j]=max(sol[i-1][j],val[i-1]+sol[i-1][j-wt[i-1]]);
            }
        }
    }
    return sol[n][k];

}
 int main(){
    cout<<"Enter number of  objects"<<endl;
    int n;
    cin>>n;
    cout<<"Enter weights and values"<<endl;
    int wt[n],val[n];
    for (int i = 0; i < n; i++)
    {
        cin>>wt[i]>>val[i];
    }
    cout<<"Enter knapsack capacity"<<endl;
    int k;
    cin>>k;
    cout<<knapsack(wt,val,n,k);
    

 }