//http://codeforces.com/problemset/problem/546/A

#include<iostream>

using namespace std;

int main()
{
	long int n;
	int k,w;
	cin>>k>>n>>w;

	for(int i=1;i<=w;i++){
		n=n-i*k;
	}
	if(n<0)n=-n;
	else n=0;
	cout<<n;

	return 0;
}
