// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int dp[100][100];
int lis(int a[],int n,int indx,int prev_indx){
    if(indx==n)
        return 0;
    if(dp[indx][prev_indx+1]!=-1)
        return dp[indx][prev_indx+1];
    int len=lis(a,n,indx+1,prev_indx);
    if(prev_indx==-1 || a[indx]>a[prev_indx])
       len= max(len,1+lis(a,n,indx+1,indx));
    dp[indx][prev_indx+1]=len;
     return dp[indx][prev_indx+1];
}
int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
// vector<vector<int>> dp(n,vector<int>(n+1,-1));
memset(dp,-1,sizeof(dp));
 cout<<"Length of longest increasing subsequence: "<<lis(a,n,0,-1);

    return 0;
}
