#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int n,k,g,t;
	cin>>n>>k;
	char a[n];
	cin>>a;
	for(int i=0;i<n;i++){
		if(a[i]=='G')g=i;
		if(a[i]=='T')t=i;
	}
	if(g<t){
		for(int i=g;i<=t;i+=k){
			if(a[i]=='#'){
				cout<<"NO";
				return 0;
			}
			if(a[i]=='T'){
				cout<<"YES";
				return 0;
			}
		}
	}
	else if(g>t){
		for(int i=g;i>=t;i-=k){
			if(a[i]=='#'){
				cout<<"NO";
				return 0;
			}
			if(a[i]=='T'){
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
	return 0;
}
