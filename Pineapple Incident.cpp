//http://codeforces.com/problemset/problem/697/A
#include<iostream>
using namespace std ;

int main()
{
    long long t,s,x ,tmp ;
    cin>>t>>s>>x;
    tmp = t;
    bool flag = false ;
    if(t==x){
        tmp = x+1;
        flag = true;
    }
    while((tmp) <= x){
           // cout<<"inside while\n";
        tmp += s;
        if(tmp ==x || tmp+1==x){
            flag = true ;
            break ;
        }
    }
    if(!flag) cout<<"NO";
    else cout<<"YES";

    return 0;
}
