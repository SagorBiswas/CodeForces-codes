//http://codeforces.com/problemset/problem/208/A

#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;


int main()
{
	char a[201];
	int i,l,k=0;
	cin>>a;

	l=strlen(a);
	for(i=0;i<l;i++){
		if((a[i]=='W')&&(a[i+1]=='U')&&(a[i+2]=='B')){
			i+=2;
			if(k){
				cout<<" ";
				k=0;
			}
		}
		else {
			cout<<a[i];
			k=1;
		}
	}

	return 0;

}
