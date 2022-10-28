//http://codeforces.com/problemset/problem/427/A
#include<iostream>
using namespace std;

int main()
{
	int m,n,flag=0,counter=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
		flag=flag+m;
		if(m<0 && flag<0)counter++;
		if(flag<0)flag=0;
	}

	cout<<counter;

	return 0;
}
