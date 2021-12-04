#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>> job;
    int n,profit,deadline;
    cout<<"Enter number of jobs: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>profit>>deadline;
        job.push_back(make_pair(profit,deadline));
        
    }
    sort(job.begin(),job.end(),greater<pair<int,int>>());
    int maxEndTime=0;
    for(int i=0;i<n;i++){
        if(job[i].second>maxEndTime)
            maxEndTime=job[i].second;
    }
    int fill[maxEndTime];
    int count=0,TotalMaxProfit=0;
    for(int i=0;i<maxEndTime;i++)
        fill[i]=-1;
    for(int i=0;i<n;i++){
        int j=job[i].second-1;
        while (j>=0 && fill[j]!=-1 )
        {
            j--;
        }
        if(j>=0 && fill[j]==-1)
            {
                fill[j]=i;
                count++; 
                TotalMaxProfit+=job[i].first;
            }
        
    }
    cout<<"Number of job selected: "<<count<<endl<<"Total maximum profit is : "<<TotalMaxProfit;
}