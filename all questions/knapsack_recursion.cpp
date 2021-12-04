#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
    return a>b? a :b;
}
int knapsack(int wt[],int val[],int n,int k){
    if(n==0 || k==0) return 0;
    if(wt[n-1]>k) return knapsack(wt,val,n-1,k);
    else{
        return max(knapsack(wt,val,n-1,k),val[n-1]+knapsack(wt,val,n-1,k-wt[n-1]));
    }

}
 int main(){
     cout<<"Enter number of objects: "<<endl;
     int n;
     cin>>n;
     cout<<"Enter weight and value of objects"<<endl;
     int wt[n],val[n];
     for(int i=0;i<n;i++){
         cin>>wt[i]>>val[i];
     }
     cout<<"Enter size of knapsack"<<endl;
     int k;
     cin>>k;
     cout<<knapsack(wt,val,n,k);
 }