//https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5,16,3};
    int min,max; 
    min=max=arr[0];
    for(int i=1;i<7;i++){
        if(arr[i]<min)
            min=arr[i];
        if(arr[i]>max)
            max=arr[i];
    }
    cout<<"Min: "<<min<<" \tMax: "<<max;

    return 0;
}