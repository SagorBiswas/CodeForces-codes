//http://codeforces.com/problemset/problem/266/B

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int n,t;
	cin>>n>>t;
	char a[n];
	cin>>a;
	for(int j=0;j<t;j++){
		for(int i=1;i<n;i++){
			if(a[i]=='G' && a[i-1]=='B'){
				a[i-1]='G';
				a[i]='B';
				i++;
			}
		}
	}
	cout<<a;

	return 0;
}
