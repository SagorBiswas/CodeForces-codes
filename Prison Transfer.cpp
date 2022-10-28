//http://codeforces.com/problemset/problem/427/B

#include<iostream>
using namespace std;

int main()
{
	long long n,t,c,a,i,tmp=0,counter=0;

	cin>>n>>t>>c;

	for(i=0;i<n;i++){
		cin>>a;
		if(a>t){
			tmp = 0;
		}
		else{
			tmp++;
		}
		if(tmp==c){
			counter++;
			tmp-=1;
		}
	}
	cout<<counter;

	return 0;
}
