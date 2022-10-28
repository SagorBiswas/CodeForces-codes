//http://codeforces.com/problemset/problem/133/A

#include<stdio.h>
#include<string.h>

int main()
{
	char ab[101];
	gets(ab);

	int i,j,n;
	n=strlen(ab);

	for(i=0;i<n;i++){
		if(ab[i]=='H' || ab[i]=='Q' || ab[i]=='9'){
			printf("YES");
			return;
		}
	}
	printf("NO");
	return;
}
