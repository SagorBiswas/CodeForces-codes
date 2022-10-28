//https://codeforces.com/contest/116/problem/A

#include<stdio.h>

int main()
{
	int n,m,i,j,k,mx;
	scanf("%d",&n);

	int a[n],b[n];
	for(i=0;i<n;i++)scanf("%d%d",&a[i],&b[i]);

	k=0;mx=0;
	for(i=0;i<n;i++){
		k=k-a[i]+b[i];
		if(k>mx)mx=k;
	}
	printf("%d",mx);
}
