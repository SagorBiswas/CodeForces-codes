//http://codeforces.com/problemset/problem/888/B

#include<iostream>
using namespace std ;
int min(int a, int b){
    if(a>b) return b ;
    else return a ;
}

int main()
{
    int n, l, r, u, d ;
    char tmp ;
    l = r = d = u = 0;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>tmp ;
        if(tmp=='U')u++;
        if(tmp=='L')l++;
        if(tmp=='D')d++;
        if(tmp=='R')r++;
    }

    cout<<2*(min(l,r)+min(u,d));

    return 0;
}
