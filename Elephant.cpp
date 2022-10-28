//http://codeforces.com/problemset/problem/617/A
#include<iostream>

using namespace std ;

int main(){

    int n,counter = 0;

    cin>>n;

    counter += n/5 ;    n = n%5 ;
    counter += n/4 ;    n = n%4 ;
    counter += n/3 ;    n = n%3 ;
    counter += n/2 ;    n = n%2 ;
    counter += n/1 ;

    cout<<counter;

    return 0;
}
