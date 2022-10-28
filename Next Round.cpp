// https://codeforces.com/contest/158/problem/A

#include<stdio.h>
main ()
{
	int n,k,i,c=0;
	scanf("%d%d",&n,&k);
	int fk[n];
	for(i=0;i<n;i++)scanf("%d",&fk[i]);

	for(i=0;i<n;i++){
		if(fk[i]>=fk[k-1] && fk[i]>0)c++;
	}
	printf("%d",c);

}

