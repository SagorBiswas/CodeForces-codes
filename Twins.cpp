//https://codeforces.com/contest/160/problem/A

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	int s=0;
	for(int i=0;i<n;i++)s=s+a[i];

	int t,idx,mx;
	for(int i=0;i<n;i++){
		idx=i;
		mx=a[i];
		for(int j=i;j<n;j++){
			if(mx<a[j]){
				mx=a[j];
				idx=j;
			}
		}
		t=a[i];
		a[i]=mx;
		a[idx]=t;
	}
	int i,sum=0;
	for(i=0;i<n;i++){
		sum=sum+a[i];
		if(sum>s/2)break;
	}
	cout<<i+1;
	return 0;
}
