//http://codeforces.com/problemset/problem/148/A

#include<iostream>
using namespace std;

int main()
{
	int d,r,counter=0;
	int a[4];
	for(int i=0;i<4;i++)cin>>a[i];
	cin>>d;

	for(int i=1;i<=d;i++){
		r=1;
		for(int j=0;j<4;j++){
			if(i%a[j]==0){
				r=0;
				break;
			}
		}
		if(r)counter++;
	}
	cout<<d-counter;

	return 0;
}
