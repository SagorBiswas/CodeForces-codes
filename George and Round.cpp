//http://codeforces.com/problemset/problem/387/B

#include<iostream>
using namespace std ;

int main()
{
    int m,n,i,j;
    cin>>n>>m ;
    int a[n], b[m];
    for(i=0; i<n; i++)cin>>a[i];
    for(j=0; j<m; j++)cin>>b[j];

    bool ac[n];
    for(int k=0; k<n; k++) ac[k] = false;
    i = 0;
    j = 0;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            ac[i] = true ;
            i++;
            j++;
        }
        if(a[i]>b[j]) j++;
    }

    int counter = 0;
    for(int k=0; k<n; k++){
        if(ac[k]==false)counter++ ;
    }
    cout<<counter ;

    return 0;
}
