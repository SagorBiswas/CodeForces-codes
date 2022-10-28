//http://codeforces.com/problemset/problem/200/B
#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cin>>n ;
    double t, sum = 0 ;
    for(int i=0; i<n; i++){
        cin>>t;
        sum+=t;
    }
    cout<<sum/n ;
    return 0 ;
}
