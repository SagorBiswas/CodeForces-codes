//http://codeforces.com/problemset/problem/271/A

#include<iostream>

using namespace std;

int isbeauty(int n){
	int a[4];
	for(int i=3;i>=0;i--){
		a[i]=n%10;
		n=n/10;
	}
	int t;
	for(int i=0;i<3;i++){
		t=a[i];
		for(int j=i+1;j<4;j++){
			if(a[j]==t)return 0;
		}
	}
	return 1;
}

int main()
{
	int n;
	cin>>n;

	for(int i=1;;i++){
		if(isbeauty(n+i)){
			cout<<n+i;
			break;
		}
	}
	return 0;
}
