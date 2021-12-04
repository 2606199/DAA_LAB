#include<bits/stdc++.h>
using namespace std;
int main(){
vector<pair<int,int>> activity;
int n,start,end;
cout<<"Enter number of activites: "<<endl;
cin>>n;
cout<<"Enter start and end time: "<<endl;
for(int i=0;i<n;i++){
    cin>>start>>end;
    activity.push_back(make_pair(end,start));

}
sort(activity.begin(),activity.end());
int count =0;
int i=0;
cout<<"Selected actvities are: "<<endl;
cout<<" "<<i;
count++;
for(int j=1;j<n;j++){
    if(activity[j].second>=activity[i].first){
        cout<<" "<<j;
        i=j;
        count++;
    }
}
cout<<"Number of activites: "<<count;

}