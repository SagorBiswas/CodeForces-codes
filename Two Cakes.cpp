// https://codeforces.com/contest/911/problem/B


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c;
    d=(b>c)?c:b;
    if(d>((b+c)/a)){d=((b+c)/a);}
    int e,f;
     e=b/d;
     f=c/d;
    while((e+f)<a)
    {
       d=d-1;
        e=b/d;
        f=c/d;
    }
    cout<<d;
}
