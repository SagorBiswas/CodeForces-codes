//https://codeforces.com/contest/1/problem/A

#include<stdio.h>

main ()
{
	long long m,n,a,p1,p2;
	double k1,k2;
	scanf("%I64d%I64d%I64d",&m,&n,&a);

	p1=(m%a)?(m/a+1):(m/a);
	p2=(n%a)?(n/a+1):(n/a);

	long long t=p1*p2;

	printf("%I64d",t);
}
