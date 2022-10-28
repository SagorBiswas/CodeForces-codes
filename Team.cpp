//https://codeforces.com/contest/231/problem/A

#include<stdio.h>
#include<string.h>

main ()
{
	int n,i,j,c=0,s=0;
	scanf("%d",&n);
	int a[n][3];
	for(i=0;i<n;i++){
		for(j=0;j<3;j++)scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			s=s+a[i][j];
		}
		if(s>1)c++;
		s=0;
	}
	printf("%d",c);
}
