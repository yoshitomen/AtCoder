#include <bits/stdc++.h>
#include <istream>
#include <vector>
#define rep(I,N) for(int I=0;I<N;I++)
using ll=long long int;
using namespace std;

int main(){
	ll N=0;
	char s[2000000],t[2000000];

	cin>>s;
	cin>>t;
	string S=s;
	rep(i,S.size()){
		if(!(s[i]==t[i]))N++;
	}
	cout<<N;
}
