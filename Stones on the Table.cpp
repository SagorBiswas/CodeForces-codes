//http://codeforces.com/problemset/problem/266/A
#include<stdio.h>
#include<string.h>

int main ()
{
	int n,m,i,c=0;
	char a[51];
	scanf("%d",&n);

	for(i=0;i<n;i++)scanf(" %c",&a[i]);
	a[n]='\0';
	for(i=1;i<n;i++){
		if(a[i]==a[i-1])c++;
	}
	printf("%d",c);
}
