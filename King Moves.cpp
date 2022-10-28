//http://codeforces.com/problemset/problem/710/A

#include<stdio.h>

main()
{
	int n,m,i=0,j=0;
	char ch;
	scanf("%c%d",&ch,&m);

	n=8;
	if(m==1 || m==8){
		n=n-3;
		i=1;
	}
	if(ch=='a' || ch=='h'){
		n=n-3;
		j=1;
	}
	if(i==1 && j==1)n++;
	printf("%d",n);
}
