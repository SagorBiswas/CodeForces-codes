//http://codeforces.com/problemset/problem/41/A

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char a[101];
	char b[101];

	cin>>a;
	cin>>b;

	int n,m;
	n=strlen(a);
	m=strlen(b);

	if(m != n){
		cout<<"NO";
		return 0;
	}


	for(int i=0,j=n-1;i<n;i++,j--){
		if(a[i]!=b[j]){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
