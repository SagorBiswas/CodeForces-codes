//http://codeforces.com/problemset/problem/709/A

#include<iostream>
using namespace std;

int main()
{
	int n,b,d,tmp,counter=0,res=0;
	cin>>n>>b>>d;

	for(int i=0;i<n;i++){
		cin>>tmp;
		if(tmp<=b){
			counter+=tmp;
			if(counter>d){
				res++;
				counter=0;
			}
		}

	}
	cout<<res;

	return 0;
}
