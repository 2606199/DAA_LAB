#include<iostream>
using namespace std;
void swap(int *p,int *q){
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
void maxheapify(int a[],int n,int i){
    int c1=2*i,c2=2*i+1;
    int largest=i;
    while(c1<=n && a[c1]>a[largest])
        largest=c1;
    while(c2<=n && a[c2]>a[largest])
        largest=c2;
    if(largest!=i)
    {
        swap(&a[largest],&a[i]);
        maxheapify(a,n,largest);
    }
}
void heapsort(int a[],int n){
    for(int i=n/2;i>=0;i--){
        maxheapify(a,n,i);
    }

    for(int i=n;i>=0;i--){
        swap(&a[0],&a[i]);
        maxheapify(a,i-1,0);
    }
}
int main(){
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    heapsort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}