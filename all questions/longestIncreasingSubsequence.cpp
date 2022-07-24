// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int lis(int a[],int n,int indx,int prev_indx){
    if(indx==n)
        return 0;
    int len=lis(a,n,indx+1,prev_indx);
    if(prev_indx==-1 || a[indx]>a[prev_indx])
       len= max(len,1+lis(a,n,indx+1,indx));
     return len;
}
int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
 cout<<"Length of longest increasing subsequence: "<<lis(a,n,0,-1);

    return 0;
}
