https://codeforces.com/contest/486/problem/A

#include<stdio.h>

int main()
{
	long long r,n;
	scanf("%I64d",&n);

	if(n%2){
		r=(n-1)/2;
		r = r-n;
	}
	else{
		r=n/2;
	}
	printf("%I64d",r);

	return 0;
}
