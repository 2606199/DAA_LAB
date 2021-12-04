#include<bits/stdc++.h>
using namespace std;
int MatrixChainOrder(int p[], int i, int j){
    if(i==j) return 0;
    int k,count;
    int min=INT_MAX;
    for(k=i;k<j;k++){
        count=(MatrixChainOrder(p,i,k)+MatrixChainOrder(p,k+1,j))+p[i-1]*p[k]*p[j];
        if(count<min)
            min=count;
    }
    return min;
}
int main(){
    cout<<"Enter number of matrices"<<endl;
    int n;
    cin>>n;
    cout<<"Enter size of rows of all matrices"<<endl;
    int p[n+1];
    for(int i=0;i<=n;i++){
        cin>>p[i];
    }
    cout<<MatrixChainOrder(p, 1, n );
}