//https://codeforces.com/contest/785/problem/B

#include<iostream>
#include<string>
using namespace std ;

int maxfind(int a[],int l){
    int mn = a[0];
    for(int i=1;i<l;i++){
        if(a[i]>mn)mn=a[i];
    }
    return mn;
}

int minfind(int a[],int l){
    int mn = a[0];
    for(int i=1;i<l;i++){
        if(a[i]<mn)mn=a[i];
    }
    return mn;
}

int main()
{
    int n,m;
    int diff1 = 0, diff2 = 0;
    cin>>n;
    int cl[n],cr[n];
    for(int i=0; i<n; i++){
        cin>>cl[i]>>cr[i];
    }

    cin>>m;
    int pl[m],pr[m];
    for(int i=0;i<m;i++){
        cin>>pl[i]>>pr[i];
    }
    int lowcr = minfind(cr,n);
    int hipl = maxfind(pl,m);

    if(hipl>lowcr)diff1 = hipl - lowcr ;

    int lowpr = minfind(pr,m);
    int hicl = maxfind(cl,n);

    if(hicl>lowpr)diff2 = hicl - lowpr ;

    if(diff1>diff2)cout<<diff1;
    else cout<<diff2 ;

    return 0;
}
