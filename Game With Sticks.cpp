//http://codeforces.com/problemset/problem/451/A

#include<iostream>

using namespace std ;

int main(){

    int m,n,mini ;

    cin>>m>>n ;

    mini = m>n?n:m;
    //cout<<mini;

    if(mini%2)cout<<"Akshat";
    else cout<<"Malvika";

    return 0;
}
