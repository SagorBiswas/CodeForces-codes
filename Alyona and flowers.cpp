//http://codeforces.com/contest/740/problem/B
#include<iostream>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int a[n],bl[m],br[m],sum[m];

	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<m;i++)cin>>bl[i]>>br[i];

	int s,j;
	for(int i=0;i<m;i++){
		s=0;
		for(j=bl[i]-1;j<br[i];j++){
			s=s+a[j];
		//cout<<a[j]<<" ";
		}
		//cout<<endl;
		sum[i]=s;
	}
	s=0;
	for(int i=0;i<m;i++){
		if(sum[i]>0)s=s+sum[i];
	}
	cout<<s;

	return 0;
}
