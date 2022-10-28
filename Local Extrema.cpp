//http://codeforces.com/problemset/problem/888/A

#include<iostream>
using namespace std ;

int main()
{
    int n, prev, mid, cur, count = 0;
    cin>>n;
    cin>>prev>>mid;
    for(int i=2; i<n; i++){
        cin>>cur;
        if(mid>prev && mid>cur) count++;
        if(mid<prev && mid<cur) count++;
        prev = mid;
        mid = cur ;
    }
    cout<<count ;

    return 0 ;
}
