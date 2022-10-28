//http://codeforces.com/problemset/problem/733/B
#include<iostream>

using namespace std;

int abs(int n){
	if(n<0)n=-n;
	return n;
}

int main()
{
	int n,sl=0,sr=0,i,j;

	cin>>n;
	int l[n],r[n];

	for(i=0;i<n;i++){
		cin>>l[i]>>r[i];		//taking inputs
	}

	for(i=0;i<n;i++){
		sl=sl+l[i];
	}
	for(i=0;i<n;i++){
		sr=sr+r[i];
	}

	int diff=abs(sr-sl);	//finding initial beauty
	//cout<<diff<<endl;

	int k,p,mx=-1,idx=-1;

	for(i=0;i<n;i++){
		if(abs(r[i]-l[i])>mx){
			mx=abs(r[i]-l[i]);
			idx=i;
		}
	}
	k=sl-l[idx]+r[idx];
	p=sr-r[idx]+l[idx];
	//cout<<k<<"and"<<p<<endl;
	if(abs(k-p)>diff){
		cout<<idx+1;
		return 0;
	}

	mx=0;idx=-1;

	if(sl>sr){
		for(i=0;i<n;i++){
			if(l[i]<r[i]){
				if(mx<(r[i]-l[i])){
					mx=(r[i]-l[i]);
					idx=i;
				}
			}
		}
	}
	else{
		for(i=0;i<n;i++){
			if(l[i]>r[i]){
				if(mx<(l[i]-r[i])){
					mx=(l[i]-r[i]);
					idx=i;
				}
			}
		}
	}

	cout<<idx+1;



	return 0;
}


/*
if((r[i]-l[i])>mx){
				mx=r[i]-l[i];
				idx=i;
			}
			*/
