//https://codeforces.com/contest/71/problem/A

#include<stdio.h>
#include<string.h>

main()
{
	int t;
	scanf("%d",&t);
	t=t+1;
	char fuck[100];
	while(t--){
		gets(fuck);
		int k=strlen(fuck);
		if(k>10)printf("%c%d%c\n",fuck[0],k-2,fuck[k-1]);
		else puts(fuck);
	}
}
