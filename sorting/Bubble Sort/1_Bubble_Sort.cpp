#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int i,j;
    
    int a[10]={1,7,3,8,3,9,3,8,1,6};
   
    for(i=0;i<10-1;i++){
        for(j=0;j<10-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(i=0;i<10;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}