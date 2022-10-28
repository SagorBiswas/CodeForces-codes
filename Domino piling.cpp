//https://codeforces.com/contest/50/problem/A

#include<stdio.h>

main()
{
	int m,n,c;
	scanf("%d%d",&m,&n);

	if(!(m%2))c=(m/2)*n;
	else if(!(n%2))c=(n/2)*m;
	else c=n*(m-1)/2+(n-1)/2;
	printf("%d",c);
}
