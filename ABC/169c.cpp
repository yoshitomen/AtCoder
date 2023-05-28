#include <bits/stdc++.h>
using namespace std;
using ll=long long int;
#define rep(I,N) for(int I=0;I<N;I++)

int main(){

	ll a;
	long double b;
	cin>>a>>b;
	b=(int)(b*100+0.05);
	ll ans = a*b;
	cout<<ans/100;

}
