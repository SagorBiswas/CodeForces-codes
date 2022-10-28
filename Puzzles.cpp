//http://codeforces.com/problemset/problem/337/A

#include<iostream>
#include<cstdlib>
//#define INFINITE 99999
using namespace std;

int main()
{
	int n, m ;
	cin>>n ;
	cin>>m ;

	int a[n],b[m];

	for(int i=0;i<m;i++)cin>>b[i];

	int mn=-1,idx=-1;

	for(int i=0; i<m; i++){
		mn = b[i];
		idx = i;
		for(int j=i; j<m; j++){
			if(mn>b[j]){
				mn = b[j] ;
				idx = j ;
			}
		}
		b[idx]=b[i];
		b[i] = mn;
	}
	//for(int i=0; i<m; i++) cout<<b[i]<<" ";
	//cout<<endl<<" ";

    mn = abs(b[n-1] - b[0]) ;
    int tmp = 0 ;
	for(int i=1; i<=m-n; i++){
		tmp = abs(b[i+n-1] - b[i]);
		//cout<<b[i+n-1]<<"-"<<b[i]<<"="<<tmp<<endl;
		if(mn>tmp) mn = tmp ;
	}


	cout<<mn;

	return 0;
}
