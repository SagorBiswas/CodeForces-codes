// https://codeforces.com/contest/112/problem/A

#include<stdio.h>
#include<string.h>

int main()
{
	char a[101];
	char b[101];
	int ka,kb,i;

	gets(a);
	gets(b);

	ka=strlen(a);
	kb=strlen(b);

	for(i=0;i<ka;i++){
		if(a[i]>='A' && a[i]<='Z')a[i]=a[i]-'A'+'a';
	}
	for(i=0;i<kb;i++){
		if(b[i]>='A' && b[i]<='Z')b[i]=b[i]-'A'+'a';
	}

	for(i=0;i<ka;i++){
		if(a[i]!=b[i]){
			if(a[i]>b[i])printf("%d",1);
			else printf("%d",-1);
			return 0;
		}
	}
	printf("%d",0);
}
