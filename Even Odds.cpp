//http://codeforces.com/problemset/problem/318/A

#include<iostream>
using namespace std;

int main()
{
	long long n,k;
	cin>>n>>k;
	if(n%2){
		if(k>(n/2)+1){
			cout<<2*(k-(n/2)-1);
			return 0;
		}
		else {
			cout<<2*k-1;
			return 0;
		}
	}
	else{
		if(k>n/2){
			cout<<2*(k-n/2);
			return 0;
		}
		else {
			cout<<2*k-1;
			return 0;
		}
	}

}
