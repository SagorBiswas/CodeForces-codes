//http://codeforces.com/problemset/problem/733/A

#include<iostream>
#include<cstring>
using namespace std;

int isvowel(char a){
	if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U' || a=='Y' || a=='\0')return 1;
	else return 0;
}

int main()
{
	char a[100];
	cin>>a;

	int n;
	n=strlen(a);
	int counter=0,mx=0;

	for(int i=0;i<=n;i++){
		counter++;
		if(isvowel(a[i])){
			if(counter>mx)mx=counter;
			counter=0;
		}
	}
	cout<<mx;

	return 0;
}
