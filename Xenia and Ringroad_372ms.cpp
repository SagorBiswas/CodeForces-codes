//http://codeforces.com/problemset/problem/339/B
#include<iostream>
using namespace std ;

int abs(int n){
    if(n<0) return -n ;
    else return n ;
}

int main()
{
    int m, n, tmp, prev, t ;
    long long sum ;
    cin>>n>>m ;

    prev = 1 ;  sum = 0 ;
    for(int i=0; i<m; i=i+1){
        cin>>tmp;
        t = abs(tmp-prev);
        if(prev>tmp) sum += (n-t) ;
        else sum += t ;
            //sum+=(tmp-prev+n)%n ;
        prev = tmp ;
    }

    cout<<sum ;

    return 0;
}



