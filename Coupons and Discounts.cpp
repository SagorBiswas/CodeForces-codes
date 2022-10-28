// https://codeforces.com/contest/731/problem/B

#include<stdio.h>

int main()
{
	int n,k,m=2,j=1,i,r=1;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&k);

		if(k%2==0){
			if(k==0 && j<0 ){
				printf("NO");
				return 0;
			}
			else if(j>0){
				m=k;
			}
			else if(j<0){
				j=j;
				k=m;
			}
		}
		else if(k%2){
			j=-j;
			m=k;
		}
	}
	if(j>0)printf("YES");
	else printf("NO");


	return 0;
}

