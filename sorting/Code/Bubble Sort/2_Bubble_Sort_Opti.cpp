#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[10]={1,7,3,9,2,6,4,7,5,8};
    int i,j,flag=1;

    for(i=0;i<10-1 && flag==1;i++){
        flag=0;
        for(j=0;j<10-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
    }

    for(i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}