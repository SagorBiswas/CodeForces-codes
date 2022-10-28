//https://codeforces.com/contest/158/problem/B

#include<stdio.h>

main()
{
	int n[5]={0};
	int m,k,i,j,l=0,b;
	scanf("%d",&m);
	while(m--){
		scanf("%d",&k);
		n[k]++;

	}
	
	if(!(n[2]%2)){
		if(n[1]>n[3]){
			if(!((n[1]-n[3])%4))l=(n[1]-n[3])/4;
			else l=((n[1]-n[3])/4)+1;
		}
	}


	else{
		b=n[3]+2;
		if(n[1]>b){
			if(!((n[1]-b)%4))l=(n[1]-b)/4+1;
			else l=((n[1]-b)/4)+2;
		}
		else l=1;
	}

	j=n[4]+n[3]+n[2]/2+l;

	printf("\n%d",j);
}
