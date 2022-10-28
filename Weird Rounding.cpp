//http://codeforces.com/problemset/problem/779/B

#include<iostream>
#include<cstring>

using namespace std ;

int main()
{
    char n[11];
    int k,l,count=0,min=0;
    cin>>n>>k ;
    l = strlen(n);

    for(int i=0;i<l;i++){
        if(n[i]=='0')min++;
        else break ;
    }

    k=k+min;

    for(int i=l-1;i>=0;i--){
        if(n[i]=='0')k--;
        else count++;
        if(k==0)break;
    }
    count-=min;
    if(k==0)cout<<count;
    else cout<<l-1;

    return 0;
}
