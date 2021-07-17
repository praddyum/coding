//Write a C program to reverse an array in groups of given size.

#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[8]={1,2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]); 
    int gs=3;

    for(int i=0;i<size;i++){
        cout<<arr[i];
    }   
    cout<<endl;
    for(int i=0;i<size;i+=gs){

        int start=i;
        int end=min(i+gs-1,size-1);
        int mid=(start+end)/2;
        while(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i];
    }


    return 0;
}