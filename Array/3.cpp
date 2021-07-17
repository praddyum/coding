//3.Write a C program to find maximum of all subarrays of size k.

#include<bits/stdc++.h>
using namespace std;

int findmax(int arr[],int s,int e){
    int max=arr[s];
    for(int k=s+1;k<e;k++){
        if(arr[k]>max)
            max=arr[k];
    }
    return max;
}

int main(){
    vector<int> result;
    int arr[8]={1,2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sg=3;

    for(int i=0;i<=size-sg;i++){
        int max=findmax(arr,i,i+sg);
        result.push_back(max);
    }

    for(auto &x:result){
        cout<<x<<" ";
    }

    return 0;
}