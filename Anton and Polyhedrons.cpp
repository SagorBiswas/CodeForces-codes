https://codeforces.com/contest/785/problem/A

#include<iostream>
#include<string>
using namespace std ;

int main()
{
    char tmp[15];
    int n,j,k=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tmp;
        switch(tmp[0]){
            case 'T': k+=4;
                    break ;
            case 'C': k+=6;
                    break ;
            case 'O': k+=8;
                    break ;
            case 'D': k+=12;
                    break ;
            case 'I': k+=20;
                    break ;
            default : break;
        }
    }
    cout<<k;

    return 0;
}
