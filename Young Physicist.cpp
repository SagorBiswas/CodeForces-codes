//http://codeforces.com/problemset/problem/69/A

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a,b,c,sa=0,sb=0,sc=0;

	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		sa=sa+a;
		sb=sb+b;
		sc=sc+c;
	}
	if(sa==0 && sb==0 && sc==0)cout<<"YES";
	else cout<<"NO";

	return 0;
}
