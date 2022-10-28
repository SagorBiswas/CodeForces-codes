//http://codeforces.com/problemset/problem/479/A
#include<iostream>
using namespace std;

int main()
{
	int a,b,c,s[6];
	cin>>a>>b>>c;
	s[0]= a+b*c;
	s[1]= a*(b+c);
	s[2]= a*b*c;
	s[3]= (a+b)*c;
	s[4]= a+b+c;
	s[5]= a*b+c;

	int mx=-1;
	for(int i=0; i<6; i++){
		if(s[i]>mx)mx=s[i];
	}
	cout<<mx;

	return 0;
}


