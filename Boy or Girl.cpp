//https://codeforces.com/contest/236/problem/A

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char a[100];
	int b[26]={};
	//for(int i=0;i<26;i++)cout<<b[i];
	cin>>a;
	int n=strlen(a);
	int k=0;
	for(int i=0;i<n;i++){
		k=a[i]-'a';
		b[k]++;
	}
	k=0;
	for(int i=0;i<26;i++){
		if(b[i]!=0)k++;
	}
	if(k%2)cout<<"IGNORE HIM!";
	else cout<<"CHAT WITH HER!";

	return 0;
}
