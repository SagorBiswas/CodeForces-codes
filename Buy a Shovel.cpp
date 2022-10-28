//http://codeforces.com/problemset/problem/732/A
#include<iostream>

using namespace std;

int main()
{
	int k,r,n,z;

	cin>>k>>r;

	if(k%10==0){
		n=1;
		cout<<n;
		return 0;
	}

	if(k%10==5){
		if(r==5)n=1;
		else n=2;
		cout<<n;
		return 0;
	}

	if(k%10==2){
		if(r==2)n=1;
		else if (r==4)n=2;
		else n=5;
		cout<<n;
		return 0;
	}

	int l=k%10;
	for(int i=1;i<10;i++){
		z=(l*i)%10;
		if(z==r || z==0){
			n=i;
			cout<<n;
			return 0;
		}
	}
	cout<<10;

}
/*
int k,n,r,i,z;

	scanf("%d%d",&k,&r);
	if(k==r){
		printf("%d",1);
		return 0;
	}
	else if(k%10==0){
		printf("%d",1);
		return 0;
	}
	else if(k%10==5){
		printf("%d",1);
		return 0;
	}

	else{
		k=k%10;
		for(i=1;i<10;i++){
			n=k*i;
			if(n%10 == r || n%10==0 ){
				if(k==2 && i>5)printf("%d",5);
				else printf("%d",i);
				return 0;
			}
		}
	}
*/
