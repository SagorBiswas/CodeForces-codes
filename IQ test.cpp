//http://codeforces.com/problemset/problem/25/A

#include<iostream>

using namespace std;

int main()
{
	int n,ce=0,co=0;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<3;i++){
		if(a[i]%2)co++;
		else ce++;
	}
	if(ce>co)for(int i=0;i<n;i++){
		if(a[i]%2){
			cout<<i+1;
			return 0;
		}
	}
	else for(int i=0;i<n;i++){
		if(!(a[i]%2)){
			cout<<i+1;
			return 0;
		}
	}

}
