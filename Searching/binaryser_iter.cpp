#include<bits/stdc++.h>
using namespace std;

int binaryse(int a[],int ele,int l,int r){
    while(l<=r){
        int mid=l+(r-l)/2;
        if(a[mid]==ele)
            return mid;
        else if(a[mid]<ele)
            l=mid+1;
        else
            r=mid-1;
    }
    return -1;

}


int main(){
    int a[10]={1,2,3,4,5,6,8,9,10};
    int ele=11;
    int size=sizeof(a)/sizeof(a[0]);

    int res=binaryse(a,ele,0,size-1);

    cout<<res;

    return 0;
}
