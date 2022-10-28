//http://codeforces.com/problemset/problem/110/A

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char a[20];
	cin>>a;
	int n=strlen(a);
	int counter=0;
	for(int i=0;i<n;i++){
		if((a[i]-'0')==4 || (a[i]-'0')==7)counter++;
	}
	if(counter==4 || counter==7)cout<<"YES";
	else cout<<"NO";

	return 0;
}
