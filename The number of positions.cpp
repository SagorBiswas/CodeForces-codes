//http://codeforces.com/problemset/problem/124/A
#include<stdio.h>

int main()
{
	int n,a,b,i,j,k;

	scanf("%d%d%d",&n,&a,&b);
	int sp1 = n-b;
    int sp2 = a+1;
    int sp = sp1>sp2?sp1:sp2;
    printf("%d",n-sp+1);

    return 0;
}

