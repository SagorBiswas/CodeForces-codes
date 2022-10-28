//https://codeforces.com/contest/281/problem/A

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char a[1000];
	cin>>a;
	int n=strlen(a);
	if(a[0]>='a' && a[0]<='z')a[0]=a[0]-'a'+'A';
	for(int i=0;i<n;i++)cout<<a[i];
	return 0;
}
