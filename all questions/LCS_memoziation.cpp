#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
    return a>b? a : b;
}
int LCS(string s1,string s2,int l1,int l2){
    int sol[l1+1][l2+1];
    int i,j;
    for(i=0;i<l1+1;i++){
        for(j=0;j<l2+1;j++)
        {
            if(i==0 || j==0) sol[i][j]=0;
            else if(s1[i]==s2[j]) sol[i][j]=1+sol[i-1][j-1];
            else sol[i][j]=max(sol[i-1][j],sol[i][j-1]);
        }
    }
    return sol[l1][l2];
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int l1=s1.length();
    int l2=s2.length();
    cout<<LCS(s1,s2,l1,l2);
}