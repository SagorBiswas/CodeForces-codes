//http://codeforces.com/problemset/problem/903/A

#include<iostream>
using namespace std;

int main(){
    int t,n,l,k;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        l = n/3; k = n%3;
        if(l>=2*k) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
