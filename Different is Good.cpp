// https://codeforces.com/contest/672/problem/B

#include<stdio.h>
#include<string.h>

int main()
{
	int n,i,j,k=0,c=0;
	scanf("%d",&n);
	char ab[n];
	int alpha[26]={0};

	for(i=0;i<n;i++)scanf(" %c",&ab[i]);
	//for(i=0;i<n;i++)printf("%c",ab[i]);

	for(i=0;i<n;i++){
		j=ab[i]-'a';
		//printf("\n%d",j);
		alpha[j]++;
	}

	
	if(n>26){
			printf("%d",-1);
			return 0;
	}
	else{
		for(i=0;i<26;i++){
			if(alpha[i]>1)c=c+alpha[i]-1;
			//printf("\n==>%d",alpha[i]);
		}
		printf("%d",c);
	}
}

