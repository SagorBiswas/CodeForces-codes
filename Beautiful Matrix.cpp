#include<iostream>

using namespace std;

int abs(int n){
	if(n<0)n=-n;
	return n;
}

int main()
{
	int a[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++)cin>>a[i][j];
	}
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(a[i][j]!=0)break;
		}
		if(j!=5)break;
	}
	i=i+1;j=j+1;
	int k=abs(i-3)+abs(j-3);
	cout<<k;
	return 0;
}
