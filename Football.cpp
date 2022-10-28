//https://codeforces.com/contest/96/problem/A

#include<stdio.h>
#include<conio.h>

int main()
{
	char p[101];
	int i,j,k,c=0;

	gets(p);
	k=strlen(p);
	j=p[0];
	for(i=0;i<k;i++){
		if(j==p[i])c++;
		else{
			j=p[i];
			c=1;
		}
		if(c==7){
			printf("YES");
			return 0;

		}
	}
	printf("NO");
}
