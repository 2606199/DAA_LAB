#include<bits/stdc++.h>
using namespace std;
bool subsetsum(int set[],int n,int sum){
    bool subset[n+1][sum+1];
    int i,j;
    for(i=0;i<=n;i++)
        subset[i][0]=true;
    for(j=1;j<=sum;j++)
        subset[0][j]=false;
    for(i=1;i<=n;i++){
        for(j=1;j<=sum;j++)
        {
            if(set[i-1]>j) subset[i][j]=subset[i-1][j];
            subset[i][j]=subset[i-1][j] || subset[i-1][j-set[i-1]];
        }
    }
    return subset[n][sum];
}
int main(){
    cout<<"Enter number of elements"<<endl;
    int n;
    cin>>n;
    int set[n];
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>set[i];
    }
    cout<<"Enter sum"<<endl;
    int sum;
    cin>>sum;
    if(subsetsum(set,n,sum))
        cout<<"found subset";
    else
        cout<<"subset is not found";
}