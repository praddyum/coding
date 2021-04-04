#include<bits/stdc++.h>
using namespace std;

int main(){

    char arr[]="ababcd";
    char c='r';
    int n=5;
    int size=strlen(arr);
    int size2=size;
    int mid=size/2;
    size+=n;

    char *narr= new char[size];

    for(int i=0;i<mid;i++){
        narr[i]=arr[i];
    }
    for(int i=mid;i<mid+n;i++){
        narr[i]=c;
    }
    for(int i=mid,j=mid+n;i<size2;i++,j+=1){
        narr[j]=arr[i];
    }
    cout<<narr;

    return 0;
}