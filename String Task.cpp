//https://codeforces.com/contest/118/problem/A

#include<stdio.h>
#include<string.h>

main()
{
	char p[101];
	int i,j,k,n;
	gets(p);
	n=strlen(p);
	
	char f[2*n];

	for(i=0;i<n;i++){
		if(p[i]>='A' && p[i]<='Z')p[i]=p[i]-'A'+'a';
	}

	j=0;
	for(i=0;i<n;i++){
		if((p[i]=='a') || (p[i]=='e') || (p[i]=='i') || (p[i]=='o') || (p[i]=='u') || (p[i]=='y')){
			
		}
		else{
			f[j]=46;
			f[j+1]=p[i];
			j+=2;
		}
	}
	
	f[j]='\0';
	k=strlen(f);
	for(i=0;i<k;i++)printf("%c",f[i]);
	
}
