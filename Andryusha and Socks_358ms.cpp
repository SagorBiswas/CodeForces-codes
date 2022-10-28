//http://codeforces.com/problemset/problem/782/A

#include<iostream>
using namespace std ;

int main()
{
    int n,tmp,i;
    cin>>n;
    int ar[n];
    int mx=0,t=0;
    for(int i=0; i<n; i++)ar[i] = -1 ;
    for(int i=0 ; i<2*n ; i++){
        cin>>tmp;
        if(ar[tmp-1]==-1) {
            ar[tmp-1]=1;
            t++;
            //cout<<"Inside 1st if t= "<<t<<"\n";
        }
        else if(ar[tmp-1]==1){
            t--;
        //cout<<"INside 2nd if t= "<<t<<"\n";
        }

        if(t>mx) {
            mx=t;
        //cout<<"Inside 3rd if";
        }
    }

    cout<<mx;

    return 0;
}
