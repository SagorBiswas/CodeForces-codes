//http://codeforces.com/contest/734/problem/B
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a[4];
	int mn=-1,counter=0;
	for(int i=0;i<4;i++)cin>>a[i];
	if(a[3]>a[2])mn=a[2];
	else mn=a[3];
	if(a[0]>mn){
		counter+=mn*256;
		a[0]=a[0]-mn;
	}
	else {
		counter+=a[0]*256;
		cout<<counter;
		return 0;
	}
	if(a[0]>a[1]){
		counter+=32*a[1];
		cout<<counter;

	}
	else {
		counter+=32*a[0];
		cout<<counter;
	}

	return 0;
}
