//http://codeforces.com/problemset/problem/136/A

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	int b[n]={};
	for(int i=0;i<n;i++)cin>>a[i];
	int t;
	for(int i=0;i<n;i++){
		t=a[i];
		b[t-1]=i+1;
	}
	for(int i=0;i<n;i++)cout<<b[i]<<" ";

	return 0;
}
