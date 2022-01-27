/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(i<j){
                swap(a[i][j],a[j][i]);
            }
        }
    }
   
   for(int i=0;i<4;i++){
       for(int j=0;j<2;j++)
       {
           swap(a[j][i],a[3-j][i]);
       }
   }
   
   
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
