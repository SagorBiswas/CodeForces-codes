//http://codeforces.com/problemset/problem/721/B
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std ;

int main()
{
    int n,k;
    cin>>n>>k ;
    char str[n][101];
    char pass[101];
    int mn,id,t ;
    for(int i=0; i<n; i++)cin>>str[i];//getline(cin,str[i]);
    cin>>pass;//getline(cin,pass);
    int pass_length = strlen(pass);
    int arr[n];
    for(int i=0; i<n; i++)arr[i] = strlen(str[i]);

    sort(arr,arr+n);

    int mnt = -1,mxt = -1,time = 0;
    bool flmn = true ;
    for(int i=0; i<n; i++){
        time++;
        if(pass_length==arr[i] && flmn){
            mnt = time ;
            flmn = false ;
        }
        if(i<n-1){
            if(arr[i+1]>pass_length)break ;
            if((i+1)%k==0)time+=5 ;
        }
    }
    mxt = time ;
    //if(k==1 && n==1)mxt-=5;

    cout<<mnt<<" "<<mxt;
    return 0;
}

 /*for(int i=0; i<n; i++){
        mn = strlen(str[i]);
        id = i ;
        for(int j=i; j<n; j++){
            t = strlen(str[j]);
            if(t<mn){
                mn = t ;
                id = i ;
            }
        }
        strcpy(tmp,str[id]);
        strcpy(str[id],str[i]);
        strcpy(str[i],tmp) ;
    }*/
    //for(int i=0; i<n; i++)cout<<str[i]<<"\n";
