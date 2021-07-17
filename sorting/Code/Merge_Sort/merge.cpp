#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int left,int mid,int right){
    
    //Size of two subarrays
    int arr1=mid-left+1;
    int arr2=right-mid;

    //DMA for two arrays
    int *larr= new int[arr1];
    int *rarr= new int[arr2];

    //Copying the elements to the new subarray
    for(int i=0;i<arr1;i++)
        larr[i]=a[left+i];

    for(int i=0;i<arr2;i++)
        rarr[i]=a[mid+1+i];

    //initialize index for merging
    int i=0;
    int j=0;
    int k=left;

    //Compare two subarray and copy the smaller one
    while(i<arr1 && j<arr2){
        if(larr[i] <= rarr[j]){
            a[k]=larr[i];
            i++;
        }
        else{
            a[k]=rarr[j];
            j++;
        }
        k++;
    }

    //If any subarray still left
    while(i<arr1){
        a[k]=larr[i];
        k++;i++;
    }
    
    //If any subarray still left
    while(j<arr2){
        a[k]=rarr[j];
        k++;j++;
    }

}


void mergesort(int a[],int begin,int end){
    if(end>begin){
        int mid= begin+(end-begin)/2;
        mergesort(a,begin,mid);
        mergesort(a,mid+1,end);
        merge(a,begin,mid,end);
    }
}

int main(){

    int a[10]={3,2,6,9,1,5,4,7,8,7};
    int size=sizeof(a)/sizeof(a[0]);
    mergesort(a,0,size-1);

    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}