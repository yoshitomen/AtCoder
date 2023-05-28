#include <bits/stdc++.h>
#define rep(I,N) for(int I=0;I<N;I++)
using ll=long long int;
using namespace std;
const int M=1000005;
int su=0;
int main(){
	ll n;
	cin>>n;
	vector<int> cnt(M);
	vector<int> a(n);
	rep(i,n){
		cin>>a[i];
	}
	for(int x : a){ //vector aに含まれているxをすべてforで回す。
		if(cnt[x]!=0){
			cnt[x]=2;
			continue;
		}
		for(int i=x;i<M;i=i+x){
			cnt[i]+=1;
		}
	}
	for(int x:a){
		if(cnt[x]==1)su+=1;
	}
	cout<<su;
}