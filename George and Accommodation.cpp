//http://codeforces.com/problemset/problem/467/A

#include<iostream>
using namespace std;

int main()
{
	int n,counter=0;
	int p,q;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p>>q;
		if((q-p)>1)counter++;
	}
	cout<<counter;

	return 0;
}
