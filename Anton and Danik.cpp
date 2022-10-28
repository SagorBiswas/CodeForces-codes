//http://codeforces.com/contest/734/problem/A
#include<iostream>
using namespace std;

int main()
{
	long long n;
	cin>>n;
	long long ta=0,td=0,i;
	char ch;
	for(i=0;i<n;i++){
		cin>>ch;
		if(ch=='A')ta++;
		else td++;
	}
	if(ta>td)cout<<"Anton";
	else if(td>ta)cout<<"Danik";
	else cout<<"Friendship";

	return 0;
}
