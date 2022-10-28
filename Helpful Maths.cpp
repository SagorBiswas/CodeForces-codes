//https://codeforces.com/contest/339/problem/A

#include<stdio.h>
#include<string.h>

main()
{
	char a[101];
	char b[51];
	int n,m,i,j,k,mn,tmp,idx;
	gets(a);
	n=strlen(a);

	j=0;
	for(i=0;i<n;i=i+2){
		b[j]=a[i];
		j++;
	}
	b[j]='\0';
	m=strlen(b);

	for(i=0;i<m;i++){
		mn=b[i];idx=i;
		for(j=i;j<m;j++){
			if(mn>b[j]){
				mn=b[j];
				idx=j;
			}
		}
		tmp=b[i];
		b[i]=b[idx];
		b[idx]=tmp;
	}

	j=0;
	for(i=0;i<n;i+=2){
		a[i]=b[j];
		j++;
	}
	for(i=0;i<n;i++)printf("%c",a[i]);
}
