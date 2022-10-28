//https://codeforces.com/contest/282/problem/A

#include<stdio.h>

main ()
{
	int x=0,n,i,j;
	char p[3];
	scanf("%d",&n);

	for(j=0;j<n;j++){
		for(i=0;i<3;i++)scanf(" %c",&p[i]);
		if(p[1]=='+')x++;
		else if(p[1]=='-')x--;

	}
	printf("%d",x);
}
