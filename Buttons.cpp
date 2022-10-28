//http://codeforces.com/problemset/problem/268/B

#include<iostream>
using namespace std;



int main()
{
	int n,s;
	cin>>n;
	s=n;
	for(int i=1;i<n;i++){
		s=s+i*(n-i);
	}
	cout<<s;

	return 0;

}
