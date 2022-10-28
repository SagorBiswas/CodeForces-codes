//http://codeforces.com/problemset/problem/131/A
#include<stdio.h>
#include<string.h>

int main()
{
	int n,m,i,j,k,l=1;
	char a[101];
	gets(a);
	n=strlen(a);

	if(n>1){
		for(i=1;i<n;i++){
			if(!(a[i]>='A' && a[i]<='Z'))l=0;
		}
	}

	if(l){
		if(a[0]>='a' && a[0]<='z')a[0]=a[0]-'a'+'A';
		else a[0]=a[0]-'A'+'a';
		for(i=1;i<n;i++){
			if(a[i]>='A' && a[i]<='Z')a[i]=a[i]-'A'+'a';
		}
	}
	for(i=0;i<n;i++)printf("%c",a[i]);
}
