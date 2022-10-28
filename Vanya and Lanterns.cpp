//http://codeforces.com/problemset/problem/492/B
#include <iostream>
#include <algorithm>
#include<cstdio>
using namespace std ;

int main()
{
    int n,l,tmp, mxd;
    cin>>n>>l;
    int arr[n+2];
    for(int i=1; i<=n; i++)cin>>arr[i];
    arr[0] = 0;
    arr[n+1] = l;
    sort(arr,arr+n+2);
    mxd = -1 ;
    for(int i=1; i<n+2; i++){
        tmp = arr[i]-arr[i-1];
        if(i==1 || i==n+1) tmp = tmp*2 ;
        if(tmp>mxd)mxd = tmp;
    }
    printf("%.9f" , mxd*1.0/2);

    //for(int i=0;i<n+2; i++)cout<<arr[i]<<"\t";

    return 0;
}
