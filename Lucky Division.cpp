//https://codeforces.com/contest/122/problem/A

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int ck[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};

	for(int i=0;i<14;i++){
        if(n==ck[i]){
			cout<<"YES";
			return 0;
        }
		else if(n%ck[i]==0){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}
