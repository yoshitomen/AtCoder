#include <bits/stdc++.h>
#define rep(I,N) for(int I=0; I < N; I++)
using ll=long long int;
using namespace std;

ll sik = 1e18;
bool zero = false;

int main(){
	ll n;
	cin>>n;
	ll a[n];
	rep(i,n){
		cin>>a[i];
		if(a[i]==0)zero = true;
	}
	if(zero){cout<<'0';return 0;}
	
	rep(i,n){
		sik/=a[i];
	}
	if(sik<1)cout<<-1;
	else{
		ll it =1;
		rep(i,n){it*=a[i];}
			cout<<it;
	}

}
