#include<bits/stdc++.h>
using namespace std;

int binaryser(int a[],int ele,int l,int r){
    int mid=l+(r-l)/2;
    if(l>r)
        return -1;

    if(a[mid]==ele)
        return mid;

    else if(a[mid]<ele)
        return binaryser(a,ele,mid+1,r);
    else    
        return binaryser(a,ele,l,mid-1);
    return -1;
    

}


int main(){
int a[10]={1,2,3,4,5,6,8,9,10};
    int ele=2;
    int size=sizeof(a)/sizeof(a[0]);

    int res=binaryser(a,ele,0,size-1);

    cout<<res;

    return 0;
}