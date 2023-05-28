#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#define rep(I,N) for(int I=0;I<N;I++)
using ll=long long int;
using namespace std;
int ans=0;
const int N = 200000;
int main(){
	ll n,m,k;
	cin>>n>>m>>k;
	ll a[n+1],b[m+1];
	a[0]=0;
	b[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]+=a[i-1];
	}
	for(int i=1;i<=m;i++){
		cin>>b[i];
		b[i]+=b[i-1];
	}
	int j=m;
	for(int i=0;i<=n;i++){	
		if(k<a[i])break;
		for( ;k<(a[i]+b[j]);j--);
			ans=max(ans,i+j);
	}
	
	cout<<ans<<endl;
}