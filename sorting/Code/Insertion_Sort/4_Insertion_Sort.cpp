#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={1,9,2,8,3,8,4,7,5,6};
    int i,j,val;

    for(i=1;i<10;i++){
        val=arr[i];
        j=i;
        while(arr[j-1]>val && j>=1){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=val;

    }

    for(i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}