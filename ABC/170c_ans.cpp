#include <bits/stdc++.h>
#define rep(I,N) for(int I=0;I<N;I++)
using ll=long long int;
using namespace std;

int main(){
	int x,n;
	cin>>x>>n;
	vector<int> d(102); //0で初期化
	rep(i,n){
		int p;	
		cin>>p;
		d[p]=1;
	}
	pair<int,int> ans(9999,-1);
	rep(i,101){
		if(d[i]==1)continue;
		int dif = abs(x-i);
		ans=min(ans,pair<int,int>(dif,i)); //difが先に判定されて同じならiが判定される
	}
	cout<<ans.second<<endl; //2番目の引数にアクセス

}
