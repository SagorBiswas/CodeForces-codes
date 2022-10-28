
//http://codeforces.com/problemset/problem/711/A

#include<stdio.h>
#include<string.h>

int main()
{
	int n,i,j,k,idx=0,m=-1;
	scanf("%d",&n);

	char p[n][5];
	for(i=0;i<n;i++){
		for(j=0;j<5;j++){
			scanf(" %c",&p[i][j]);
		}
	}

	for(i=0;i<n;i++){
		if(p[i][0]==p[i][1] && p[i][0]=='O'){
			printf("YES\n");
			m=i;idx=0;
			break;
		}
		else if(p[i][3]==p[i][4] && p[i][3]=='O'){
			printf("YES\n");
			m=i;idx=3;
			break;
		}

	}
	if(m==-1)printf("NO");
	else{
		for(i=0;i<n;i++){
			for(j=0;j<5;j++){
				if(i==m && (j==idx || j==idx+1))printf("+");
				else printf("%c",p[i][j]);
			}
			printf("\n");
		}
	}
}
