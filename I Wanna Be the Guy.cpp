//http://codeforces.com/problemset/problem/469/A
#include<iostream>

using namespace std ;

int main(){

    int n,m,tmp ;

    cin>>n>>m;
    int arr[n];
    for(int i=0; i<n; i++)arr[i] = 0;

    for(int i=0; i<m; i++){
        cin>>tmp ;
        arr[tmp-1] = 1 ;
    }
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>tmp ;
        arr[tmp-1] = 1 ;
    }

    for(int i=0; i<n; i++)
    if(arr[i]==0){
        cout<<"Oh, my keyboard!";
        return 0;
    }
    cout<<"I become the guy.";

    return 0;
}
