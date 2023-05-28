#include <iostream>
#include <math.h>
#include <stdio.h>
#include <map>
using namespace std;

int n,m;
long x;

int main(){
	cin>>n>>m>>x;
	long c[n];
	long a[n][m];

	for(int i=0;i<n;i++){
		cin>>c[i];
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}

	long ans=99999999999;
	bool check=false;

	for(int N=0;N<(1<<n);N++){
		long cost=0;
		long level[m]={0};
		bool ok = true;
		for(int i=0;i<n;i++){
			if((N>>i)&1){
				cost += c[i];
				for(int j=0;j<m;j++){
					level[j]+=a[i][j];
				}
			}
		}
		for(int j=0;j<m;j++){
			if(level[j]<x) ok = false;
		}

		if(ok){
			check = true;
			ans = min(ans,cost);
		}
	}
	if(check)cout<<ans<<endl;
	else cout<<-1<<endl;
}
