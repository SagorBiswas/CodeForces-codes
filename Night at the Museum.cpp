//https://codeforces.com/contest/731/problem/A

#include<stdio.h>
#include<string.h>

int abs(int n){
	if(n<0)n=-n;
	return n;
}

int main()
{
	int count=0,n,i,k;
	char ch[100];
	char c1,c2;
	c2='a';
	gets(ch);
	n=strlen(ch);
	c1=ch[0];
	for(i=0;i<n;i++){
		c1=ch[i];
		k=abs(c1-c2);
		if(k>13)k=26-k;
		count+=k;
		//printf("%d\n",count);
		c2=ch[i];
	}
	printf("%d",count);

	return 0;
}
