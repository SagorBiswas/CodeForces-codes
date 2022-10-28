
// https://codeforces.com/contest/792/problem/A

#include<iostream>
#include <bits/stdc++.h>

using namespace std ;

int abs(int n){
    if(n<0)n=-n;
    //cout<<n<<endl;

    return n;
}

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)cin>>a[i];

    sort(a,a+n);
/*
    int idx,mx,tmp;

    for(int i=0;i<n;i++){
        idx=i;
        mx=a[idx];
        for(int j=0;j<n;j++){
            if(mx<a[j]){
                mx=a[j];
                idx=j;
            }
        }
        tmp=a[i];
        a[i]=a[idx];
        a[idx]=tmp;
    }   */

    //for(int i=0;i<n;i++)cout<<a[i];
    //cout<<endl;

    int c=1,tm=a[0]-a[1],mn;
    mn=abs(tm);

    for(int i=1;i<n-1;i++){
        tm=abs(a[i]-a[i+1]);
        if(tm==mn)c++;

        else if(tm<mn){
            mn=tm;
            c=1;
        }
    }

    cout<<mn<<" "<<c;

    return 0;
}
