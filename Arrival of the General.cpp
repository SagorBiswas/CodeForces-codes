//http://codeforces.com/problemset/problem/144/A
#include<iostream>
using namespace std ;

int main(){
    int n,mn,mx,mxid,mnid,tmp;
    cin>>n ;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    mx = mn = arr[0];
    mxid = mnid = 0 ;
    for(int i=1; i<n; i++){
        if(arr[i]>mx){
            mx = arr[i]; mxid = i;
        }
        if(arr[i]<=mn){
            mn = arr[i]; mnid = i;
        }
    }

    if(mnid<mxid)mxid--;
    cout<<mxid+(n-1-mnid);
    return 0;
}
