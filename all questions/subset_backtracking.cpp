#include<bits/stdc++.h>
using namespace std;
bool subset(int set[],int n,int sum){
    if(sum==0) return true;
    if(n==0) return false;
    if(set[n-1]>sum){
        return subset(set,n-1,sum);
    }
        return subset(set,n-1,sum) || subset(set,n-1,sum-set[n-1]);
    
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
    if(subset(set,n,sum))
        cout<<"found subset";
    else
        cout<<"subset is not found";
}