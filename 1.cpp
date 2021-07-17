//https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5,6,7,8};
    int l=0,r=7;

    while(l<r){
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
        r--;
    }

    for(int i=0;i<8;i++)
        cout<<arr[i];

}