//https://codeforces.com/contest/732/problem/B

#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int main()
{

	int n,k,j,sumi=0,sumf=0;

	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		sumi=sumi+a[i];
	}

	for(int i=1;i<n;i++){
		if(a[i]+a[i-1]<k)a[i]=k-a[i-1];
	}
	for(int i=0;i<n;i++){
		sumf=sumf+a[i];
	}
	cout<<sumf-sumi<<endl;
	for(int i=0;i<n;i++)cout<<a[i]<<" ";

	return 0;

}


/*

for(i=0;i<n;i++){
		cin>>a[i];
		if(i>0)tm=a[i]+a[i-1];
		if(mn>tm)mn=tm;
	}
	printf("%d\n",k-mn);
	for(i=1;i<n;i++){
		if(a[i]+a[i-1]<k)a[i]=k-a[i-1];
	}
	printf("%d",a[0]);
	for(i=1;i<n;i++){
		printf(" %d",a[i]);
	}

*/


