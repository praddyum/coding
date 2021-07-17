//1.Write a C program to find third largest element in an array.

#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c;
    int arr[10]={4,7,2,5,3,8,0,5,2,7};
    a=b=c=INT_MIN;

    for(int i=0;i<10;i++){
        if(arr[i]>a){
            c=b;
            b=a;
            a=arr[i];
        }
        else if(arr[i]>b && arr[i]!=a){
            c=b;
            b=arr[i];
        }
        else if(arr[i]>c && arr[i]!=a && arr[i]!=b){
            c=arr[i];
        }
    }

    cout<<c;
    return 0;
}