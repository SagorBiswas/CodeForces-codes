//http://codeforces.com/problemset/problem/719/A
#include<stdio.h>

int main()
{
	int n,i,j;
	scanf("%d",&n);

	int a[n];
	for(i=0;i<n;i++)scanf("%d",&a[i]);

	if(n<2){
		if (a[0]==15)printf("DOWN");
		else if(a[0]==0)printf("UP");
		else printf("%d",-1);
	}
	else if ((a[n-2]<a[n-1])&&(a[n-1] !=15))printf("UP");
	else if(a[n-1] !=0)printf("DOWN");
	else printf("UP");
}
