//http://codeforces.com/problemset/problem/580/A
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int previous=-1,newer,counter=0,mx=-1;
	for(int i=0;i<n;i++){
		cin>>newer;
		if(newer>=previous)counter++;
		else{
			if(mx<counter)mx=counter;
			counter=1;
		}
		previous = newer;
	}
	if(mx<counter)mx=counter;
	cout<<mx;
	return 0;
}
