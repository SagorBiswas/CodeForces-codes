// https://codeforces.com/contest/712/problem/A

#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);

    int a[n],b[n];

    for(i=0;i<n;i++)scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)b[i]=a[i]+a[i+1];
    b[n-1]=a[n-1];

    for(i=0;i<n;i++)printf("%d ",b[i]);
}
