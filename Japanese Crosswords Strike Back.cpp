//http://codeforces.com/problemset/problem/884/B
#include<iostream>
using namespace std ;

int main()
{
    long long x;
    int n,tmp;
    cin>>n>>x;
    //int arr[n];
    long long sum = 0;
    for(int i=0; i<n; i++){
        cin>>tmp;
        sum+=tmp;
    }
    if(x == (sum+n-1))cout<<"YES";
    else cout<<"NO";

    return 0;
}
