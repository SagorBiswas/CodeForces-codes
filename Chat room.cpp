//https://codeforces.com/contest/58/problem/A

#include<iostream>
#include<cstring>


using namespace std;

int main()
{
	char a[100];
	char b[6]={'h','e','l','l','o','\0'};

	cin>>a;
	int n=strlen(a);
	int i,j=0;
	for(i=0;i<n;i++){
		if(a[i]==b[j])j++;
	}
	if(j==5)cout<<"YES";
	else cout<<"NO";

	return 0;
}
