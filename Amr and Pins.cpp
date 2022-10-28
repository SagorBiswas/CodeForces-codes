//http://codeforces.com/problemset/problem/507/B
#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std ;

int main()
{
    int r;
    long long x,y,x1,y1;
    cin>>r>>x>>y>>x1>>y1;
    int task = 0;
    r = r*2 ;
    long double dist = sqrt(pow(x1-x,2)+pow(y1-y,2));
    long long div = dist/r;
    task += div ;
    if((div*r)<dist)
        task++;
    cout<<task ;

    return 0;
}
