//http://codeforces.com/problemset/problem/782/A

#include<stdio.h>

int main()
{
    int n,l,i;
    scanf("%d",&n);
    int ar[n];
    int mx=0,t=0;
    for(i=0; i<n; i++)ar[i] = -1 ;
    for(i=0 ; i<2*n ; i++){
        scanf("%d",&l);
        if(ar[l-1]==-1) {
            ar[l-1]=1;
            t++;
        }
        else if(ar[l-1]==1)t--;

        if(t>mx) mx=t;
    }

    printf("%d",mx);

    return 0;
}
